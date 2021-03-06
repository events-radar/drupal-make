<?php
/**
 * @file
 * radar_listings_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_listings_group_ctools_plugin_api($module = NULL, $api = NULL) {
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
function radar_listings_group_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function radar_listings_group_node_info() {
  $items = array(
    'listings_group' => array(
      'name' => t('Listings group'),
      'base' => 'node_content',
      'description' => t('A collective who maintain events listings, either online or offline. '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
