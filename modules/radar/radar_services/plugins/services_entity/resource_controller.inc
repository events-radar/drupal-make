<?php
/**
 * This class is designed to create a very clean API that integrates with
 * the services and entity modules. We want to strip all "drupalisms" out
 * of the API. For example, there should be no [LANGUAGE_NONE][0][value] or
 * field_ in the API.
 *
 * It should be possible to create an API that is easily replicated on another
 * system.
 *
 * Much of this code is borrowed from restws module.
 */
class RadarServicesEntityResourceController extends ServicesEntityResourceControllerClean {

 /**
  * Implements ServicesResourceControllerInterface::retrieve().
  *
  * Adds language handling. Uses UUID.
  */
  public function retrieve($entity_type, $entity_id, $fields, $revision, $language = LANGUAGE_NONE) {
    // Load by UUID, and if specified VUUID.
    try {
      if (!empty($revision)) {
        $conditions = array('vuuid' => $revision);
      }
      else {
        $conditions = array();
      }
      $entities = entity_uuid_load($entity_type, array($entity_id), $conditions);
      $entity = reset($entities);
    }
    catch (Exception $exception) {
      watchdog_exception('uuid_services', $exception);
      return services_error($exception, 406, $uuid);
    }
    if (empty($entity)) {
      services_error('Entity or revision not found', 404);
    }

    return $this->format_entity($entity_type, $entity, $fields, $language);
  }

  public function format_entity($entity_type, $entity, $fields, $language) {
    // Users get special treatment to remove sensitive data.
    if ($entity_type == 'user') {
      // Use the helper that Services module already has.
      services_remove_user_data($entity);
    }
    if ($entity_type == 'node') {
      $this->removeNodeData($entity);
    }

    $wrapper = entity_metadata_wrapper($entity_type, $entity);
    if ($language != LANGUAGE_NONE) {
      $wrapper->language($language);
    }
    return $this->get_data($wrapper, $fields);
  }

 /**
  * Implements ServicesResourceControllerInterface::delete().
  *
  * Uses UUID.
  */
  public function delete($entity_type, $entity_id) {
    try {
      $return = entity_uuid_delete($entity_type, array($entity_id));
      return $return;
    }
    catch (Exception $exception) {
      watchdog_exception('uuid_services', $exception);
      return services_error($exception, 406, $uuid);
    }
  }

  /**
   * Implements ServicesResourceControllerInterface::index().
   *
   * Adds language handling.
   */
  public function index($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction, $language = LANGUAGE_NONE) {
    $property_info = entity_get_all_property_info($entity_type);
    $parameters = $this->transform_values($entity_type, $property_info, $parameters);
    $sort = (isset($property_info['field_' . $sort]))?'field_' . $sort:$sort;

    // Call the parent method, which takes care of access control.
    $entities = ServicesEntityResourceController::index($entity_type, '*', $parameters, $page, $pagesize, $sort, $direction);
    foreach($entities as $entity) {
      $wrapper = entity_metadata_wrapper($entity_type, $entity);
      if ($language != LANGUAGE_NONE) {
        $wrapper->language($language);
      }
      $return[] = $this->get_data($wrapper, $fields);
    }
    return $return;
  }

 /**
  * return the data structure for an entity stripped of all "drupalisms" such as
  * field_ and complex data arrays.
  *
  * @param type $wrapper
  * @return type
  */
  protected function get_data($wrapper, $fields = '*') {
    if ($fields != '*') {
      $fields_array = explode(',', $fields);
    }
    $data = array();
    $filtered = $this->property_access_filter($wrapper);
    foreach ($filtered as $drupal_name => $property) {
      // We don't want 'field_' at the beginning of fields. This is a drupalism and shouldn't be in the api.
      $name = preg_replace('/^field_/', '', $drupal_name);
      // If fields is set and it isn't one of them, go to the next.
      if ($fields != '*' && !in_array($name, $fields_array)) {
        continue;
      }
      try {
        if ($property instanceof EntityDrupalWrapper) {
          // For referenced entities only return the URI.
          if ($id = $property->getIdentifier()) {
            $data[$name] = $this->get_resource_reference($property->type(), $id);
          }
        }
        elseif ($property instanceof EntityValueWrapper) {
          $data[$name] = $property->value();
        }
        elseif ($property instanceof EntityListWrapper || $property instanceof EntityStructureWrapper) {
          $data[$name] = $this->get_data($property);
        }
      }
      catch (EntityMetadataWrapperException $e) {
        // A property causes problems - ignore that.
      }
    }
    return $data;
  }

  /**
   * Return a resource reference array.
   *
   * @param type $resource
   * @param type $id
   * @return type
   */
  protected function get_resource_reference($resource, $id) {
    $uri = services_resource_uri(array('entity_' . $resource, $id));
    // locale is adding /lang/ to the beginning of the url.
    // TODO investigate how to do this properly for /api/*
    $uri = preg_replace(',([a-z:]+)//([^/]+)/[a-z]{2}/(.*),', '$1//$2/$3', $uri, 1);
    $return = array(
      'uri' => $uri,
      'id' => $id,
      'resource' => $resource,
    );
    if (module_exists('uuid') && $info = entity_get_info($resource) && !empty($info['entity keys']['uuid'])) {
      $ids = entity_get_uuid_by_id($resource, array($id));
      if ($id = reset($ids)) {
        $return['uuid'] = $id;
      }
    }
    return $return;
  }

  /**
   * Filters out properties where view access is not allowed for the current user.
   *
   * @param EntityMetadataWrapper $wrapper
   *   EntityMetadataWrapper that should be checked.
   *
   * @return
   *   An array of properties where access is allowed, keyed by their property
   *   name.
   */
  protected function property_access_filter($wrapper) {
    $filtered = array();
    foreach ($wrapper as $name => $property) {
      try {
        if ($property->access('view')) {
          $filtered[$name] = $property;
        }
      }
      catch (EntityMetaDataWrapperException $e) {
        // Log the exception and ignore the property. This is known to happen
        // when attempting to access the 'book' property of a non-book node.
        // In such cases Entity API erroneously throws an exception.
        // @see https://drupal.org/node/2051087 and linked issues.
        watchdog('radar_services_entity', 'Exception testing access to property @p: @e', array('@p' => $name, '@e' => $e->getMessage()), WATCHDOG_WARNING);
      }
    }
    return $filtered;
  }

  /**
   * Checks for field_ prefix for each field and adds it if necessary.
   *
   * @param type $values
   * @return type
   */
  protected function transform_values($entity_type, $property_info, $values) {
    foreach($values as $key => $value) {
      // Handle Resource references so we can pass pack the object.
      if (is_array($value) && isset($value['id'])) {
        $values[$key] = $value['id'];
      }
      // Check if this is actually a field_ value
      if (isset($property_info['field_' . $key])) {
        $values['field_' . $key] = $values[$key];
        unset($values[$key]);
      }
    }
    return $values;
  }

  /**
   * Helper function to create a wrapped entity from provided data values.
   *
   * @param $entity_type
   *   The type of entity to be created.
   * @param $values
   *   Array of data property values.
   * @return EntityDrupalWrapper
   *   The wrapped entity.
   * @todo the created wrapper should probably be statically cached, so we
   * don't have to build it twice (first on access() and again on create()).
   */
  protected function createWrapperFromValues($entity_type, array &$values) {
    $property_info = entity_get_all_property_info($entity_type);
    $values = $this->transform_values($entity_type, $property_info, $values);
    try {
      $wrapper = entity_property_values_create_entity($entity_type, $values);
    }
    catch (EntityMetadataWrapperException $e) {
      services_error($e->getMessage(), 406);
    }
    return $wrapper;
  }

  /**
   * Determine whether a wrapper property has a specified value.
   *
   * @param \EntityMetadataWrapper $wrapper
   *   The wrapper whose property is to be checked.
   * @param $name
   *   The name of the property to check.
   * @param mixed $value
   *   The value to compare it to. May be a wrapper, identifier or raw value.
   *
   * @return boolean
   *   TRUE if the property's current value is equal to the given value. FALSE
   *   if they are different.
   */
  protected function propertyHasValue(EntityMetadataWrapper $wrapper, $name, $value) {
    $property = $wrapper->{$name};
    if ($property instanceof EntityDrupalWrapper) {
      if ($value instanceof EntityDrupalWrapper) {
        return $value->getIdentifier() == $property->getIdentifier();
      }
      elseif (is_numeric($value)) {
        return $value == $property->getIdentifier();
      }
    }
    return $value == $property->value();
  }

  private function removeNodeData($entity) {
    // TODO this needs some test, like if the user can change the field.
    $privileged_access = array(
      'og_group_request', 'uid', 'name'
    );
    foreach ($privs as $field) {
      if (isset($entity->$field)) {
        unset($entity->$field);
      }
    }
  }
}
