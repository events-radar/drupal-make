<?php
/**
 * @file
 * radar_content_moderation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_content_moderation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function radar_content_moderation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function radar_content_moderation_flag_default_flags() {
  $flags = array();
  // Exported flag: "Node inappropriate".
  $flags['inappropriate_node'] = array(
    'entity_type' => 'node',
    'title' => 'Node inappropriate',
    'global' => 0,
    'types' => array(
      0 => 'event',
      1 => 'group',
      2 => 'page',
      3 => 'post',
      4 => 'wiki',
    ),
    'flag_short' => 'Report as inappropriate',
    'flag_long' => 'Report this content as inappropriate.',
    'flag_message' => '',
    'unflag_short' => 'Cancel report as inappropriate',
    'unflag_long' => 'Report this content as appropriate',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => TRUE,
    ),
    'show_as_field' => FALSE,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'show_on_teaser' => 0,
    'flag_confirmation' => 'Are you sure you want to report this content as inappropriate?',
    'unflag_confirmation' => 'Are you sure you want cancel reporting this content as inappropriate?',
    'module' => 'radar_content_moderation',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
    'status' => FALSE,
    'import_roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
  );
  return $flags;

}
