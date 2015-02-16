<?php
/**
 * @file
 * radar_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function radar_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      1 => array(
        'identifier' => 'Node from Node (on Node: Groups [og_group_ref])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:og_group_ref-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c94ad0ef-1e15-4ef3-b863-9e20baf33e50';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e678f9f-2bfa-4016-809c-4815b47ed56b';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_event-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'tight',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e678f9f-2bfa-4016-809c-4815b47ed56b';
    $display->content['new-3e678f9f-2bfa-4016-809c-4815b47ed56b'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-3e678f9f-2bfa-4016-809c-4815b47ed56b';
    $pane = new stdClass();
    $pane->pid = 'new-271ca3f4-2ee1-4983-a168-bfc32a28f008';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'right tight label',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '271ca3f4-2ee1-4983-a168-bfc32a28f008';
    $display->content['new-271ca3f4-2ee1-4983-a168-bfc32a28f008'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-271ca3f4-2ee1-4983-a168-bfc32a28f008';
    $pane = new stdClass();
    $pane->pid = 'new-f98d3b40-9af2-4684-8e7c-e540fa80fac4';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_event-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clear',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f98d3b40-9af2-4684-8e7c-e540fa80fac4';
    $display->content['new-f98d3b40-9af2-4684-8e7c-e540fa80fac4'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-f98d3b40-9af2-4684-8e7c-e540fa80fac4';
    $pane = new stdClass();
    $pane->pid = 'new-23db92f7-26c5-4c09-b375-2f45cc1aea23';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'group-reference',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23db92f7-26c5-4c09-b375-2f45cc1aea23';
    $display->content['new-23db92f7-26c5-4c09-b375-2f45cc1aea23'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-23db92f7-26c5-4c09-b375-2f45cc1aea23';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f98d3b40-9af2-4684-8e7c-e540fa80fac4';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
