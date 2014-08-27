<?php
/**
 * @file
 * radar_event_ical.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function radar_event_ical_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create event_ical_importer content'
  $permissions['node:group:create event_ical_importer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete any event_ical_importer content'
  $permissions['node:group:delete any event_ical_importer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete own event_ical_importer content'
  $permissions['node:group:delete own event_ical_importer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update any event_ical_importer content'
  $permissions['node:group:update any event_ical_importer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update own event_ical_importer content'
  $permissions['node:group:update own event_ical_importer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
