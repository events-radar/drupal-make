<?php
/**
 * @file
 * radar_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function radar_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'radar_event_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_events';
  $view->human_name = 'Radar event search';
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
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
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
  $handler->display->display_options['style_options']['row_class'] = 'results [field_event_status_1]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Indexed Node: Event status */
  $handler->display->display_options['fields']['field_event_status']['id'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_status']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status']['label'] = '';
  $handler->display->display_options['fields']['field_event_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_status']['alter']['text'] = '[field_event_status]: ';
  $handler->display->display_options['fields']['field_event_status']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_event_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_status']['type'] = 'i18n_list_default';
  /* Field: Indexed Node: Event status */
  $handler->display->display_options['fields']['field_event_status_1']['id'] = 'field_event_status_1';
  $handler->display->display_options['fields']['field_event_status_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_status_1']['field'] = 'field_event_status';
  $handler->display->display_options['fields']['field_event_status_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_status_1']['type'] = 'list_key';
  /* Field: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value_1']['id'] = 'field_date_time_value_1';
  $handler->display->display_options['fields']['field_date_time_value_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value_1']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value_1']['alter']['text'] = '<div class=date>[field_date_time_value_1]</div>';
  $handler->display->display_options['fields']['field_date_time_value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value_1']['date_format'] = 'radar_day';
  $handler->display->display_options['fields']['field_date_time_value_1']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value_1']['link_to_entity'] = 0;
  /* Field: Date &amp; Time: End date (indexed) */
  $handler->display->display_options['fields']['field_date_time_value2']['id'] = 'field_date_time_value2';
  $handler->display->display_options['fields']['field_date_time_value2']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_value2']['field'] = 'field_date_time_value2';
  $handler->display->display_options['fields']['field_date_time_value2']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value2']['date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value2']['second_date_format'] = 'radar_time';
  $handler->display->display_options['fields']['field_date_time_value2']['link_to_entity'] = 0;
  /* Field: Date &amp; Time: Duration (indexed) */
  $handler->display->display_options['fields']['field_date_time_duration']['id'] = 'field_date_time_duration';
  $handler->display->display_options['fields']['field_date_time_duration']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time_duration']['field'] = 'field_date_time_duration';
  $handler->display->display_options['fields']['field_date_time_duration']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_duration']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_date_time_duration']['format_interval'] = 0;
  $handler->display->display_options['fields']['field_date_time_duration']['granularity'] = '2';
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = 'This is overridden in themes/at_radar/templates/views-view-field--radar-event-search--title-field.tpl.php
';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<a href="[url]" property="schema:url">[title_field]</a>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['alter']['text'] = '<span property="schema:name">[field_offline_field_address_name_line]</span>, ';
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_name_line']['link_to_entity'] = 0;
  /* Field: Locations » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['id'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['field'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['text'] = '<span property="schema:streetAddress">[field_offline_field_address_thoroughfare]</span>, ';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = '<span property="schema:addressLocality">[field_offline_field_address_locality]</span>';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_class'] = 'grey';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Locations » Address: Administrative area (i.e. State / Province) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['id'] = 'field_offline_field_address_administrative_area';
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['field'] = 'field_offline_field_address_administrative_area';
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['alter']['text'] = '<meta property="schema:addressRegion" content=[field_offline_field_address_administrative_area] />';
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_administrative_area']['link_to_entity'] = 0;
  /* Field: Locations » Address: Postal code (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['id'] = 'field_offline_field_address_postal_code';
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['field'] = 'field_offline_field_address_postal_code';
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['alter']['text'] = '<meta property="schema:postalCode" content="[field_offline_field_address_postal_code]" />';
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_postal_code']['link_to_entity'] = 0;
  /* Field: Locations » Address: Country (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_country']['id'] = 'field_offline_field_address_country';
  $handler->display->display_options['fields']['field_offline_field_address_country']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_offline_field_address_country']['field'] = 'field_offline_field_address_country';
  $handler->display->display_options['fields']['field_offline_field_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_country']['alter']['text'] = '<meta property="schema:addressCountry" content="[field_offline_field_address_country]" />';
  $handler->display->display_options['fields']['field_offline_field_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_country']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_offline_field_address_country']['format_name'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="grey" property="schema:location" typeof="Place">[field_offline_field_address_name_line]<span property="address" typeof="PostalAddress">[field_offline_field_address_thoroughfare][field_offline_field_address_locality][field_offline_field_address_administrative_area][field_offline_field_address_postal_code][field_offline_field_address_country]</span></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Date &amp; Time */
  $handler->display->display_options['fields']['field_date_time']['id'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_date_time']['field'] = 'field_date_time';
  $handler->display->display_options['fields']['field_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time']['element_default_classes'] = FALSE;
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
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = ' — [field_category]';
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
  $handler->display->display_options['fields']['field_topic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = ' — [field_topic]';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;
  /* Sort criterion: Indexed Node: first_start_date */
  $handler->display->display_options['sorts']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  /* Sort criterion: Indexed Node: first_end_date */
  $handler->display->display_options['sorts']['search_api_aggregation_3']['id'] = 'search_api_aggregation_3';
  $handler->display->display_options['sorts']['search_api_aggregation_3']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['search_api_aggregation_3']['field'] = 'search_api_aggregation_3';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filter criterion: Date &amp; Time: Start date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['filters']['field_date_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_time_value']['value'] = '-6 hours';
  $handler->display->display_options['filters']['field_date_time_value']['group'] = 1;
  /* Filter criterion: Date &amp; Time: End date (indexed) */
  $handler->display->display_options['filters']['field_date_time_value2']['id'] = 'field_date_time_value2';
  $handler->display->display_options['filters']['field_date_time_value2']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_date_time_value2']['field'] = 'field_date_time_value2';
  $handler->display->display_options['filters']['field_date_time_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_time_value2']['value'] = 'now - 1 hour';
  $handler->display->display_options['filters']['field_date_time_value2']['group'] = 1;

  /* Display: Events search pane */
  $handler = $view->new_display('panel_pane', 'Events search pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Events search pane';
  $handler->display->display_options['pane_category']['name'] = 'Radar';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['radar_event_search'] = $view;

  $view = new view();
  $view->name = 'radar_group_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_groups';
  $view->human_name = 'Radar Group search';
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
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'A-Z';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Z-A';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'search_api_aggregation_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'rich_text_editor';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'results';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>[field_offline_field_address_locality] ';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'group clear';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: opening times */
  $handler->display->display_options['fields']['field_opening_times']['id'] = 'field_opening_times';
  $handler->display->display_options['fields']['field_opening_times']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_opening_times']['field'] = 'field_opening_times';
  $handler->display->display_options['fields']['field_opening_times']['label'] = '';
  $handler->display->display_options['fields']['field_opening_times']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opening_times']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_opening_times']['element_wrapper_class'] = 'right half';
  $handler->display->display_options['fields']['field_opening_times']['element_default_classes'] = FALSE;
  /* Field: Locations » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['id'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['field'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['alter']['text'] = '[field_offline_field_address_thoroughfare], ';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = '[field_offline_field_address_thoroughfare][field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_wrapper_class'] = 'half';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_category']['element_wrapper_class'] = 'info half';
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Sort criterion: Indexed Node: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_groups';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'OR',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_groups';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search by name, building name or street';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    8 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'search_api_aggregation_1' => 'search_api_aggregation_1',
  );
  /* Filter criterion: Indexed Node: Active */
  $handler->display->display_options['filters']['field_active']['id'] = 'field_active';
  $handler->display->display_options['filters']['field_active']['table'] = 'search_api_index_groups';
  $handler->display->display_options['filters']['field_active']['field'] = 'field_active';
  $handler->display->display_options['filters']['field_active']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_active']['group'] = 2;
  /* Filter criterion: Indexed Node: Active */
  $handler->display->display_options['filters']['field_active_1']['id'] = 'field_active_1';
  $handler->display->display_options['filters']['field_active_1']['table'] = 'search_api_index_groups';
  $handler->display->display_options['filters']['field_active_1']['field'] = 'field_active';
  $handler->display->display_options['filters']['field_active_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_active_1']['value'] = array();
  $handler->display->display_options['filters']['field_active_1']['group'] = 2;

  /* Display: Groups search pane */
  $handler = $view->new_display('panel_pane', 'Groups search pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No result message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there\'s no group under that name (yet). 
But if you are involved with it, then you can easily add it here.';
  $handler->display->display_options['empty']['area']['format'] = 'rich_text_editor';
  $handler->display->display_options['pane_title'] = 'Group search pane';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_offline_field_map_geom',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'nothing',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Locations » Map: Well-known text (indexed) */
  $handler->display->display_options['fields']['field_offline_field_map_geom']['id'] = 'field_offline_field_map_geom';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['field'] = 'field_offline_field_map_geom';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_map_geom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_map_geom']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>[field_offline_field_address_locality] ';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'map';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Locations » Address: Thoroughfare (i.e. Street address) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['id'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['field'] = 'field_offline_field_address_thoroughfare';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_thoroughfare']['link_to_entity'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = '[field_offline_field_address_thoroughfare][field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'search_api_index_groups';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_category']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_offline_field_address_thoroughfare]
[field_category]
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Groups search map */
  $handler = $view->new_display('panel_pane', 'Groups search map', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'radar_groups_all';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Map with all groups';
  $handler->display->display_options['inherit_panels_path'] = '0';
  $export['radar_group_search'] = $view;

  $view = new view();
  $view->name = 'radar_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Radar Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'result';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Indexed Node: Groups */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = ' @ [og_group_ref]';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['og_group_ref']['view_mode'] = 'full';
  $handler->display->display_options['fields']['og_group_ref']['bypass_access'] = 0;
  /* Field: Locations » Address: Locality (i.e. City) (indexed) */
  $handler->display->display_options['fields']['field_offline_field_address_locality']['id'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['field'] = 'field_offline_field_address_locality';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['alter']['text'] = ', [field_offline_field_address_locality]';
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offline_field_address_locality']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title][og_group_ref]</strong>[field_offline_field_address_locality] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Other and/or price details */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '';
  $handler->display->display_options['fields']['field_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_price']['alter']['text'] = ' - [field_price]';
  $handler->display->display_options['fields']['field_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_price']['element_class'] = 'inline';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = FALSE;
  /* Field: Indexed Node: Date &amp; Time » Start date */
  $handler->display->display_options['fields']['field_date_time_value']['id'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_date_time_value']['field'] = 'field_date_time_value';
  $handler->display->display_options['fields']['field_date_time_value']['label'] = '';
  $handler->display->display_options['fields']['field_date_time_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_time_value']['alter']['text'] = '[field_date_time_value] [field_price]';
  $handler->display->display_options['fields']['field_date_time_value']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_date_time_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_time_value']['date_format'] = 'long';
  $handler->display->display_options['fields']['field_date_time_value']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['field_date_time_value']['link_to_entity'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Radar search pane';
  $export['radar_search'] = $view;

  return $export;
}
