<?php
/**
 * @file
 * radar_topics.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function radar_topics_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'free shop',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0b9e8d1f-d51d-4d32-b984-2dba1099e0fa',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'bar / cafe',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2a56c4d7-eb98-4f96-9ac6-d383a1af5ce8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'course / workshop',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2a7f6975-4c01-4777-8611-dffe0306c06f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'film',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '68197b93-2ece-4b0f-9a76-d9e99bda2603',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'discussion / presentation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8463bb01-e974-4785-9c2d-b95d87c9ee2d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'food',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8e846372-fa86-4cb2-87d1-f24da784ec6b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'action / protest / camp',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e85a688d-03ac-4008-a3cb-1adb7e8f718a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'work space',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fc1d0760-6f0c-4239-be54-00ba7b97b965',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'hacking',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fd845cdb-6685-4a65-a9f7-ef48f466851b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topics',
  );
  $terms[] = array(
    'name' => 'music',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ff3e2872-6140-4645-98f0-784d656a9c5c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  return $terms;
}
