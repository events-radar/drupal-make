<?php
/**
 * @file
 * radar_location.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function radar_location_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add location bundles'.
  $permissions['eck add location bundles'] = array(
    'name' => 'eck add location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add location location entities'.
  $permissions['eck add location location entities'] = array(
    'name' => 'eck add location location entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer location bundles'.
  $permissions['eck administer location bundles'] = array(
    'name' => 'eck administer location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer location location entities'.
  $permissions['eck administer location location entities'] = array(
    'name' => 'eck administer location location entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete location bundles'.
  $permissions['eck delete location bundles'] = array(
    'name' => 'eck delete location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete location location entities'.
  $permissions['eck delete location location entities'] = array(
    'name' => 'eck delete location location entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit location bundles'.
  $permissions['eck edit location bundles'] = array(
    'name' => 'eck edit location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit location location entities'.
  $permissions['eck edit location location entities'] = array(
    'name' => 'eck edit location location entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list location bundles'.
  $permissions['eck list location bundles'] = array(
    'name' => 'eck list location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list location location entities'.
  $permissions['eck list location location entities'] = array(
    'name' => 'eck list location location entities',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view location bundles'.
  $permissions['eck view location bundles'] = array(
    'name' => 'eck view location bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view location location entities'.
  $permissions['eck view location location entities'] = array(
    'name' => 'eck view location location entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(),
    'module' => 'geocoder',
  );

  // Exported permission: 'manage location properties'.
  $permissions['manage location properties'] = array(
    'name' => 'manage location properties',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
