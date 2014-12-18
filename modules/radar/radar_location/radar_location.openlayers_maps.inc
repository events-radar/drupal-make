<?php
/**
 * @file
 * radar_location.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function radar_location_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'radar_all_locations_geofield_widget_map';
  $openlayers_maps->title = 'All Locations Geofield Widget Map';
  $openlayers_maps->description = 'A Map Used for Geofield Input with all existing locations marked.';
  $openlayers_maps->data = array(
    'width' => '600px',
    'height' => '400px',
    'image_path' => 'profiles/radar/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/radar/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.656249961800324, 47.10004471195834',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'radar_locations_openlayers_1' => 'radar_locations_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'low_stroke_color' => 'rgb(141, 203, 61)',
        'low_opacity' => '0.8',
        'low_point_radius' => '10',
        'low_label_outline' => '1',
        'middle_color' => 'rgb(49, 190, 145)',
        'middle_stroke_color' => 'rgb(49, 190, 145)',
        'middle_opacity' => '0.8',
        'middle_point_radius' => '16',
        'middle_label_outline' => '1',
        'high_color' => 'rgb(35, 59, 177)',
        'high_stroke_color' => 'rgb(35, 59, 177)',
        'high_opacity' => '0.8',
        'high_point_radius' => '22',
        'high_label_outline' => '1',
        'label_low_color' => '#000000',
        'label_low_opacity' => '0.8',
        'label_middle_color' => '#000000',
        'label_middle_opacity' => '0.8',
        'label_high_color' => '#000000',
        'label_high_opacity' => '0.8',
      ),
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'openlayers_behavior_geofield' => 'openlayers_behavior_geofield',
          'osm_mapnik' => 0,
          'radar_locations_openlayers_1' => 0,
        ),
        'point_zoom_level' => '15',
        'zoomtolayer_scale' => '10',
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'radar_locations_openlayers_1' => 'radar_locations_openlayers_1',
        ),
        'popupAtPosition' => 'mouse',
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'radar_locations_openlayers_1' => 'radar_locations_openlayers_1',
    ),
    'layer_weight' => array(
      'radar_locations_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'radar_locations_openlayers_1' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'radar_locations_openlayers_1' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'radar_locations_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'radar_locations_openlayers_1' => 'radar_locations_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'radar_locations_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default_marker_black_small',
      'select' => 'default_marker_black_small',
      'temporary' => 'default_marker_black',
    ),
  );
  $export['radar_all_locations_geofield_widget_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'radar_location_geofield_widget_map';
  $openlayers_maps->title = 'Location Geofield Widget Map';
  $openlayers_maps->description = 'A Map Used for Geofield Input';
  $openlayers_maps->data = array(
    'width' => '600px',
    'height' => '400px',
    'image_path' => 'profiles/radar/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/radar/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => array(),
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.656249961800324, 47.10004471195834',
        'zoom' => '4',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'openlayers_behavior_geofield' => 'openlayers_behavior_geofield',
          'osm_mapnik' => 0,
        ),
        'point_zoom_level' => '15',
        'zoomtolayer_scale' => '10',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
    ),
    'layer_weight' => array(
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['radar_location_geofield_widget_map'] = $openlayers_maps;

  return $export;
}
