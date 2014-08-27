<?php
/**
 * @file
 * radar_event_ical.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_event_ical_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function radar_event_ical_node_info() {
  $items = array(
    'event_ical_importer' => array(
      'name' => t('Event ical importer'),
      'base' => 'node_content',
      'description' => t('Configuration item for pulling in an iCal feed and converting items into events in radar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
