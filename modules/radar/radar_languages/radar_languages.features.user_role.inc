<?php
/**
 * @file
 * radar_languages.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function radar_languages_user_default_roles() {
  $roles = array();

  // Exported role: translator.
  $roles['translator'] = array(
    'name' => 'translator',
    'weight' => 6,
  );

  return $roles;
}
