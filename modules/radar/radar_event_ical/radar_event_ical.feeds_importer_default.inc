<?php
/**
 * @file
 * radar_event_ical.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function radar_event_ical_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'standard_ical';
  $feeds_importer->config = array(
    'name' => 'Standard iCal',
    'description' => 'Basic iCal importer for standards compliant feeds.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateiCalFeedsParser',
      'config' => array(
        'indefinite_count' => '52',
        'until_not_utc' => FALSE,
        'skip_days' => NULL,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'DTSTART',
            'target' => 'field_date_time:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'DTEND',
            'target' => 'field_date_time:end',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'RRULE',
            'target' => 'field_date_time:rrule',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'URL',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => 'CATEGORIES',
            'target' => 'field_topic',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'CATEGORIES',
            'target' => 'field_category',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'URL',
            'target' => 'url',
            'unique' => 1,
          ),
          9 => array(
            'source' => 'SUMMARY',
            'target' => 'title_field',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event',
        'inherit' => 1,
        'inherit_fields' => array(
          'language' => 'language',
          'uid' => 'uid',
          'og_group_ref' => 'og_group_ref',
          'field_offline' => 'field_offline',
        ),
      ),
    ),
    'content_type' => 'event_ical_importer',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['standard_ical'] = $feeds_importer;

  return $export;
}
