<?php
/**
 * @file
 * radar_event.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function radar_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'language',
        2 => 'field_date_time',
        3 => 'body',
        4 => 'field_price',
        5 => 'field_image',
        6 => 'field_category',
        7 => 'field_link',
        8 => 'group_info',
        9 => 'og_group_ref',
        10 => 'field_phone',
        11 => 'og_group_request',
        12 => 'field_topic',
        13 => 'group_groups',
        14 => 'group_tags',
        15 => 'field_email',
        16 => 'field_offline',
        17 => 'path',
        18 => 'redirect',
        19 => 'date_repeat_entity_master_uuid',
        20 => 'date_repeat_entity_clone_state',
        21 => 'group_content_access',
      ),
      'hidden' => array(
        22 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'language' => 'ds_content',
      'field_date_time' => 'ds_content',
      'body' => 'ds_content',
      'field_price' => 'ds_content',
      'field_image' => 'ds_content',
      'field_category' => 'ds_content',
      'field_link' => 'ds_content',
      'group_info' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'field_phone' => 'ds_content',
      'og_group_request' => 'ds_content',
      'field_topic' => 'ds_content',
      'group_groups' => 'ds_content',
      'group_tags' => 'ds_content',
      'field_email' => 'ds_content',
      'field_offline' => 'ds_content',
      'path' => 'ds_content',
      'redirect' => 'ds_content',
      'date_repeat_entity_master_uuid' => 'ds_content',
      'date_repeat_entity_clone_state' => 'ds_content',
      'group_content_access' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|form'] = $ds_layout;

  return $export;
}
