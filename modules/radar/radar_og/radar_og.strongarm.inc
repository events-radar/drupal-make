<?php
/**
 * @file
 * radar_og.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_og_strongarm() {
  $export = array();
  $radar_og = radar_og_get_group_types();
  $group_bundles = og_get_all_group_bundle();

  // These settings are automatic for all groups used within radar.
  if (isset($group_bundles['node'])) {
    foreach ($group_bundles['node'] as $bundle => $group_info) {
      $strongarm = new stdClass();
      $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
      $strongarm->api_version = 1;
      $strongarm->name = "field_bundle_settings_node__$bundle";
      $strongarm->value = array(
        'view_modes' => array(
          'teaser' => array(
            'custom_settings' => TRUE,
          ),
          'full' => array(
            'custom_settings' => FALSE,
          ),
          'rss' => array(
            'custom_settings' => FALSE,
          ),
          'search_index' => array(
            'custom_settings' => FALSE,
          ),
          'search_result' => array(
            'custom_settings' => FALSE,
          ),
          'diff_standard' => array(
            'custom_settings' => FALSE,
          ),
          'token' => array(
            'custom_settings' => FALSE,
          ),
        ),
        'extra_fields' => array(
          'form' => array(
            'title' => array(
              'weight' => '-5',
            ),
          ),
          'display' => array(),
        ),
      );
      $export["field_bundle_settings_node__$bundle"] = $strongarm;
    }
  }

  // Add some additional default settings if the node implements the radar
  // Specific entity integrations hook.
  if (isset($radar_og['node'])) {
    foreach ($radar_og['node'] as $bundle => $group_info) {

      $strongarm = new stdClass();
      $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
      $strongarm->api_version = 1;
      $strongarm->name = "node_options_$bundle";
      $strongarm->value = array(
        0 => 'revision',
      );
      $export["node_options_$bundle"] = $strongarm;

      $strongarm = new stdClass();
      $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
      $strongarm->api_version = 1;
      $strongarm->name = "node_preview_$bundle";
      $strongarm->value = '1';
      $export["node_preview_$bundle"] = $strongarm;

      $strongarm = new stdClass();
      $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
      $strongarm->api_version = 1;
      $strongarm->name = "node_submitted_$bundle";
      $strongarm->value = 0;
      $export["node_submitted_$bundle"] = $strongarm;

      $strongarm = new stdClass();
      $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
      $strongarm->api_version = 1;
      $strongarm->name = "og_group_manager_default_rids_node_$bundle";
      $strongarm->value = array(
        3 => '3',
      );
      $export["og_group_manager_default_rids_node_$bundle"] = $strongarm;
    }
  }

  // These following settings are ONLY for the group content type.
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = "pathauto_node_group_pattern";
  $strongarm->value = '[node:field-offline:0:field-address:locality]/[node:title]';
  $export["pathauto_node_group_pattern"] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_group';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:og-group-ref:0:field-offline:0:field-address:locality]/[node:og-group-ref:0:title]/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  return $export;
}
