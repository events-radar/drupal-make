<?php
/**
 * @file
 * radar_location.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function radar_location_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'existing_location';
  $openlayers_styles->title = 'Existing location';
  $openlayers_styles->description = 'Style for existing locations';
  $openlayers_styles->data = array(
    'pointRadius' => 4,
    'fillColor' => '#888888',
    'fillOpacity' => 0.5,
    'strokeColor' => '#888888',
    'strokeWidth' => 1,
    'strokeOpacity' => 0.69999999999999996,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['existing_location'] = $openlayers_styles;

  return $export;
}
