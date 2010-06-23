<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _radar_groups_content_default_fields() {
  $fields = array();

  // Exported field: field_homepage
  $fields[] = array(
    'field_name' => 'field_homepage',
    'type_name' => 'group',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => '',
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Homepage',
      'weight' => '4',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_location
  $fields[] = array(
    'field_name' => 'field_location',
    'type_name' => 'group',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 0,
      'polygon' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'default',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 0,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location (map)',
      'weight' => '2',
      'description' => '',
      'type' => 'openlayers_wkt_widget',
      'module' => 'openlayers_cck',
    ),
  );

  // Exported field: field_location_text
  $fields[] = array(
    'field_name' => 'field_location_text',
    'type_name' => 'group',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_location_text][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location (description)',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Homepage'),
    t('Location (description)'),
    t('Location (map)'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _radar_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer organic groups
  $permissions[] = array(
    'name' => 'administer organic groups',
    'roles' => array(
      '0' => 'content admin',
    ),
  );

  // Exported permission: create group content
  $permissions[] = array(
    'name' => 'create group content',
    'roles' => array(
      '0' => 'trusted user',
    ),
  );

  // Exported permission: delete any group content
  $permissions[] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'content admin',
    ),
  );

  // Exported permission: delete own group content
  $permissions[] = array(
    'name' => 'delete own group content',
    'roles' => array(
      '0' => 'trusted user',
    ),
  );

  // Exported permission: edit any group content
  $permissions[] = array(
    'name' => 'edit any group content',
    'roles' => array(
      '0' => 'content admin',
    ),
  );

  // Exported permission: edit own group content
  $permissions[] = array(
    'name' => 'edit own group content',
    'roles' => array(
      '0' => 'trusted user',
    ),
  );

  return $permissions;
}
