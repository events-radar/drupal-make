<?php
/**
 * @file
 * radar_listings_group.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function radar_listings_group_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:listings_group:add user'
  $permissions['node:listings_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:listings_group:administer group'
  $permissions['node:listings_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:listings_group:approve and deny subscription'
  $permissions['node:listings_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:listings_group:create event content'
  $permissions['node:listings_group:create event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:create event_ical_importer content'
  $permissions['node:listings_group:create event_ical_importer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:delete any event content'
  $permissions['node:listings_group:delete any event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:delete any event_ical_importer content'
  $permissions['node:listings_group:delete any event_ical_importer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:delete own event content'
  $permissions['node:listings_group:delete own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:delete own event_ical_importer content'
  $permissions['node:listings_group:delete own event_ical_importer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:manage members'
  $permissions['node:listings_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:listings_group:manage permissions'
  $permissions['node:listings_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:listings_group:manage roles'
  $permissions['node:listings_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:listings_group:subscribe'
  $permissions['node:listings_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:listings_group:subscribe without approval'
  $permissions['node:listings_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:listings_group:unsubscribe'
  $permissions['node:listings_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:update any event content'
  $permissions['node:listings_group:update any event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:update any event_ical_importer content'
  $permissions['node:listings_group:update any event_ical_importer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:update group'
  $permissions['node:listings_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:listings_group:update own event content'
  $permissions['node:listings_group:update own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:listings_group:update own event_ical_importer content'
  $permissions['node:listings_group:update own event_ical_importer content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
