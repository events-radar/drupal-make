<?php
/**
 * @file
 * radar_topics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_topics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'category' => 'category',
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
  );
  $export['uuid_features_file_taxonomy_term'] = $strongarm;

  return $export;
}
