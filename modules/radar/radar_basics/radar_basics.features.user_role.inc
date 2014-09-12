<?php
/**
 * @file
 * radar_basics.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function radar_basics_user_default_roles() {
  $roles = array();

  // Exported role: non-authenticated user.
  $roles['non-authenticated user'] = array(
    'name' => 'non-authenticated user',
    'weight' => 4,
  );

  return $roles;
}
