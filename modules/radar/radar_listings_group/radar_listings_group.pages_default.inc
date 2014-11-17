<?php
/**
 * @file
 * radar_listings_group.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function radar_listings_group_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Listings group',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'listings_group' => 'listings_group',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '64058fd8-3c63-4145-a87d-38bea83e4937';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f336265-4810-4aa6-85f4-c0dec56db6db';
    $pane->panel = 'three_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_event-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f336265-4810-4aa6-85f4-c0dec56db6db';
    $display->content['new-8f336265-4810-4aa6-85f4-c0dec56db6db'] = $pane;
    $display->panels['three_33_first'][0] = 'new-8f336265-4810-4aa6-85f4-c0dec56db6db';
    $pane = new stdClass();
    $pane->pid = 'new-10fa3179-dfe4-4cb4-b02c-af65aa4c619a';
    $pane->panel = 'three_33_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_listings_group-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10fa3179-dfe4-4cb4-b02c-af65aa4c619a';
    $display->content['new-10fa3179-dfe4-4cb4-b02c-af65aa4c619a'] = $pane;
    $display->panels['three_33_second'][0] = 'new-10fa3179-dfe4-4cb4-b02c-af65aa4c619a';
    $pane = new stdClass();
    $pane->pid = 'new-938fb455-b350-471f-b4ea-33401cc4b1ea';
    $pane->panel = 'three_33_third';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_listed_groups-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'list',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '938fb455-b350-471f-b4ea-33401cc4b1ea';
    $display->content['new-938fb455-b350-471f-b4ea-33401cc4b1ea'] = $pane;
    $display->panels['three_33_third'][0] = 'new-938fb455-b350-471f-b4ea-33401cc4b1ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
