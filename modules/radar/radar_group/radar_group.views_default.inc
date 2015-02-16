<?php
/**
 * @file
 * radar_group.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function radar_group_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'radar_group';
  $view->description = 'Different panes to display info about one or several groups (space, collective etc.)';
  $view->tag = 'group';
  $view->base_table = 'node';
  $view->human_name = 'Radar Group';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Not published message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This group is awaiting approval. 
Events can already be created, but they will not be visible until the group has been published by an administrator.';
  $handler->display->display_options['empty']['area']['format'] = 'rich_text_editor';
  /* Field: Content: Group Logo */
  $handler->display->display_options['fields']['field_group_logo']['id'] = 'field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['table'] = 'field_data_field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['field'] = 'field_group_logo';
  $handler->display->display_options['fields']['field_group_logo']['label'] = '';
  $handler->display->display_options['fields']['field_group_logo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_group_logo']['element_class'] = 'right';
  $handler->display->display_options['fields']['field_group_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_group_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_group_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_group_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: opening times */
  $handler->display->display_options['fields']['field_opening_times']['id'] = 'field_opening_times';
  $handler->display->display_options['fields']['field_opening_times']['table'] = 'field_data_field_opening_times';
  $handler->display->display_options['fields']['field_opening_times']['field'] = 'field_opening_times';
  $handler->display->display_options['fields']['field_opening_times']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_opening_times']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_opening_times']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_opening_times']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_opening_times']['element_default_classes'] = FALSE;
  /* Field: Content: All taxonomy terms (translated) */
  $handler->display->display_options['fields']['term_node_tid_i18n']['id'] = 'term_node_tid_i18n';
  $handler->display->display_options['fields']['term_node_tid_i18n']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid_i18n']['field'] = 'term_node_tid_i18n';
  $handler->display->display_options['fields']['term_node_tid_i18n']['label'] = 'categories';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid_i18n']['vocabularies'] = array(
    'category' => 'category',
    'topic' => 0,
  );
  /* Field: Content: All taxonomy terms (translated) */
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['id'] = 'term_node_tid_i18n_1';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['field'] = 'term_node_tid_i18n';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['label'] = 'topics';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['vocabularies'] = array(
    'topic' => 'topic',
    'category' => 0,
  );
  /* Field: Content: online */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_link']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_link']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_email']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_email']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  /* Field: Content: phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_phone']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: offline */
  $handler->display->display_options['fields']['field_offline']['id'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['table'] = 'field_data_field_offline';
  $handler->display->display_options['fields']['field_offline']['field'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['label'] = 'location';
  $handler->display->display_options['fields']['field_offline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_offline']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_offline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_offline']['element_wrapper_class'] = 'address-map';
  $handler->display->display_options['fields']['field_offline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_offline']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_offline']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_offline']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_offline']['separator'] = '<br>';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );

  /* Display: Full group pane */
  $handler = $view->new_display('panel_pane', 'Full group pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Group pane with all the content of a group.';
  $handler->display->display_options['pane_title'] = 'Full group info';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:field_collection_item.field_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['radar_group'] = $view;

  $view = new view();
  $view->name = 'radar_pending_groups';
  $view->description = 'List of unpublished groups, pending administrator approval';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Radar Pending groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pending groups';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_address_locality' => 'field_address_locality',
    'created' => 'created',
    'name' => 'name',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_offline_target_id']['id'] = 'field_offline_target_id';
  $handler->display->display_options['relationships']['field_offline_target_id']['table'] = 'field_data_field_offline';
  $handler->display->display_options['relationships']['field_offline_target_id']['field'] = 'field_offline_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::radar_content_moderation_delete_node_block_user' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish group',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Location: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_offline_target_id';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = '[field_address_locality], ';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Location: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'field_offline_target_id';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'City & Country';
  $handler->display->display_options['fields']['field_address_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_country']['alter']['text'] = '[field_address_locality][field_address_country]';
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'radar_time';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Posted by';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/groups/pending';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Pending groups';
  $handler->display->display_options['menu']['description'] = 'Publish pending groups';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Groups';
  $handler->display->display_options['tab_options']['description'] = 'Groups moderation';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['radar_pending_groups'] = $view;

  $view = new view();
  $view->name = 'requests';
  $view->description = 'Tables for events of a group';
  $view->tag = 'group';
  $view->base_table = 'node';
  $view->human_name = 'Radar Group events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'og_context';
  $handler->display->display_options['access']['perm'] = 'administer group';
  $handler->display->display_options['access']['group_id_arg'] = '1';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title_field' => 'title_field',
    'field_date_time' => 'field_date_time',
    'body' => 'body',
    'status' => 'status',
    'og_group_ref' => 'og_group_ref',
    'name' => 'name',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Events are only published if they are approved by at least one group. 
Once they are approved - or if they have been posted in a group where they don\'t require approval - they are automatically published, but they will only show up in <em>this</em> group if they are approved here as well.
';
  $handler->display->display_options['header']['area']['format'] = 'rich_text_editor';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no events awaiting approval to be posted in %1.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: OG membership */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'og_membership';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::radar_og_moderate_accept_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Approve for this group',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::og_set_state_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::og_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::radar_og_moderate_reject_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Reject for this group',
    ),
    'action::og_membership_delete_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'radar_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_2']['id'] = 'field_date_time_2';
  $handler->display->display_options['fields']['field_date_time_2']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_2']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_2']['label'] = 'Day';
  $handler->display->display_options['fields']['field_date_time_2']['settings'] = array(
    'format_type' => 'short_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_time_2']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: categories */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = 'Additional tags';
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'With / by';
  $handler->display->display_options['fields']['og_group_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Posted by';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'radar_time';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 . Pending events, awaiting approval';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: OG membership: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'og_membership';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'og_group_request' => 'og_group_request',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Pending events page */
  $handler = $view->new_display('page', 'Pending events page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pending events';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: OG membership */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'og_membership';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::radar_og_moderate_accept_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Approve for this group',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::og_set_state_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::og_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::radar_og_moderate_reject_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Reject for this group',
    ),
    'action::og_membership_delete_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = 'Week day';
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'week_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_2']['id'] = 'field_date_time_2';
  $handler->display->display_options['fields']['field_date_time_2']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_2']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_2']['label'] = 'Day';
  $handler->display->display_options['fields']['field_date_time_2']['settings'] = array(
    'format_type' => 'short_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_2']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = 'Time';
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: categories */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'With / by';
  $handler->display->display_options['fields']['og_group_ref']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Posted by';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Posted on';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'radar_time';
  $handler->display->display_options['path'] = 'node/%/pending';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pending events';
  $handler->display->display_options['menu']['description'] = 'Pending events, awaiting approval to be posted in this group';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['requests'] = $view;

  return $export;
}
