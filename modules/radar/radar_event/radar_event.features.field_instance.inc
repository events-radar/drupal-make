<?php
/**
 * @file
 * radar_event.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function radar_event_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-field_offline'
  $field_instances['node-event-field_offline'] = array(
    'bundle' => 'event',
    'default_value_function' => 'radar_event_entityreference_offline_prepopulate',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_offline',
    'label' => 'Locations',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'label_plural' => 'entities',
          'label_singular' => 'entity',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');

  return $field_instances;
}
