<?php

/**
 * Extends services_search_api.resources.inc
 */

/**
 * Callback function for the index service call.
 *
 * Adds language handling.
 *
 * @see _services_search_api_resource_retrieve().
 */
function _radar_services_search_api_resource_retrieve($index, $filter, $sort, $limit, $offset, $fields, $language) {
  $options = array(
    'parse mode' => 'terms',
    'limit' => $limit,
    'offset' => $offset,
  );

  // Initialize the query object.
  $query = search_api_query($index, $options);

  // Set the filters, transforming the query array in a SearchAPIQueryFilter
  // object.
  if (!empty($filter) && is_array($filter)) {
    module_load_include('inc', 'services_search_api', 'services_search_api.resources');
    $query_filter = new SearchApiQueryFilter();
    _services_search_api_add_filter($filter, $query_filter);
    $query->filter($query_filter);
  }

  // Also set sorts.
  if (!empty($sort) && is_array($sort)) {
    foreach ($sort as $field => $mode) {
      $query->sort($field, $mode);
    }
  }
  else {
    $query->sort('search_api_aggregation_1', 'asc');
  }

  $result = $query->execute();
  return _radar_services_search_api_process_results($result, $query, $fields, $language);
}

/**
 * @see _services_search_api_process_results().
 *
 * Adds language handling, also patched with @todo from makefile.
 */
function _radar_services_search_api_process_results($result, $query, $fields, $language) {
  if (empty($result['results']) || !is_array($result['results'])) {
    return FALSE;
  }

  module_load_include('inc', 'services_entity', 'services_entity.resources');

  $entity_type = $query->getIndex()->item_type;
  $entities = entity_load($entity_type, array_keys($result['results']));
  entity_make_entity_universal($entity_type, $entities);

  // Allow other modules to alter the entities retrieved.
  drupal_alter('services_search_api_postprocess', $entities, $entity_type);

  $resourceclass = variable_get('services_entity_resource_class', 'RadarServicesEntityResourceController');
  $resource = new $resourceclass;
  $fields = implode(',', $fields);
  foreach ($entities as $entity_id => $entity) {
    try {
      $entities[$entity_id] = $resource->format_entity($entity_type, $entity, $fields, $language);
    }
    catch (Exception $e) {
      watchdog_exception('services_search_api', $e);
      return;
    }
  }
  return $entities;
}

