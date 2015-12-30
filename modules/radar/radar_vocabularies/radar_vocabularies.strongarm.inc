<?php
/**
 * @file
 * radar_vocabularies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_vocabularies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'category' => 'category',
    'type' => 'type',
    'price' => 'price',
    'topic' => 0,
  );
  $export['uuid_features_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term';
  $strongarm->value = array(
    'category' => 0,
    'topic' => 0,
    'type' => 0,
    'price' => 0,
  );
  $export['uuid_features_file_taxonomy_term'] = $strongarm;

  return $export;
}
