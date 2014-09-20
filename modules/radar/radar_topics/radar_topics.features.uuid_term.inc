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
    'name' => 'meeting',
    'description' => '',
    'format' => 'rich_text_editor',
    'weight' => 0,
    'uuid' => '20a888f9-54c1-4767-8af1-40de3d1d2636',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'bar/cafe',
    'description' => 'somewhere were you can go for a drink and to meet people',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2a56c4d7-eb98-4f96-9ac6-d383a1af5ce8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'course/workshop',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2a7f6975-4c01-4777-8611-dffe0306c06f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'exhibition',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5ef858bd-178c-4d89-9a96-742b0e3f250f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'film/theatre',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '68197b93-2ece-4b0f-9a76-d9e99bda2603',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'discussion/presentation',
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
    'name' => 'party',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b89e871f-c923-4f66-a7ba-a34bc9ccce5b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'action/protest/camp',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e85a688d-03ac-4008-a3cb-1adb7e8f718a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'advice/help/office hours',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e97f372b-29bc-460b-bff6-35d2462411ff',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'book shop/info shop/library',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'edad891e-151a-4219-9822-39c7dcff6a4f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
  );
  $terms[] = array(
    'name' => 'work space/diy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fc1d0760-6f0c-4239-be54-00ba7b97b965',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
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
