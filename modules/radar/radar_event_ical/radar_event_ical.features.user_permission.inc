<?php
/**
 * @file
 * radar_event_ical.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_event_ical_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear standard_ical feeds'.
  $permissions['clear standard_ical feeds'] = array(
    'name' => 'clear standard_ical feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create event_ical_importer content'.
  $permissions['create event_ical_importer content'] = array(
    'name' => 'create event_ical_importer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_ical_importer content'.
  $permissions['delete any event_ical_importer content'] = array(
    'name' => 'delete any event_ical_importer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_ical_importer content'.
  $permissions['delete own event_ical_importer content'] = array(
    'name' => 'delete own event_ical_importer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_ical_importer content'.
  $permissions['edit any event_ical_importer content'] = array(
    'name' => 'edit any event_ical_importer content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_ical_importer content'.
  $permissions['edit own event_ical_importer content'] = array(
    'name' => 'edit own event_ical_importer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import standard_ical feeds'.
  $permissions['import standard_ical feeds'] = array(
    'name' => 'import standard_ical feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock standard_ical feeds'.
  $permissions['unlock standard_ical feeds'] = array(
    'name' => 'unlock standard_ical feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
