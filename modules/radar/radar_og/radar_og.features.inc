<?php
/**
 * @file
 * radar_og.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_og_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function radar_og_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function radar_og_image_default_styles() {
  $styles = array();

  // Exported image style: 35x35.
  $styles['35x35'] = array(
    'label' => '35x35',
    'name' => '35x35',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 35,
          'height' => 35,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 50x50.
  $styles['50x50'] = array(
    'label' => '50x50',
    'name' => '50x50',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_og_membership_type().
 */
function radar_og_default_og_membership_type() {
  $items = array();
  $items['og_group_request'] = entity_import('og_membership_type', '{
    "name" : "og_group_request",
    "description" : "Request to add content to a group",
    "language" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
