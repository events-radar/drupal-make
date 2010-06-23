// $Id: kml.js,v 1.1.2.8 2010/04/29 20:58:37 tmcw Exp $

/**
 * @file
 * Layer handler for KML layers
 */

/**
 * Openlayer layer handler for KML layer
 */
Drupal.openlayers.layer.kml = function(title, map, options) {
  // Get styles
  var styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
  
  // Format options
  if (options.maxExtent !== undefined) {
    options.maxExtent = OpenLayers.Bounds.fromArray(options.maxExtent);
  }

  options.format = OpenLayers.Format.KML;
  options.projection = 'EPSG:4326';
  
  // TODO: switch to OpenLayers.Vector layer type; GML will be deprecated
  // Create layer
  var layer = new OpenLayers.Layer.GML(title, options.url, options);
  layer.styleMap = styleMap;
  return layer;
};
