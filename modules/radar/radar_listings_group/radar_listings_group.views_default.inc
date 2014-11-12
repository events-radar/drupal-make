<?php
/**
 * @file
 * radar_listings_group.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function radar_listings_group_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'radar_listed_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Radar Listed groups';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_groups_listed_target_id']['id'] = 'field_groups_listed_target_id';
  $handler->display->display_options['relationships']['field_groups_listed_target_id']['table'] = 'field_data_field_groups_listed';
  $handler->display->display_options['relationships']['field_groups_listed_target_id']['field'] = 'field_groups_listed_target_id';
  $handler->display->display_options['relationships']['field_groups_listed_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_groups_listed_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1 lists events from';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
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
    'listings_group' => 'listings_group',
  );

  /* Display: Listed groups */
  $handler = $view->new_display('panel_pane', 'Listed groups', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Listed groups';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_groups_listed_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Group';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_groups_listed_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Operation';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Create event';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/add/event?og_group_ref=[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/listed-groups';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Listed groups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['radar_listed_groups'] = $view;

  $view = new view();
  $view->name = 'radar_listings_group';
  $view->description = 'Different panes to display info about one or several groups (space, collective etc.)';
  $view->tag = 'group';
  $view->base_table = 'node';
  $view->human_name = 'Radar Listings group';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_2']['element_class'] = 'group';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_label_class'] = 'inline inline';
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
  $handler->display->display_options['fields']['field_offline']['label'] = '';
  $handler->display->display_options['fields']['field_offline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_offline']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_offline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_offline']['element_wrapper_class'] = 'address-map';
  $handler->display->display_options['fields']['field_offline']['element_default_classes'] = FALSE;
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

  /* Display: Listings group pane */
  $handler = $view->new_display('panel_pane', 'Listings group pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Listing Group pane with all details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_2']['element_class'] = 'group';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_label_class'] = 'inline inline';
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
  $handler->display->display_options['fields']['field_offline']['label'] = '';
  $handler->display->display_options['fields']['field_offline']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_offline']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_offline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_offline']['element_wrapper_class'] = 'address-map';
  $handler->display->display_options['fields']['field_offline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_offline']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_offline']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_offline']['separator'] = '<br>';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'listings_group' => 'listings_group',
  );
  $handler->display->display_options['pane_title'] = 'Listings group info';
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
  $export['radar_listings_group'] = $view;

  return $export;
}
