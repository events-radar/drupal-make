<?php
/**
 * @file
 * radar_content_moderation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_content_moderation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag abuse_node'.
  $permissions['flag abuse_node'] = array(
    'name' => 'flag abuse_node',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_user'.
  $permissions['flag abuse_user'] = array(
    'name' => 'flag abuse_user',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_node'.
  $permissions['flag abuse_whitelist_node'] = array(
    'name' => 'flag abuse_whitelist_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag abuse_whitelist_user'.
  $permissions['flag abuse_whitelist_user'] = array(
    'name' => 'flag abuse_whitelist_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_node'.
  $permissions['unflag abuse_node'] = array(
    'name' => 'unflag abuse_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_user'.
  $permissions['unflag abuse_user'] = array(
    'name' => 'unflag abuse_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_node'.
  $permissions['unflag abuse_whitelist_node'] = array(
    'name' => 'unflag abuse_whitelist_node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag abuse_whitelist_user'.
  $permissions['unflag abuse_whitelist_user'] = array(
    'name' => 'unflag abuse_whitelist_user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
