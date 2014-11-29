<?php
/**
 * @file
 * radar_admin_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function radar_admin_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: tech administrator.
  $roles['tech administrator'] = array(
    'name' => 'tech administrator',
    'weight' => 7,
  );

  return $roles;
}
