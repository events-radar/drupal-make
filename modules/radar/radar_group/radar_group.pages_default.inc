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
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[node:title], [node:field-offline:0:field-address:locality] [node:field-offline:0:field-address:country] | [site:name]',
        ),
        'description' => array(
          'value' => 'Events at [node:title]. [node:summary]',
        ),
        'rating' => array(
          'value' => 'general',
        ),
        'referrer' => array(
          'value' => 'no-referrer',
        ),
        'geo.position' => array(
          'value' => '[node:field-offline:0:field-map:lat],[node:field-offline:0:field-map:lon]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
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
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '38820a9a-b71f-4cf3-a8bf-5f3a87dac8fb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5c8cb8f0-7763-42be-b556-1e1d77f15fae';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => 'group',
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
    'css_class' => 'tight',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5c8cb8f0-7763-42be-b556-1e1d77f15fae';
  $display->content['new-5c8cb8f0-7763-42be-b556-1e1d77f15fae'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-5c8cb8f0-7763-42be-b556-1e1d77f15fae';
  $pane = new stdClass();
  $pane->pid = 'new-23ad67b7-424b-4a8d-aea4-b1cb4ca8194e';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
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
  $pane->uuid = '23ad67b7-424b-4a8d-aea4-b1cb4ca8194e';
  $display->content['new-23ad67b7-424b-4a8d-aea4-b1cb4ca8194e'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-23ad67b7-424b-4a8d-aea4-b1cb4ca8194e';
  $pane = new stdClass();
  $pane->pid = 'new-2a99011c-a7ad-414c-987e-75ad2fda1b77';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'identifier' => 'group',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2a99011c-a7ad-414c-987e-75ad2fda1b77';
  $display->content['new-2a99011c-a7ad-414c-987e-75ad2fda1b77'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-2a99011c-a7ad-414c-987e-75ad2fda1b77';
  $pane = new stdClass();
  $pane->pid = 'new-a0ed1d52-01a5-45be-bed4-f9cacfe7b393';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'radar_locations-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'address-map',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a0ed1d52-01a5-45be-bed4-f9cacfe7b393';
  $display->content['new-a0ed1d52-01a5-45be-bed4-f9cacfe7b393'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-a0ed1d52-01a5-45be-bed4-f9cacfe7b393';
  $pane = new stdClass();
  $pane->pid = 'new-17ab2b05-3539-44d5-b53c-0667a0e8e20f';
  $pane->panel = 'two_66_33_second';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'create-event',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17ab2b05-3539-44d5-b53c-0667a0e8e20f';
  $display->content['new-17ab2b05-3539-44d5-b53c-0667a0e8e20f'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-17ab2b05-3539-44d5-b53c-0667a0e8e20f';
  $pane = new stdClass();
  $pane->pid = 'new-1798fc28-a444-4373-8a51-b06fb894e14d';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views_panes';
  $pane->subtype = 'radar_group_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1798fc28-a444-4373-8a51-b06fb894e14d';
  $display->content['new-1798fc28-a444-4373-8a51-b06fb894e14d'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-1798fc28-a444-4373-8a51-b06fb894e14d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
