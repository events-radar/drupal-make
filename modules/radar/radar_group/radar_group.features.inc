<?php
/**
 * @file
 * radar_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function radar_group_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function radar_group_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('Squat, location, action group, city.'),
      'has_title' => '1',
      'title_label' => t('Group name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
