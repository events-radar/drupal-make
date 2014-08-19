<?php

/**
 * @file
 * OG Radar groups selection handler.
 */

class OgRadarSelectionHandler extends OgSelectionHandler {

  public static function getInstance($field, $instance = NULL, $entity_type = NULL, $entity = NULL) {
    return new self($field, $instance, $entity_type, $entity);
  }

  /**
   * Implements EntityReferenceHandler::getReferencableEntities().
   */
  public function getReferencableEntities($match = NULL, $match_operator = 'CONTAINS', $limit = 0) {
    $options = array();
    $entity_type = $this->field['settings']['target_type'];
    list(,, $create_bundle) = entity_extract_ids($this->entity_type, $this->entity);

    $query = $this->buildEntityFieldQuery($match, $match_operator);
    if ($limit > 0) {
      $query->range(0, $limit);
    }

    $results = $query->execute();

    $create_permission = 'create ' . $create_bundle . ' content'; // @todo always content?
    $query = db_select('og_role_permission', 'p');
    $query->join('og_role', 'r', 'r.rid = p.rid');
    $query->addField('r', 'gid');
    $query->condition('r.group_type', $entity_type);
    $query->condition('r.name', 'non-member');
    $query->condition('p.permission', $create_permission);
    $nonmember_posting = $query->execute();

    foreach ($nonmember_posting as $group) {
      $results[$entity_type][$group->gid] = $group->gid;
    }

    if (!empty($results[$entity_type])) {
      $entities = entity_load($entity_type, array_keys($results[$entity_type]));
      foreach ($entities as $entity_id => $entity) {
        list(,, $bundle) = entity_extract_ids($entity_type, $entity);
        $options[$bundle][$entity_id] = check_plain($this->getLabel($entity));
      }
    }

    return $options;
  }

  public function validateReferencableEntities(array $ids) {
    if ($ids) {
      $by_membership = parent::validateReferencableEntities($ids);

      // and by permission.
      $entity_type = $this->field['settings']['target_type'];
      list(,, $create_bundle) = entity_extract_ids($this->entity_type, $this->entity);
      $create_permission = 'create ' . $create_bundle . ' content'; // @todo always content?
      $query = db_select('og_role_permission', 'p');
      $query->join('og_role', 'r', 'r.rid = p.rid');
      $query->addField('r', 'gid');
      $query->condition('r.group_type', $entity_type);
      $query->condition('r.name', 'non-member');
      $query->condition('p.permission', $create_permission);
      $query->condition('r.gid', $ids, 'IN');
      $nonmember_posting = $query->execute();

      $groups = array();
      foreach ($nonmember_posting as $group) {
        $groups[] = $group->gid;
      }

      $groups = array_merge($groups, $by_membership);

      return $groups;
    }

    return array();
  }

  /**
   * Overrides OgSelectionHandler::buildEntityFieldQuery().
   *
  public function buildEntityFieldQuery($match = NULL, $match_operator = 'CONTAINS') {
    $group_type = $this->field['settings']['target_type'];

    if (empty($this->instance['field_mode']) || $group_type != 'node' || user_is_anonymous()) {
      return parent::buildEntityFieldQuery($match, $match_operator);
    }

    $handler = EntityReference_SelectionHandler_Generic::getInstance($this->field, $this->instance, $this->entity_type, $this->entity);
    $query = $handler->buildEntityFieldQuery($match, $match_operator);

    // Show only the entities that are active groups.
    $query->fieldCondition(OG_GROUP_FIELD, 'value', 1);
    $query->fieldCondition('field_og_subscribe_settings', 'value', 'anyone');

    // Add this property to make sure we will have the {node} table later on in
    // OgRadarSelectionHandler::entityFieldQueryAlter().
    $query->propertyCondition('nid', 0, '>');

    $query->addMetaData('entityreference_selection_handler', $this);

    // FIXME: http://drupal.org/node/1325628
    unset($query->tags['node_access']);

    $query->addTag('entity_field_access');
    $query->addTag('og');

    return $query;
  }

  /**
   * Overrides OgSelectionHandler::entityFieldQueryAlter().
   *
   * Add the user's groups along with the rest of the "public" groups.
   *
  public function entityFieldQueryAlter(SelectQueryInterface $query) {
    $gids = og_get_entity_groups();
    if (empty($gids['node'])) {
      return;
    }

    $conditions = &$query->conditions();
    // Find the condition for the "field_data_field_privacy_settings" query, and
    // the one for the "node.nid", so we can later db_or() them.
    $public_condition = array();
    foreach ($conditions as $key => $condition) {
      if ($key !== '#conjunction' && is_string($condition['field'])) {
        if (strpos($condition['field'], 'field_data_field_og_subscribe_settings') === 0) {
          $public_condition = $condition;
          unset($conditions[$key]);
        }

        if ($condition['field'] === 'node.nid') {
          unset($conditions[$key]);
        }
      }
    }

    if (!$public_condition) {
      return;
    }

    $or = db_or();
    $or->condition($public_condition['field'], $public_condition['value'], $public_condition['operator']);
    $or->condition('node.nid', $gids['node'], 'IN');
    $query->condition($or);
  }
  */
}
