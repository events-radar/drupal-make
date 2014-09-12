<?php
/**
 * @file
 * radar_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer facetapi pretty paths'.
  $permissions['administer facetapi pretty paths'] = array(
    'name' => 'administer facetapi pretty paths',
    'roles' => array(),
    'module' => 'facetapi_pretty_paths',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(),
    'module' => 'search_api',
  );

  // Exported permission: 'use search_api_sorts'.
  $permissions['use search_api_sorts'] = array(
    'name' => 'use search_api_sorts',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non-authenticated user' => 'non-authenticated user',
    ),
    'module' => 'search_api_sorts',
  );

  return $permissions;
}
