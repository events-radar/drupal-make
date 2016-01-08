<?php
/**
 * @file
 * radar_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function radar_location_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function radar_location_eck_bundle_info() {
  $items = array(
    'location_location' => array(
      'machine_name' => 'location_location',
      'entity_type' => 'location',
      'name' => 'location',
      'label' => 'Location',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function radar_location_eck_entity_type_info() {
  $items = array(
    'location' => array(
      'name' => 'location',
      'label' => 'Location',
      'properties' => array(
        'title' => array(
          'label' => 'Address',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uuid' => array(
          'label' => 'UUID',
          'type' => 'text',
          'behavior' => 'uuid',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function radar_location_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: location
  $schemaorg['location']['location'] = array(
    'field_address' => array(
      'predicates' => array(
        0 => 'schema:address',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_map' => array(
      'predicates' => array(
        0 => 'schema:geo',
      ),
    ),
    'field_squat' => array(
      'predicates' => array(),
    ),
    'field_directions' => array(
      'predicates' => array(
        0 => 'schema:description',
      ),
    ),
  );

  return $schemaorg;
}
