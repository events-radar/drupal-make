<?php
/**
 * @file
 * radar_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function radar_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = '';
  $page->path = 'find';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Find a group or an event',
    'name' => 'main-menu',
    'weight' => '-1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Search context',
        'keyword' => 'view',
        'name' => 'view:default_search_page-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => array(
        'separator' => array(
          'active' => 1,
          'element_type' => 'h3',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_second' => NULL,
    ),
    'two_33_66_top' => array(
      'style' => 'semantic_panels',
    ),
    'two_66_33_second' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Find a group or an event';
  $display->uuid = 'b4f3bc83-936c-4f28-972c-bd9167007779';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dd7f0cdc-237d-4e76-89b8-0264094107ec';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_search-panel_pane_1';
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
    $pane->uuid = 'dd7f0cdc-237d-4e76-89b8-0264094107ec';
    $display->content['new-dd7f0cdc-237d-4e76-89b8-0264094107ec'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-dd7f0cdc-237d-4e76-89b8-0264094107ec';
    $pane = new stdClass();
    $pane->pid = 'new-7e2ac13b-e6ee-4a9e-a3fa-121fdc95abfb';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-TK5FhtGH0f93oHIXunlqeyybwN1CqXpE';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'country',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e2ac13b-e6ee-4a9e-a3fa-121fdc95abfb';
    $display->content['new-7e2ac13b-e6ee-4a9e-a3fa-121fdc95abfb'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-7e2ac13b-e6ee-4a9e-a3fa-121fdc95abfb';
    $pane = new stdClass();
    $pane->pid = 'new-395fe94b-9298-432b-883c-17d5660604dc';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-BpKG9sJuH6EQ21OMGixmiBtfu5bM1Y2o';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'city',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '395fe94b-9298-432b-883c-17d5660604dc';
    $display->content['new-395fe94b-9298-432b-883c-17d5660604dc'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-395fe94b-9298-432b-883c-17d5660604dc';
    $pane = new stdClass();
    $pane->pid = 'new-035441a7-62d7-49df-8c29-20f5c3fcf67c';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '035441a7-62d7-49df-8c29-20f5c3fcf67c';
    $display->content['new-035441a7-62d7-49df-8c29-20f5c3fcf67c'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-035441a7-62d7-49df-8c29-20f5c3fcf67c';
    $pane = new stdClass();
    $pane->pid = 'new-e4fe591d-6218-4455-9d52-b0a2b985c770';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-W6Y01TnXzLiqUKc7f9pIbDZKgyVZ0i1g';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'categories',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4fe591d-6218-4455-9d52-b0a2b985c770';
    $display->content['new-e4fe591d-6218-4455-9d52-b0a2b985c770'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-e4fe591d-6218-4455-9d52-b0a2b985c770';
    $pane = new stdClass();
    $pane->pid = 'new-c5505282-86c6-4cfc-9ab2-4f92e47389ad';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-radar_search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => 'Fulltext search',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c5505282-86c6-4cfc-9ab2-4f92e47389ad';
    $display->content['new-c5505282-86c6-4cfc-9ab2-4f92e47389ad'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-c5505282-86c6-4cfc-9ab2-4f92e47389ad';
    $pane = new stdClass();
    $pane->pid = 'new-e5755648-6e41-4473-99f9-c55a458b7e5c';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-J5pGIgqlzb1Z0Fbz6bvodsbEuL2a6kIH';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e5755648-6e41-4473-99f9-c55a458b7e5c';
    $display->content['new-e5755648-6e41-4473-99f9-c55a458b7e5c'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-e5755648-6e41-4473-99f9-c55a458b7e5c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
