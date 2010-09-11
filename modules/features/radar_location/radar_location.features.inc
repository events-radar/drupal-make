<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function radar_location_ctools_plugin_api() {
  module_load_include('inc', 'radar_location', 'radar_location.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_location_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_openlayers_presets().
 */
function radar_location_openlayers_presets() {
  module_load_include('inc', 'radar_location', 'radar_location.defaults');
  $args = func_get_args();
  return call_user_func_array('_radar_location_openlayers_presets', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function radar_location_views_default_views() {
  module_load_include('inc', 'radar_location', 'radar_location.features.views');
  $args = func_get_args();
  return call_user_func_array('_radar_location_views_default_views', $args);
}
