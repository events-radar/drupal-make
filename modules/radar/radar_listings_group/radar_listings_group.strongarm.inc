<?php
/**
 * @file
 * radar_listings_group.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_listings_group_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_listings_group';
  $strongarm->value = '4';
  $export['language_content_type_listings_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_listings_group';
  $strongarm->value = array();
  $export['menu_options_listings_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_listings_group';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_listings_group'] = $strongarm;

  return $export;
}
