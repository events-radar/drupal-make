// $Id: wms.js,v 1.1.2.6 2010/04/30 19:34:05 tmcw Exp $

/**
 * @file
 * Layer handler for WMS layers
 */

/**
 * Openlayer layer handler for WMS layer
 */
Drupal.openlayers.layer.wms = function (title, map, options) {
  var styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
  options.options.transparent = true;
  options.params.drupalID = options.drupalID;
  var layer = new OpenLayers.Layer.WMS(title, 
    options.base_url, options.options, options.params);
  layer.styleMap = styleMap;
  return layer;
};
