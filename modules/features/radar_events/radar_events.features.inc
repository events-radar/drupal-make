<?php

/**
 * Implementation of hook_content_default_fields().
 */
function radar_events_content_default_fields() {
  module_load_include('inc', 'radar_events', 'radar_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_events_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function radar_events_ctools_plugin_api() {
  module_load_include('inc', 'radar_events', 'radar_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_events_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function radar_events_node_info() {
  module_load_include('inc', 'radar_events', 'radar_events.features.node');
  $args = func_get_args();
  return call_user_func_array('_radar_events_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function radar_events_user_default_permissions() {
  module_load_include('inc', 'radar_events', 'radar_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_events_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function radar_events_strongarm() {
  module_load_include('inc', 'radar_events', 'radar_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_events_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function radar_events_views_default_views() {
  module_load_include('inc', 'radar_events', 'radar_events.features.views');
  $args = func_get_args();
  return call_user_func_array('_radar_events_views_default_views', $args);
}
