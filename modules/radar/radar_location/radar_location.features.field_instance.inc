<?php
/**
 * @file
 * radar_location.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function radar_location_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_location-field_address'
  $field_instances['field_collection_item-field_location-field_address'] = array(
    'bundle' => 'field_location',
    'default_value' => array(
      0 => array(
        'element_key' => 'field_collection_item|field_location|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'postal_code' => '',
        'locality' => '',
        'country' => 'NL',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_location-field_geo'
  $field_instances['field_collection_item-field_location-field_geo'] = array(
    'bundle' => 'field_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_geo',
    'label' => 'Geo',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers',
      'settings' => array(
        'allow_edit' => 1,
        'data_storage' => 'single',
        'delta_handling' => 'm_to_s',
        'feature_types' => array(
          'path' => 'path',
          'point' => 'point',
          'polygon' => 'polygon',
        ),
        'geocoder_field' => 'field_address',
        'geocoder_handler' => 'mapquest_nominatim',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
        'openlayers_map' => 'geofield_widget_map',
        'use_geocoder' => 1,
      ),
      'type' => 'geofield_openlayers',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_location-field_location_info'
  $field_instances['field_collection_item-field_location-field_location_info'] = array(
    'bundle' => 'field_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Additional information on how to find or access this location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_location_info',
    'label' => 'Location info',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional information on how to find or access this location.');
  t('Address');
  t('Geo');
  t('Location info');

  return $field_instances;
}
