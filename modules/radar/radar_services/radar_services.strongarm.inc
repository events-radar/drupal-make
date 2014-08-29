<?php
/**
 * @file
 * radar_services.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_services_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_services_support_all_entity_types';
  $strongarm->value = '1';
  $export['uuid_services_support_all_entity_types'] = $strongarm;

  return $export;
}
