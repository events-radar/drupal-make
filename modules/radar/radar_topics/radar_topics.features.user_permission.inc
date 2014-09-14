<?php
/**
 * @file
 * radar_topics.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_topics_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topic'.
  $permissions['delete terms in topic'] = array(
    'name' => 'delete terms in topic',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
