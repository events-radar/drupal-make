<?php
/**
 * @file
 * radar_og.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_og_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
      'tech administrator' => 'tech administrator',
    ),
    'module' => 'og',
  );

  return $permissions;
}
