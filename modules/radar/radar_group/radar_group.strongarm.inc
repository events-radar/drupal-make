<?php
/**
 * @file
 * radar_group.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_group_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_group';
  $strongarm->value = '4';
  $export['language_content_type_group'] = $strongarm;

  return $export;
}
