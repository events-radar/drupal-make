<?php
/**
 * @file
 * radar_listings_group.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_listings_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create listings_group content'.
  $permissions['create listings_group content'] = array(
    'name' => 'create listings_group content',
    'roles' => array(
      'list moderator' => 'list moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any listings_group content'.
  $permissions['delete any listings_group content'] = array(
    'name' => 'delete any listings_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own listings_group content'.
  $permissions['delete own listings_group content'] = array(
    'name' => 'delete own listings_group content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any listings_group content'.
  $permissions['edit any listings_group content'] = array(
    'name' => 'edit any listings_group content',
    'roles' => array(
      'list moderator' => 'list moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own listings_group content'.
  $permissions['edit own listings_group content'] = array(
    'name' => 'edit own listings_group content',
    'roles' => array(
      'list moderator' => 'list moderator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
