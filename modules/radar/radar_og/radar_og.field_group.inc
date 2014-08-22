<?php
/**
 * @file
 * radar_og.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function radar_og_field_group_info() {
  $export = array();

  $radar_og_entity_types = radar_og_get_group_content_entity_types();
  if (!empty($radar_og_entity_types)) {
    foreach ($radar_og_entity_types as $entity_type => $bundles) {
      foreach(array_keys($bundles) as $bundle) {
        radar_og_field_group_definition($export, $entity_type, $bundle);
      }
    }
  }

  return $export;
}

function radar_og_field_group_definition(&$export, $entity_type, $bundle) {
  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = "group_groups|$entity_type|$bundle|form";
  $field_group->group_name = 'group_groups';
  $field_group->entity_type = "$entity_type";
  $field_group->bundle = "$bundle";
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'og_group_request',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-groups field-group-fieldset',
        'description' => 'Groups that this event is posted to, or requested to be posted in.
Separate multiple groups with commas.',
      ),
      'formatter' => 'collapsed',
    ),
  );

  $export["group_groups|$entity_type|$bundle|form"] = $field_group;
}
