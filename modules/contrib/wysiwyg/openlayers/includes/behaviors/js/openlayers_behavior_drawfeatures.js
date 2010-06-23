// $Id: openlayers_behavior_drawfeatures.js,v 1.1.2.6 2010/05/17 12:25:14 zzolo Exp $

/**
 * @file
 * DrawFeatures Behavior
 */

// Declare global variable
openlayers_drawfeature_element = null;

/**
 * Update function for features
 *
 * TODO: put in a non-global namespace
 */
function update(features) {
  WktWriter = new OpenLayers.Format.WKT();
  var features_copy = features.object.clone();
  for(var i in features_copy.features) {
    // transform() modifies geometry
    features_copy.features[i].geometry.transform(
      features.object.map.projection,
      new OpenLayers.Projection("EPSG:4326")
    );
  }
  wkt_value = WktWriter.write(features_copy.features);
  openlayers_drawfeature_element.val(wkt_value);
}

/**
 * Behavior for Draw Features
 */
Drupal.behaviors.openlayers_behavior_drawfeatures = function(context) {
  var data = $(context).data('openlayers');
  if (data && data.map.behaviors['openlayers_behavior_drawfeatures']) {
    var feature_types = data.map.behaviors['openlayers_behavior_drawfeatures'].feature_types;
      
    // Add control
    openlayers_drawfeature_element = 
      $("#" + data.map.behaviors['openlayers_behavior_drawfeatures'].element_id);

    // Create options
    var options = {
      projection: new OpenLayers.Projection('EPSG:4326'),
      drupalID: 'openlayers_drawfeatures_layer'
    };
    var data_layer = new OpenLayers.Layer.Vector(Drupal.t("Feature Layer"), options);
    data.openlayers.addLayer(data_layer);

    if (openlayers_drawfeature_element.text() != '') {
      var wktFormat = new OpenLayers.Format.WKT();
      wkt = openlayers_drawfeature_element.text();
      features = wktFormat.read(wkt);
      for(var i in features) {
        features[i].geometry = features[i].geometry.transform(
          new OpenLayers.Projection('EPSG:4326'),
          data.openlayers.projection
        );
      }
      data_layer.addFeatures(features);
    }

    // registering events late, because adding data
    // would result in a reprojection loop
    data_layer.events.register('featureadded', null, update);
    data_layer.events.register('featureremoved', null, update);
    data_layer.events.register('featuremodified', null, update);
    
    var control = new OpenLayers.Control.EditingToolbar(data_layer);
    data.openlayers.addControl(control);
    control.activate();

    var class_names = {
      'point': 'OpenLayers.Handler.Point',
      'path': 'OpenLayers.Handler.Path',
      'polygon': 'OpenLayers.Handler.Polygon'
    };

    var c = [];
    for(var i in control.controls) {
      for(var j in feature_types) {
        // don't judge the navigation control
        if(control.controls[i].handler !== null) {
          if(control.controls[i].handler.CLASS_NAME == 
          class_names[feature_types[j]]) {
            c.push(control.controls[i]);
          }
        }
        else {
          c.push(control.controls[i]);
        }
      }
    }
    control.controls = c;
    control.redraw();

    var mcontrol = new OpenLayers.Control.ModifyFeature(
      data_layer, {
        displayClass: 'olControlModifyFeature',
        deleteCodes: [46, 68, 100],
        handleKeypress: function(evt){                              
          if (this.feature && $.inArray(evt.keyCode, this.deleteCodes) > -1) {
            // We must unselect the feature before we delete it 
            var feature_to_delete = this.feature;
            this.selectControl.unselectAll();
            this.layer.removeFeatures([feature_to_delete]);
          }
        }
      }
    );
    control.addControls(mcontrol);
  }
};
