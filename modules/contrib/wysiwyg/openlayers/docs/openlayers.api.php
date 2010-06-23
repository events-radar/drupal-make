<?php
// $Id: openlayers.api.php,v 1.2.2.2 2010/05/02 10:27:31 zzolo Exp $

/**
 * @file
 * Hooks provided by the OpenLayers suite of modules.  This file allows
 * hooks to be documented automatically with Doxygen, like on api.drupal.org.
 *
 * @ingroup openlayers
 */

/**
 * OpenLayers Map Preprocess Alter
 *
 * Map array alter.  Fired before processing the array, and
 * before checking for errors.  The whole array is passed
 * along and will allow you to alter it in any way.  This
 * is a good place to alter the map, if the other hooks
 * do not provide the functionality you need.
 *
 * @param $map
 *   Map array
 */
function hook_openlayers_map_preprocess_alter(&$map = array()) {
  // Do something to the $map
}

/**
 * OpenLayers Map Alter
 *
 * Post-processing Map array alter.  Fired after processing the array, and
 * before checking for errors.  The whole array is passed
 * along and will allow you to alter it in any way.  Adding behaviors,
 * pre-defined layers here will not work. This is good for minor tweaks
 * after the map has been processed.
 *
 * @param $map
 *   Map array
 */
function hook_openlayers_map_alter(&$map = array()) {
  // Do something to the $map
}

/**
 * OpenLayers Layer Types
 *
 * Provides information on layer types.  This is a CTools plugin.  Please
 * see LAYER_TYPES.txt in the module for more information.
 *
 * @return
 *   Return a nested associative array with the top level
 *   being a unique string identifier key which corresponds to the
 *   layers' types.  The next level being an array of key/value
 *   pairs:
 *   - "description": 
 *   - "layer_type": 
 */
function hook_openlayers_layer_types() {
  // Take from openlayers.layer_types.inc

  return array(
    'openlayers_layer_type_google' => array(
      'title' => t('Google'),
      'description' => t('Google Maps API Map'),
      'layer_type' => array(
        'path' => drupal_get_path('module', 'openlayers') .'/includes/layer_types',
        'file' => 'google.inc',
        'class' => 'openlayers_layer_type_google',
        'parent' => 'openlayers_layer_type',
      ),
    ),
  );
}

/**
 * OpenLayers Layers
 *
 * This hook tells OpenLayers about the available layers
 * that can be used by name in maps.
 *
 * @return
 *   Return an associative array with index being a unique string 
 *   identifier, and simple objects with the following properties:
 *   - "api_version": 
 *   - "name": 
 *   - "title": 
 *   - "data": 
 */
function hook_openlayers_layers() {
  // Taken from openlayers.layers.inc

  $layers = array();

  $layer = new stdClass();
  $layer->api_version = 1;
  $layer->name = 'google_satellite';
  $layer->title = 'Google Maps Satellite';
  $layer->description = 'Google Maps Satellite Imagery.';
  $layer->data = array(
    'baselayer' => TRUE,
    'type' => 'satellite',
    'projection' => array('900913'),
    'layer_type' => 'openlayers_layer_type_google',
  );
  $layers[$layer->name] = $layer;

  return $layers;
}

/**
 * OpenLayers Behaviors
 *
 * This hook tells OpenLayers about the available behaviors
 * that can be used in maps.
 *
 * @return
 *   Return a nested associative array with the top level
 *   being a unique string identifier, and the nested array
 *   containing the following key/pairs:
 *   - "title": 
 *   - "description": 
 *   - "file": 
 *   - "type": 
 *   - "behavior": 
 */
function hook_openlayers_behaviors() {
  // Taken from openlayers.behaviors.inc

  return array(
    'openlayers_behavior_attribution' => array(
      'title' => t('Attribution'),
      'description' => t('Allows layers to provide attribution to the map if it exists.'),
      'type' => 'layer',
      'path' => drupal_get_path('module', 'openlayers') .'/includes/behaviors',
      'file' => 'openlayers_behavior_attribution.inc',
      'behavior' => array(
        'class' => 'openlayers_behavior_attribution',
        'parent' => 'openlayers_behavior',
      ),
    ),
  );
}

/**
 * OpenLayers Styles
 *
 * This hook tells OpenLayers about the available styles
 * that can be used in maps.
 *
 * @return
 *   Return an associative array with index being a unique string 
 *   identifier, and simple objects with the following properties:
 *   - "api_version": 
 *   - "name": 
 *   - "title": 
 *   - "data":
 */
function hook_openlayers_styles() {
  // Taken from openlayers.styles.inc

  $styles = array();

  $style = new stdClass();
  $style->api_version = 1;
  $style->name = 'default';
  $style->title = t('Default style');
  $style->description = t('Basic default style.');
  $style->data = array(
    'pointRadius' => '5',
    'fillColor' => '#FFCC66',
    'strokeColor' => '#FF9933',
    'strokeWidth' => '4',
    'fillOpacity' => '0.5'
  );
  $styles[$style->name] = $style;

  return $styles;
}

/**
 * OpenLayers Presets
 *
 * Define map presets.
 *
 * @return
 *   Return an associative array with index being a unique string 
 *   identifier, and simple objects with the following properties:
 *   - "api_version": 
 *   - "name": 
 *   - "title": 
 *   - "data":
 */
function hook_openlayers_presets() {
  // Taken from openlayers.presets.inc

  $default = new stdClass();
  $default->api_version = 1;
  $default->name = 'default';
  $default->title = t('Default Map');
  $default->description = t('This is the default map preset that comes with the OpenLayers module.');
  $default->data = array(
    'projection' => '900913',
    'width' => 'auto',
    'default_layer' => 'osm_mapnik',
    'height' => '400px',
    'center' => array(
      'initial' => array(
        'centerpoint' => '0,0',
        'zoom' => '2'
      )
    ),
    'options' => array(
      'displayProjection' => '4326',
      'maxExtent' => openlayers_get_extent('4326'),
    ),
    'behaviors' => array(
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(),
    ),
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
    )
  );
  return array('default' => $default);
}