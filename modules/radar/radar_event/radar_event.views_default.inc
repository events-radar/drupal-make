<?php
/**
 * @file
 * radar_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function radar_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_bulk_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content bulk operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events . Bulk operations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'og_group_ref' => 'og_group_ref',
    'field_date_time' => 'field_date_time',
    'field_date_time_1' => 'field_date_time_1',
    'field_date_time_2' => 'field_date_time_2',
    'field_category' => 'field_category',
    'field_topic' => 'field_topic',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
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
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Groups';
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['label'] = 'Group ID';
  $handler->display->display_options['fields']['og_group_ref_1']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref_1']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = 'Date';
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_2']['id'] = 'field_date_time_2';
  $handler->display->display_options['fields']['field_date_time_2']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_2']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_2']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_time_2']['delta_offset'] = '0';
  /* Field: Content: categories */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = 'tags';
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: offline */
  $handler->display->display_options['fields']['field_offline']['id'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['table'] = 'field_data_field_offline';
  $handler->display->display_options['fields']['field_offline']['field'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['label'] = 'Location ID';
  $handler->display->display_options['fields']['field_offline']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_offline']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_offline']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_offline']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Event';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Group ID';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['description'] = 'Can be found on the admin links of a group.';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: offline (field_offline:target_id) */
  $handler->display->display_options['filters']['field_offline_target_id']['id'] = 'field_offline_target_id';
  $handler->display->display_options['filters']['field_offline_target_id']['table'] = 'field_data_field_offline';
  $handler->display->display_options['filters']['field_offline_target_id']['field'] = 'field_offline_target_id';
  $handler->display->display_options['filters']['field_offline_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_offline_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['operator_id'] = 'field_offline_target_id_op';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['label'] = 'Location ID';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['operator'] = 'field_offline_target_id_op';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['identifier'] = 'field_offline_target_id';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: categories (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'categories';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: additional tags (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = '';
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'tags';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Date &amp; Time -  start date (field_date_time) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator_id'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['identifier'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_date_time_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_date_time_value']['year_range'] = '-1:+3';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );

  /* Display: Events table page */
  $handler = $view->new_display('page', 'Events table page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/events/all';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['description'] = 'Bulk operation for all events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Events';
  $handler->display->display_options['tab_options']['description'] = 'admin/content/groups/all';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Groups table page */
  $handler = $view->new_display('page', 'Groups table page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Groups . Bulk operations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Group ID';
  /* Field: Content: categories */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = 'tags';
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: offline */
  $handler->display->display_options['fields']['field_offline']['id'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['table'] = 'field_data_field_offline';
  $handler->display->display_options['fields']['field_offline']['field'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['label'] = 'Location ID';
  $handler->display->display_options['fields']['field_offline']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_offline']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_offline']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_offline']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'group' => 'group',
    'listings_group' => 'listings_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Group';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Group ID';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: offline (field_offline:target_id) */
  $handler->display->display_options['filters']['field_offline_target_id']['id'] = 'field_offline_target_id';
  $handler->display->display_options['filters']['field_offline_target_id']['table'] = 'field_data_field_offline';
  $handler->display->display_options['filters']['field_offline_target_id']['field'] = 'field_offline_target_id';
  $handler->display->display_options['filters']['field_offline_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_offline_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['operator_id'] = 'field_offline_target_id_op';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['label'] = 'Location ID';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['operator'] = 'field_offline_target_id_op';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['identifier'] = 'field_offline_target_id';
  $handler->display->display_options['filters']['field_offline_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: categories (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'categories';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Filter criterion: Content: additional tags (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['value'] = '';
  $handler->display->display_options['filters']['field_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'tags';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/groups/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['description'] = 'Bulk operation for all groups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Events price table page */
  $handler = $view->new_display('page', 'Events price table page', 'page_2');
  $handler->display->display_options['display_description'] = 'Bulk operation to assign price categories';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_price_category' => 'field_price_category',
    'field_price' => 'field_price',
    'og_group_ref' => 'og_group_ref',
    'og_group_ref_1' => 'og_group_ref_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
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
    'field_price_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'event::field_price' => 'event::field_price',
          'event::field_price_category' => 'event::field_price_category',
        ),
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Price category */
  $handler->display->display_options['fields']['field_price_category']['id'] = 'field_price_category';
  $handler->display->display_options['fields']['field_price_category']['table'] = 'field_data_field_price_category';
  $handler->display->display_options['fields']['field_price_category']['field'] = 'field_price_category';
  $handler->display->display_options['fields']['field_price_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_price_category']['delta_offset'] = '0';
  /* Field: Content: Other and/or price details */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['delta_offset'] = '0';
  /* Field: Content: Groups audience */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Groups';
  $handler->display->display_options['fields']['og_group_ref']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Date &amp; Time -  start date (field_date_time) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator_id'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_time_value']['expose']['operator'] = 'field_date_time_value_op';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['identifier'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_date_time_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_date_time_value']['year_range'] = '-1:+3';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Price category (field_price_category) */
  $handler->display->display_options['filters']['field_price_category_tid']['id'] = 'field_price_category_tid';
  $handler->display->display_options['filters']['field_price_category_tid']['table'] = 'field_data_field_price_category';
  $handler->display->display_options['filters']['field_price_category_tid']['field'] = 'field_price_category_tid';
  $handler->display->display_options['filters']['field_price_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_price_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_category_tid']['expose']['operator_id'] = 'field_price_category_tid_op';
  $handler->display->display_options['filters']['field_price_category_tid']['expose']['label'] = 'Price category';
  $handler->display->display_options['filters']['field_price_category_tid']['expose']['operator'] = 'field_price_category_tid_op';
  $handler->display->display_options['filters']['field_price_category_tid']['expose']['identifier'] = 'field_price_category_tid';
  $handler->display->display_options['filters']['field_price_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_price_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_price_category_tid']['vocabulary'] = 'price';
  /* Filter criterion: Content: Other and/or price details (field_price) */
  $handler->display->display_options['filters']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['filters']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['group'] = 1;
  $handler->display->display_options['filters']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['expose']['operator_id'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['label'] = 'Other and/or price details';
  $handler->display->display_options['filters']['field_price_value']['expose']['operator'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['identifier'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Groups audience (og_group_ref:target_id) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Group ID';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/events/price';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Prices';
  $handler->display->display_options['menu']['description'] = 'Bulk operation to assign price categories';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Events';
  $handler->display->display_options['tab_options']['description'] = 'admin/content/groups/all';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Inactive groups table page */
  $handler = $view->new_display('page', 'Inactive groups table page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inactive groups';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_offline_target_id']['id'] = 'field_offline_target_id';
  $handler->display->display_options['relationships']['field_offline_target_id']['table'] = 'field_data_field_offline';
  $handler->display->display_options['relationships']['field_offline_target_id']['field'] = 'field_offline_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = '[field_address_locality], ';
  /* Field: Location: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'field_offline_target_id';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'City & Country';
  $handler->display->display_options['fields']['field_address_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_country']['alter']['text'] = '[field_address_locality][field_address_country]';
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'radar_time';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'admin/content/groups/inactive';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Inactive';
  $handler->display->display_options['menu']['description'] = 'Groups that are not active anymore';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['content_bulk_operations'] = $view;

  $view = new view();
  $view->name = 'radar_event';
  $view->description = 'Different panes to display info about one or several events.';
  $view->tag = 'event';
  $view->base_table = 'node';
  $view->human_name = 'Radar Event';
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
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['text'] = '<div class=date>[field_date_time]</div>';
  $handler->display->display_options['fields']['field_date_time']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['preserve_tags'] = '<div>';
  $handler->display->display_options['fields']['field_date_time']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_date_time']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_day',
    'fromto' => 'both',
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
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_field']['element_class'] = 'event';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
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
  $handler->display->display_options['fields']['term_node_tid_i18n']['separator'] = ' / ';
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
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = 'open at';
  $handler->display->display_options['fields']['field_date_time_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time_1']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_date_time_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time_1']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Content: Other and/or price details */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_price']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = FALSE;
  /* Field: Content: online */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['element_label_type'] = 'span';
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
    'event' => 'event',
  );

  /* Display: Full event pane */
  $handler = $view->new_display('panel_pane', 'Full event pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Event pane with all the info of an event';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title_field']['element_class'] = 'event';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
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
  $handler->display->display_options['fields']['term_node_tid_i18n']['separator'] = ' / ';
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
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = 'from';
  $handler->display->display_options['fields']['field_date_time_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time_1']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_date_time_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time_1']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = 'to';
  $handler->display->display_options['fields']['field_date_time']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_date_time']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Content: Price category */
  $handler->display->display_options['fields']['field_price_category']['id'] = 'field_price_category';
  $handler->display->display_options['fields']['field_price_category']['table'] = 'field_data_field_price_category';
  $handler->display->display_options['fields']['field_price_category']['field'] = 'field_price_category';
  $handler->display->display_options['fields']['field_price_category']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_price_category']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_price_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_price_category']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_price_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_price_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_price_category']['delta_offset'] = '0';
  /* Field: Content: Other and/or price details */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_price']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = FALSE;
  /* Field: Content: online */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_link']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_link']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'radar_socialmedia_link';
  $handler->display->display_options['fields']['field_link']['delta_offset'] = '0';
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
  $handler->display->display_options['pane_title'] = 'Full event info';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['style_options']['disable_webcal'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'field_date_time';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['location_field'] = 'field_map';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_offline_target_id']['id'] = 'field_offline_target_id';
  $handler->display->display_options['relationships']['field_offline_target_id']['table'] = 'field_data_field_offline';
  $handler->display->display_options['relationships']['field_offline_target_id']['field'] = 'field_offline_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['text'] = '<div class=date>[field_date_time]</div>';
  $handler->display->display_options['fields']['field_date_time']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['preserve_tags'] = '<div>';
  $handler->display->display_options['fields']['field_date_time']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_date_time']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: All taxonomy terms (translated) */
  $handler->display->display_options['fields']['term_node_tid_i18n']['id'] = 'term_node_tid_i18n';
  $handler->display->display_options['fields']['term_node_tid_i18n']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid_i18n']['field'] = 'term_node_tid_i18n';
  $handler->display->display_options['fields']['term_node_tid_i18n']['label'] = 'categories';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_label_class'] = 'small-label, inline';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['term_node_tid_i18n']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n']['separator'] = ' / ';
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
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid_i18n_1']['vocabularies'] = array(
    'topic' => 'topic',
    'category' => 0,
  );
  /* Field: Content: Price category */
  $handler->display->display_options['fields']['field_price_category']['id'] = 'field_price_category';
  $handler->display->display_options['fields']['field_price_category']['table'] = 'field_data_field_price_category';
  $handler->display->display_options['fields']['field_price_category']['field'] = 'field_price_category';
  $handler->display->display_options['fields']['field_price_category']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_price_category']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_price_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_price_category']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_price_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_price_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_price_category']['delta_offset'] = '0';
  /* Field: Content: Other and/or price details */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_label_class'] = 'small-label, inline';
  $handler->display->display_options['fields']['field_price']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = FALSE;
  /* Field: Content: online */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_link']['element_label_class'] = 'label, inline';
  $handler->display->display_options['fields']['field_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Content: email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_email']['element_label_class'] = 'small-label, inline';
  $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  /* Field: Content: phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_phone']['element_label_class'] = 'small-label, inline';
  $handler->display->display_options['fields']['field_phone']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Location: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['relationship'] = 'field_offline_target_id';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
[field_image]
[field_price]
[field_phone]
[field_email]
[field_link]
[field_address]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Location: Map */
  $handler->display->display_options['fields']['field_map']['id'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['table'] = 'field_data_field_map';
  $handler->display->display_options['fields']['field_map']['field'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['relationship'] = 'field_offline_target_id';
  $handler->display->display_options['fields']['field_map']['label'] = '';
  $handler->display->display_options['fields']['field_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date &amp; Time -  start date (field_date_time) */
  $handler->display->display_options['sorts']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['sorts']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['sorts']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 events';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Date &amp; Time -  start date (field_date_time) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['default_date'] = 'today';
  /* Filter criterion: OG membership: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'og_membership';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'og_membership_type_default' => 'og_membership_type_default',
  );
  $handler->display->display_options['path'] = 'ical/node/%';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_2' => 0,
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: categories */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['type'] = 'services';
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['type'] = 'services';
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_date_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Group */
  $handler->display->display_options['fields']['group_group']['id'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['table'] = 'field_data_group_group';
  $handler->display->display_options['fields']['group_group']['field'] = 'group_group';
  $handler->display->display_options['fields']['group_group']['label'] = '';
  $handler->display->display_options['fields']['group_group']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['group_group']['type'] = 'services';
  $handler->display->display_options['fields']['group_group']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = '';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['element_default_classes'] = FALSE;
  /* Field: Content: offline */
  $handler->display->display_options['fields']['field_offline']['id'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['table'] = 'field_data_field_offline';
  $handler->display->display_options['fields']['field_offline']['field'] = 'field_offline';
  $handler->display->display_options['fields']['field_offline']['label'] = '';
  $handler->display->display_options['fields']['field_offline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline']['click_sort_column'] = 'target_id';
  $handler->display->display_options['fields']['field_offline']['type'] = 'services';
  $handler->display->display_options['fields']['field_offline']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_offline']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_offline']['delta_offset'] = '0';
  /* Field: Content: online */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'services';
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['type'] = 'services';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 1,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['created']['timezone'] = 'UTC';
  /* Field: Content: Other and/or price details */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_price']['type'] = 'services';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'services';
  $handler->display->display_options['fields']['field_topic']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_topic']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content revision: Vid */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'node_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['element_default_classes'] = FALSE;
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = '';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['guid']['element_default_classes'] = FALSE;
  /* Field: Feeds item: Item URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  /* Field: Feeds log: Importer id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'feeds_log';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['element_default_classes'] = FALSE;
  /* Field: Feeds log: Log message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'feeds_log';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['label'] = '';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message']['element_default_classes'] = FALSE;
  /* Field: Feeds log: Log time */
  $handler->display->display_options['fields']['log_time']['id'] = 'log_time';
  $handler->display->display_options['fields']['log_time']['table'] = 'feeds_log';
  $handler->display->display_options['fields']['log_time']['field'] = 'log_time';
  $handler->display->display_options['fields']['log_time']['label'] = '';
  $handler->display->display_options['fields']['log_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['log_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['log_time']['date_format'] = 'custom';
  $handler->display->display_options['fields']['log_time']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['log_time']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['log_time']['timezone'] = 'UTC';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date &amp; Time -  start date (field_date_time) */
  $handler->display->display_options['sorts']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['sorts']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['sorts']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Node UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'node';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'group_events';

  /* Display: Event title and date pane */
  $handler = $view->new_display('panel_pane', 'Event title and date pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Event pane with only the date and title';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['text'] = '<div class=date>[field_date_time]</div>';
  $handler->display->display_options['fields']['field_date_time']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['preserve_tags'] = '<div>';
  $handler->display->display_options['fields']['field_date_time']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_date_time']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  $handler->display->display_options['pane_title'] = 'Event title and date pane';
  $export['radar_event'] = $view;

  $view = new view();
  $view->name = 'radar_group_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_events';
  $view->human_name = 'Radar Group events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'results';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No upcoming events.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
  $handler->display->display_options['fields']['field_date_time_value_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value_1']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['text'] = '<div class=date>[field_date_time_value_1]</div>';
  $handler->display->display_options['fields']['field_date_time_value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['date_format'] = 'week_day';
  $handler->display->display_options['fields']['field_date_time_value_1']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value_1']['link_to_entity'] = 0;
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value']['date_format'] = 'short_day';
  $handler->display->display_options['fields']['field_date_time_value']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date &amp; Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Indexed Node: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_category']['alter']['text'] = ' - [field_category]';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['separator'] = ' / ';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = ' - [field_topic]';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'by / with';
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Contextual filter: Indexed Node: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['summary_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['arguments']['og_group_ref']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['validate_options']['types'] = array(
    'group' => 'group',
    'listings_group' => 'listings_group',
  );
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* Filter criterion: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_time_value']['value'] = '-2 hours';

  /* Display: Events teaser list pane */
  $handler = $view->new_display('panel_pane', 'Events teaser list pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
  $handler->display->display_options['fields']['field_date_time_value_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value_1']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['text'] = '<div class=date>[field_date_time_value_1]</div>';
  $handler->display->display_options['fields']['field_date_time_value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['date_format'] = 'radar_day';
  $handler->display->display_options['fields']['field_date_time_value_1']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value_1']['link_to_entity'] = 0;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = ' @ <strong>[og_group_ref]</strong>';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Indexed Node: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = ' - [field_category]';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['separator'] = ' / ';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = ' - [field_topic]';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_category][field_topic] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Indexed Node: Date &amp; Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Date &amp; Time: End date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value2']['id'] = 'field_date_time_value2';
  $handler->display->display_options['fields']['field_date_time_value2']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value2']['field'] = 'field_date_time_value2';
  $handler->display->display_options['fields']['field_date_time_value2']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value2']['date_format'] = 'radar_day';
  $handler->display->display_options['fields']['field_date_time_value2']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value2']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['summary_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['arguments']['og_group_ref']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['validate_options']['types'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['value'] = '-6 hours';
  $handler->display->display_options['pane_title'] = 'Events teaser list pane';
  $handler->display->display_options['pane_category']['name'] = 'Radar';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'og_group_ref' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Node: Groups',
    ),
  );
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Listings events teaser pane */
  $handler = $view->new_display('panel_pane', 'Listings events teaser pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
  $handler->display->display_options['fields']['field_date_time_value_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value_1']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['text'] = '<div class=date>[field_date_time_value_1]</div>';
  $handler->display->display_options['fields']['field_date_time_value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['date_format'] = 'radar_day';
  $handler->display->display_options['fields']['field_date_time_value_1']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value_1']['link_to_entity'] = 0;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = '@ [og_group_ref]';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Indexed Node: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field] [og_group_ref]';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Locations » Address: Building name (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['id'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['field'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['alter']['text'] = '[field_offline_field_address_name_line], ';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['link_to_entity'] = 0;
  /* Field: Locations » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['id'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['field'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['text'] = '[field_offline_field_address_thoroughfare], ';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = '[field_offline_field_address_name_line][field_offline_field_address_thoroughfare][field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_class'] = 'grey';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = ' - [field_category]';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['separator'] = ' / ';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = ' - [field_topic]';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Field: Indexed Node: Date &amp; Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'timezone',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Indexed Node: Date &amp; Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['text'] = '[field_date_time] [field_date_time_1][field_category][field_topic]';
  $handler->display->display_options['fields']['field_date_time']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['summary_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['arguments']['og_group_ref']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['validate_options']['types'] = array(
    'listings_group' => 'listings_group',
  );
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['value'] = '-6 hours';
  $handler->display->display_options['pane_title'] = 'Listings events teaser pane';
  $handler->display->display_options['pane_category']['name'] = 'Radar';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'og_group_ref' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Node: Groups',
    ),
  );
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Events page */
  $handler = $view->new_display('page', 'Events page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date_time_value_1' => 'field_date_time_value_1',
    'og_group_ref' => 'og_group_ref',
    'title_field' => 'title_field',
    'field_category' => 'field_category',
    'field_topic' => 'field_topic',
    'field_date_time_1' => 'field_date_time_1',
    'field_date_time' => 'field_date_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date_time_value_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['title'] = '%1 . Upcoming events ';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['summary_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['arguments']['og_group_ref']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['validate_options']['types'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['value'] = '-6 hours';
  $handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
  $handler->display->display_options['path'] = 'node/%/events';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['description'] = 'Upcoming events at / by this group';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Archive page */
  $handler = $view->new_display('page', 'Archive page', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date_time_value_1' => 'field_date_time_value_1',
    'og_group_ref' => 'og_group_ref',
    'title_field' => 'title_field',
    'field_category' => 'field_category',
    'field_topic' => 'field_topic',
    'field_date_time_1' => 'field_date_time_1',
    'field_date_time' => 'field_date_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date_time_value_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No past events.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: first_start_date */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['title'] = '%1 . Archive';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['summary_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['arguments']['og_group_ref']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['validate_options']['types'] = array(
    'group' => 'group',
  );
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['path'] = 'node/%/archive';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Archive';
  $handler->display->display_options['menu']['description'] = 'Archive events at / by this group';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Listings group Events page  */
  $handler = $view->new_display('page', 'Listings group Events page ', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date_time_value_1' => 'field_date_time_value_1',
    'og_group_ref' => 'og_group_ref',
    'title_field' => 'title_field',
    'field_category' => 'field_category',
    'field_topic' => 'field_topic',
    'field_date_time_1' => 'field_date_time_1',
    'field_date_time' => 'field_date_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date_time_value_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
  $handler->display->display_options['fields']['field_date_time_value_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value_1']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['text'] = '<div class=date>[field_date_time_value_1]</div>';
  $handler->display->display_options['fields']['field_date_time_value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['date_format'] = 'week_day';
  $handler->display->display_options['fields']['field_date_time_value_1']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value_1']['link_to_entity'] = 0;
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value']['date_format'] = 'short_day';
  $handler->display->display_options['fields']['field_date_time_value']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date &amp; Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Indexed Node: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_category']['alter']['text'] = ' - [field_category]';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['separator'] = ' / ';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = ' - [field_topic]';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'by / with';
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Locations » Address: Building name (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['id'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['field'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['label'] = 'Location';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['link_to_entity'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['title'] = '%1 . Upcoming events ';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['summary_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['arguments']['og_group_ref']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['validate_options']['types'] = array(
    'listings_group' => 'listings_group',
  );
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['value'] = '-6 hours';
  $handler->display->display_options['path'] = 'node/%/events-list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['description'] = 'Upcoming events at / by this group';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Listings group Archive page */
  $handler = $view->new_display('page', 'Listings group Archive page', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date_time_value_1' => 'field_date_time_value_1',
    'og_group_ref' => 'og_group_ref',
    'title_field' => 'title_field',
    'field_category' => 'field_category',
    'field_topic' => 'field_topic',
    'field_date_time_1' => 'field_date_time_1',
    'field_date_time' => 'field_date_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date_time_value_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_time' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No past events.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
  $handler->display->display_options['fields']['field_date_time_value_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value_1']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['text'] = '<div class=date>[field_date_time_value_1]</div>';
  $handler->display->display_options['fields']['field_date_time_value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['date_format'] = 'week_day';
  $handler->display->display_options['fields']['field_date_time_value_1']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value_1']['link_to_entity'] = 0;
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value']['date_format'] = 'short_day';
  $handler->display->display_options['fields']['field_date_time_value']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date &amp; Time */
  $handler->display->display_options['fields']['field_date_time_1']['id'] = 'field_date_time_1';
  $handler->display->display_options['fields']['field_date_time_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_1']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_1']['settings'] = array(
    'format_type' => 'radar_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time_1']['delta_offset'] = '0';
  /* Field: Indexed Node: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categories';
  $handler->display->display_options['fields']['field_category']['alter']['text'] = ' - [field_category]';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['list']['separator'] = ' / ';
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Indexed Node: additional tags */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = ' - [field_topic]';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'by / with';
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Locations » Address: Building name (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['id'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['field'] = 'field_offline_field_address_name_line';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['label'] = 'Location';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['link_to_entity'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: first_start_date */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Groups */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['og_group_ref']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['title'] = '%1 . Archive';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['summary_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time_value_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['arguments']['og_group_ref']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['og_group_ref']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['og_group_ref']['validate_options']['types'] = array(
    'listings_group' => 'listings_group',
  );
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['path'] = 'node/%/archive-list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Archive';
  $handler->display->display_options['menu']['description'] = 'Archive events at / by this group';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['radar_group_events'] = $view;

  return $export;
}
