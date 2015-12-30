<?php
/**
 * @file
 * radar_location.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function radar_location_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'legalized',
    'description' => '',
    'format' => 'rich_text_editor',
    'weight' => 2,
    'uuid' => '33b758c4-922a-4e25-bd58-b201a8bf4328',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'type',
  );
  $terms[] = array(
    'name' => 'squat',
    'description' => '',
    'format' => 'rich_text_editor',
    'weight' => 0,
    'uuid' => '7adcbd48-3b27-4e05-aeef-5f18467f0e98',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'type',
  );
  $terms[] = array(
    'name' => 'evicted',
    'description' => '',
    'format' => 'rich_text_editor',
    'weight' => 1,
    'uuid' => 'e822e0de-0f3c-44cc-ad55-0fb6c8b3c9c2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'type',
  );
  return $terms;
}
