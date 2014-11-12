<?php
/**
 * @file
 * radar_listings_group.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function radar_listings_group_user_default_roles() {
  $roles = array();

  // Exported role: list moderator.
  $roles['list moderator'] = array(
    'name' => 'list moderator',
    'weight' => 5,
  );

  return $roles;
}
