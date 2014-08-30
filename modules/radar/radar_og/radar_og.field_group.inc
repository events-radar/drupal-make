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

  $group_bundles = og_get_all_group_bundle();
  foreach ($group_bundles as $entity_type => $bundles) {
    foreach(array_keys($bundles) as $bundle) {
      radar_og_groups_field_group_definition($export, $entity_type, $bundle);
    }
  }

  return $export;
}

function radar_og_groups_field_group_definition(&$export, $entity_type, $bundle) {
  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = "group_og_settings|$entity_type|$bundle|form";
  $field_group->group_name = 'group_og_settings';
  $field_group->entity_type = $entity_type;
  $field_group->bundle = $bundle;
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group access settings',
    'weight' => '5',
    'children' => array(
      0 => 'field_og_subscribe_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-og-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export["group_og_settings|$entity_type|$bundle|form"] = $field_group;
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
    'label' => 'Groups & Locations',
    'weight' => '4',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'og_group_request',
      2 => 'field_offline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Groups & Locations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-groups field-group-tab',
        'description' => 'Groups that this event is posted to, or requested to be posted in.
Separate multiple groups with commas.',
      ),
      'formatter' => 'open',
    ),
  );

  $export["group_groups|$entity_type|$bundle|form"] = $field_group;
}
