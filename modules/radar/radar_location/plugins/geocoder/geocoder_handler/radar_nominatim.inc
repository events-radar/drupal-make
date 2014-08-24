<?php
// $Id$

/**
 * @file
 * Plugin to provide a Nominatim geocoder.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Nominatim: Radar flavour"),
  'description' => t('Geocodes via OSM Nominatim, taking a couple of goes if it fails.'),
  'callback' => 'radar_location_nominatim_lookup',
  'field_types' => array('addressfield'),
  'field_callback' => 'radar_location_nominatim_field',
  'terms_of_service' => 'http://developer.mapquest.com/web/info/terms-of-use',
);

/**
 * Process Markup
 */
function radar_location_nominatim_lookup($address, $options = array()) {
  $geocoder_settings = variable_get("geocoder_settings", array());
  $api_url = "http://open.mapquestapi.com/nominatim/v1/search";
  $params = array(
    'q' => $address,
    'format' => 'json',
    'addressdetails' => 0,
    'limit' => 1,
    'osm_type' => 'N',
  );
  $request = drupal_http_request($api_url . '?' . drupal_http_build_query($params));
  $data = json_decode($request->data);
  return _radar_location_nominatim_geometry($data);
}

function radar_location_nominatim_field($field, $field_item) {
  $attempt = 0;
  do {
    $address = _radar_location_addressfield_parse($field_item, $attempt);
    $point = radar_location_nominatim_lookup($address);
  } while (is_null($point) && $attempt < 11);
  return $point;
}

function _radar_location_addressfield_parse($field_item, &$attempt) {
  $attempt++;
  switch ($attempt) {
    case 1:
       $attempt = 1;
       break;
    case 2:
      if (!empty($field_item['postal_code'])) {
        unset($field_item['postal_code']);
        $attempt = 2;
        break;
      }
    case 3:
      if (!empty($field_item['premise'])) {
        unset($field_item['premise']);
        $attempt = 3;
        break;
      }
    case 4:
      if (!empty($field_item['premise']) && !empty($field_item['postal_code'])) {
        unset($field_item['premise']);
        unset($field_item['postal_code']);
        $attempt = 4;
        break;
      }
    case 5:
      if (!empty($field_item['thoroughfare'])) {
        unset($field_item['thoroughfare']);
        $attempt = 5;
        break;
      }
    case 6:
      if (!empty($field_item['premise']) && !empty($field_item['thoroughfare'])) {
        unset($field_item['premise']);
        unset($field_item['thoroughfare']);
        $attempt = 6;
        break;
      }
    case 7:
      if (!empty($field_item['thoroughfare']) && !empty($field_item['postal_code'])) {
        unset($field_item['thoroughfare']);
        unset($field_item['postal_code']);
        $attempt = 7;
        break;
      }
    case 8:
      if (!empty($field_item['premise']) && !empty($field_item['thoroughfare']) && !empty($field_item['postal_code'])) {
        unset($field_item['premise']);
        unset($field_item['thoroughfare']);
        unset($field_item['postal_code']);
        $attempt = 8;
        break;
      }
    case 9:
      if (!empty($field_item['locality'])) {
        unset($field_item['locality']);
        $attempt = 9;
        break;
      }
    case 10:
      if (!empty($field_item['locality']) && !empty($field_item['postal_code'])) {
        unset($field_item['locality']);
        unset($field_item['postal_code']);
        $attempt = 10;
        break;
      }
    default:
      unset($field_item['item_premise']);
      unset($field_item['thoroughfare']);
      unset($field_item['locality']);
      unset($field_item['postal_code']);
      $attempt = 11;
  }

  $address = array();
  $lines = array('premise', 'thoroughfare', 'locality', 'administrative_area', 'country', 'postal_code');
  foreach ($lines as $line) {
    if (!empty($field_item[$line])) {
      $address[] = $field_item[$line];
    }
  }
  return implode(', ', $address);
}

function _radar_location_nominatim_geometry(&$data) {
  if (!isset($data[0]->lon)) {
    return NULL;
  }
  geophp_load();
  return new Point($data[0]->lon, $data[0]->lat);
}
