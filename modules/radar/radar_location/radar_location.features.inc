<?php
/**
 * @file
 * radar_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
      ),
    ),
  );
  return $items;
}
