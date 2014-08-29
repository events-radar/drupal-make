<?php
/**
 * @file
 * radar_location.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_location_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_location_location';
  $strongarm->value = '1';
  $export['auto_entitylabel_location_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_location_location';
  $strongarm->value = '[location:field_address:name-line] [location:field_address:thoroughfare] [location:field_address:premise] [location:field_address:locality] [location:field_address:country]';
  $export['auto_entitylabel_pattern_location_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_location_location';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_location_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eck_clear_caches';
  $strongarm->value = FALSE;
  $export['eck_clear_caches'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference_uuid_field_name';
  $strongarm->value = 'uuid';
  $export['entityreference_uuid_field_name'] = $strongarm;

  return $export;
}
