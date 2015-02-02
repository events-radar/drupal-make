<?php
/**
 * @file
 * radar_languages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_languages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'tech administrator' => 'tech administrator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer languages for translate set per user'.
  $permissions['administer languages for translate set per user'] = array(
    'name' => 'administer languages for translate set per user',
    'roles' => array(),
    'module' => 'translate_set',
  );

  // Exported permission: 'administer translate set settings'.
  $permissions['administer translate set settings'] = array(
    'name' => 'administer translate set settings',
    'roles' => array(),
    'module' => 'translate_set',
  );

  // Exported permission: 'manage translate set'.
  $permissions['manage translate set'] = array(
    'name' => 'manage translate set',
    'roles' => array(
      'tech administrator' => 'tech administrator',
    ),
    'module' => 'translate_set',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'tech administrator' => 'tech administrator',
      'translator' => 'translator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'non-authenticated user' => 'non-authenticated user',
      'tech administrator' => 'tech administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'tech administrator' => 'tech administrator',
      'translator' => 'translator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'tech administrator' => 'tech administrator',
      'translator' => 'translator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'tech administrator' => 'tech administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate set'.
  $permissions['translate set'] = array(
    'name' => 'translate set',
    'roles' => array(
      'translator' => 'translator',
    ),
    'module' => 'translate_set',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'tech administrator' => 'tech administrator',
      'translator' => 'translator',
    ),
    'module' => 'i18n_string',
  );

  return $permissions;
}
