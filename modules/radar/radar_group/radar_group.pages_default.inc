<?php
/**
 * @file
 * radar_group.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function radar_group_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Group',
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
              'group' => 'group',
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
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '38820a9a-b71f-4cf3-a8bf-5f3a87dac8fb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-889b64a9-7ff3-4123-b07f-e9bb44474265';
    $pane->panel = 'two_33_66_first';
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
      'css_class' => 'event',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '889b64a9-7ff3-4123-b07f-e9bb44474265';
    $display->content['new-889b64a9-7ff3-4123-b07f-e9bb44474265'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-889b64a9-7ff3-4123-b07f-e9bb44474265';
    $pane = new stdClass();
    $pane->pid = 'new-6e525b08-bf1b-4192-b6cb-9939a7c827f9';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_group-panel_pane_1';
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
    $pane->uuid = '6e525b08-bf1b-4192-b6cb-9939a7c827f9';
    $display->content['new-6e525b08-bf1b-4192-b6cb-9939a7c827f9'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-6e525b08-bf1b-4192-b6cb-9939a7c827f9';
    $pane = new stdClass();
    $pane->pid = 'new-17ab2b05-3539-44d5-b53c-0667a0e8e20f';
    $pane->panel = 'two_33_66_top';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17ab2b05-3539-44d5-b53c-0667a0e8e20f';
    $display->content['new-17ab2b05-3539-44d5-b53c-0667a0e8e20f'] = $pane;
    $display->panels['two_33_66_top'][0] = 'new-17ab2b05-3539-44d5-b53c-0667a0e8e20f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6e525b08-bf1b-4192-b6cb-9939a7c827f9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
