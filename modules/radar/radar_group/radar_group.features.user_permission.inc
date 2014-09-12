<?php
/**
 * @file
 * radar_group.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create group content'.
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'non-authenticated user' => 'non-authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group content'.
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group content'.
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any group content'.
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group content'.
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content moderator' => 'content moderator',
      'non-authenticated user' => 'non-authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
