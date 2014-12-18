<?php
/**
 * @file
 * radar_location.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function radar_location_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'radar_locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_location';
  $view->human_name = 'Radar Locations';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_map',
    'other_lon' => 'field_map',
    'wkt' => 'field_map',
    'other_top' => 'field_map',
    'other_right' => 'field_map',
    'other_bottom' => 'field_map',
    'other_left' => 'field_map',
    'name_field' => '',
    'description_field' => 'nothing',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Location: Map */
  $handler->display->display_options['fields']['field_map']['id'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['table'] = 'field_data_field_map';
  $handler->display->display_options['fields']['field_map']['field'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['label'] = '';
  $handler->display->display_options['fields']['field_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Location: Address - Full name */
  $handler->display->display_options['fields']['field_address_name_line']['id'] = 'field_address_name_line';
  $handler->display->display_options['fields']['field_address_name_line']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_name_line']['field'] = 'field_address_name_line';
  $handler->display->display_options['fields']['field_address_name_line']['label'] = '';
  $handler->display->display_options['fields']['field_address_name_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_name_line']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_name_line']['alter']['text'] = '[field_address_name_line] ';
  $handler->display->display_options['fields']['field_address_name_line']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_address_name_line']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_name_line']['element_default_classes'] = FALSE;
  /* Field: Location: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['text'] = '[field_address_thoroughfare], ';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_default_classes'] = FALSE;
  /* Field: Location: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_locality']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[field_address_name_line]</strong>[field_address_thoroughfare][field_address_locality]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Location: location type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_location';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );

  /* Display: All locations OL Overlay */
  $handler = $view->new_display('openlayers', 'All locations OL Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $export['radar_locations'] = $view;

  return $export;
}
