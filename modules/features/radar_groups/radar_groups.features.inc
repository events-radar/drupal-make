<?php

/**
 * Implementation of hook_content_default_fields().
 */
function radar_groups_content_default_fields() {
  module_load_include('inc', 'radar_groups', 'radar_groups.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_groups_content_default_fields', $args);
}

/**
 * Implementation of hook_node_info().
 */
function radar_groups_node_info() {
  module_load_include('inc', 'radar_groups', 'radar_groups.features.node');
  $args = func_get_args();
  return call_user_func_array('_radar_groups_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function radar_groups_user_default_permissions() {
  module_load_include('inc', 'radar_groups', 'radar_groups.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_groups_user_default_permissions', $args);
}
