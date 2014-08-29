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
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  /* Field: Content: price */
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
  $handler->display->display_options['pane_title'] = 'Full event info';

  /* Display: Teaser event pane */
  $handler = $view->new_display('panel_pane', 'Teaser event pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Displaying the teaser of one or several events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date & Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['text'] = '<div class=date>[field_date_time]</div>';
  $handler->display->display_options['fields']['field_date_time']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date_time']['alter']['preserve_tags'] = '<div>';
  $handler->display->display_options['fields']['field_date_time']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date_time']['element_class'] = 'date';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['settings'] = array(
    'format_type' => 'radar_day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = ' ... more >>';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body][view_node]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
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
  /* Field: Content: price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_label_class'] = 'label inline';
  $handler->display->display_options['fields']['field_price']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_wrapper_class'] = 'info';
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
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
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date &amp; Time -  start date (field_date_time) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'field_data_field_date_time';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_time_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_date_time_value']['year_range'] = '-1:+3';
  /* Filter criterion: OG membership: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'og_membership';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'og_membership_type_default' => 'og_membership_type_default',
  );
  $handler->display->display_options['pane_title'] = 'Events teasers';

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
  $handler->display->display_options['fields']['term_node_tid_i18n']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_i18n']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid_i18n']['vocabularies'] = array(
    'category' => 'category',
    'topics' => 0,
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
  /* Field: Content: price */
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
    'panel_pane_2' => 'panel_pane_2',
    'default' => 0,
    'panel_pane_1' => 0,
  );
  $export['radar_event'] = $view;

  return $export;
}
