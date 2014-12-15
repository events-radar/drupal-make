<?php
/**
 * @file
 * radar_admin_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_admin_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'tech administrator' => 'tech administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'list moderator' => 'list moderator',
      'tech administrator' => 'tech administrator',
      'translator' => 'translator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(),
    'module' => 'shortcut',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'tech administrator' => 'tech administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'tech administrator' => 'tech administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'tech administrator' => 'tech administrator',
    ),
    'module' => 'shortcut',
  );

  return $permissions;
}
