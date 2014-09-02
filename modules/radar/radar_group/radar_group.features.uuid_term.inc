<?php
/**
 * @file
 * radar_group.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function radar_group_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'vegan',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3400c631-79b7-4df2-9431-75364eb23655',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'vegetarian',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b3ca3173-119e-4703-9fe8-5e815a6f0941',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'hacking',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e1f231a6-619d-49b1-bfb5-930612ab3f69',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Linux',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ef5cb5bf-1449-497e-b486-4f67c5c1ee64',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topic',
  );
  return $terms;
}
