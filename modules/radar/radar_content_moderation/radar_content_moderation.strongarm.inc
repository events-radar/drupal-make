<?php
/**
 * @file
 * radar_content_moderation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_content_moderation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_abuse_flags';
  $strongarm->value = array(
    'inappropriate_node' => 'inappropriate_node',
    'abuse_user' => 0,
    'abuse_node' => 0,
    'abuse_comment' => 0,
    'notification_groups_all' => 0,
    'abuse_whitelist_user' => 0,
    'abuse_whitelist_comment' => 0,
    'abuse_whitelist_node' => 0,
  );
  $export['flag_abuse_flags'] = $strongarm;

  return $export;
}
