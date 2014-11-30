<?php
/**
 * @file
 * radar_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
 * Implements hook_flag_default_flags().
 */
function radar_group_flag_default_flags() {
  $flags = array();
  // Exported flag: "Groups Notification: All".
  $flags['notification_groups_all'] = array(
    'entity_type' => 'user',
    'title' => 'Groups Notification: All',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Inform me about all pending groups',
    'flag_long' => '',
    'flag_message' => 'Informed about all pending groups',
    'unflag_short' => 'Do not inform me about all pending groups',
    'unflag_long' => '',
    'unflag_message' => 'Not  informed about all pending groups',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'ical' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => '',
    'module' => 'radar_group',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function radar_group_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('Squats, social centers, theater groups, kitchen collectives, demonstration organizers; with or without physical locations'),
      'has_title' => '1',
      'title_label' => t('Group name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
