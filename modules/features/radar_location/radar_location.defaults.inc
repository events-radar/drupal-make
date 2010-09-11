<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _radar_location_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_openlayers_presets().
 */
function _radar_location_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'square_europe';
  $openlayers_presets->title = 'Europe (in square)';
  $openlayers_presets->description = 'Default european view for radar site.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'center' => array(
      'initial' => array(
        'centerpoint' => '8.7890624996491, 56.777956351294',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'taxonomy_regions_openlayers_1',
        'point_zoom_level' => '5',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'taxonomy_regions_openlayers_1' => 'taxonomy_regions_openlayers_1',
      'og_locations_openlayers_1' => 'og_locations_openlayers_1',
    ),
    'layer_styles' => array(
      'taxonomy_regions_openlayers_1' => 'invisible',
    ),
    'layer_activated' => array(
      'og_locations_openlayers_1' => 'og_locations_openlayers_1',
      'taxonomy_regions_openlayers_1' => 'taxonomy_regions_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
    'options' => NULL,
  );

  $export['square_europe'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'zoom_region';
  $openlayers_presets->title = 'Region (zoomed)';
  $openlayers_presets->description = 'Zoomed into region, with og points.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'center' => array(
      'initial' => array(
        'centerpoint' => '8.7890624996491, 56.777956351294',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'taxonomy_regions_openlayers_3',
        'point_zoom_level' => '5',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'taxonomy_regions_openlayers_2' => 'taxonomy_regions_openlayers_2',
      'taxonomy_regions_openlayers_3' => 'taxonomy_regions_openlayers_3',
      'region_og_openlayers_1' => 'region_og_openlayers_1',
    ),
    'layer_styles' => array(
      'taxonomy_regions_openlayers_3' => 'invisible',
      'taxonomy_regions_openlayers_2' => 'invisible',
      'taxonomy_regions_openlayers_1' => 'invisible',
    ),
    'layer_activated' => array(
      'region_og_openlayers_1' => 'region_og_openlayers_1',
      'taxonomy_regions_openlayers_3' => 'taxonomy_regions_openlayers_3',
      'taxonomy_regions_openlayers_2' => 'taxonomy_regions_openlayers_2',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
    'options' => NULL,
  );

  $export['zoom_region'] = $openlayers_presets;
  return $export;
}
