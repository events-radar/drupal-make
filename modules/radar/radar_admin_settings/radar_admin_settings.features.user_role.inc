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

  return $roles;
}
