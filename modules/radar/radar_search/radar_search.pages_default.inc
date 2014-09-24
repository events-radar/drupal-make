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
  $page->name = 'events_search';
  $page->task = 'page';
  $page->admin_title = 'Events search';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
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
  $handler->name = 'page_events_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events_search';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3623b5d7-4332-4f49-be14-fad52801b9cc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0b662ad6-d06f-453e-8a44-35fcc9b805bd';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_event_search-panel_pane_1';
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
    $pane->uuid = '0b662ad6-d06f-453e-8a44-35fcc9b805bd';
    $display->content['new-0b662ad6-d06f-453e-8a44-35fcc9b805bd'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-0b662ad6-d06f-453e-8a44-35fcc9b805bd';
    $pane = new stdClass();
    $pane->pid = 'new-64fb8699-d523-48af-9b36-366be1de64ff';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ZPDBSR9GA0OEinzmxHzmx7DMveoUjBKf';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Date',
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
    $pane->uuid = '64fb8699-d523-48af-9b36-366be1de64ff';
    $display->content['new-64fb8699-d523-48af-9b36-366be1de64ff'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-64fb8699-d523-48af-9b36-366be1de64ff';
    $pane = new stdClass();
    $pane->pid = 'new-1b0f00c2-cb60-485f-88c2-a711d92e0731';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-4ZSpuYvOLph50NrKwO1amYta8i4GCGOP';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1b0f00c2-cb60-485f-88c2-a711d92e0731';
    $display->content['new-1b0f00c2-cb60-485f-88c2-a711d92e0731'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-1b0f00c2-cb60-485f-88c2-a711d92e0731';
    $pane = new stdClass();
    $pane->pid = 'new-ee82233e-5e95-4a1d-90a0-bafb19508aa4';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-VjjFMfYwN1LPpK57ItMLwb0YrXvslljB';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ee82233e-5e95-4a1d-90a0-bafb19508aa4';
    $display->content['new-ee82233e-5e95-4a1d-90a0-bafb19508aa4'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-ee82233e-5e95-4a1d-90a0-bafb19508aa4';
    $pane = new stdClass();
    $pane->pid = 'new-4f3442c0-c962-4b69-8241-e0ecf79672da';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-92Tpcv5YZj5ig48cuCbKUWg1qqZ9FpIJ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '4f3442c0-c962-4b69-8241-e0ecf79672da';
    $display->content['new-4f3442c0-c962-4b69-8241-e0ecf79672da'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-4f3442c0-c962-4b69-8241-e0ecf79672da';
    $pane = new stdClass();
    $pane->pid = 'new-11fd1737-aac2-43b0-8ea1-351fae1b9e4c';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ypn9D8FiYLlYpaNcqutSeIJmvCVn4GSo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'price',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '11fd1737-aac2-43b0-8ea1-351fae1b9e4c';
    $display->content['new-11fd1737-aac2-43b0-8ea1-351fae1b9e4c'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-11fd1737-aac2-43b0-8ea1-351fae1b9e4c';
    $pane = new stdClass();
    $pane->pid = 'new-6a0fcc2a-da57-42d2-94e7-265c694c7d06';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-YX5DrYOgM0fDF7rf6mfjlyclDyz3qGQb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'category',
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
    $pane->uuid = '6a0fcc2a-da57-42d2-94e7-265c694c7d06';
    $display->content['new-6a0fcc2a-da57-42d2-94e7-265c694c7d06'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-6a0fcc2a-da57-42d2-94e7-265c694c7d06';
    $pane = new stdClass();
    $pane->pid = 'new-d82729a5-0d4c-4674-a85d-424d5044b962';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1LCC9XK4XUAiyLM5cDymEbcnMP5PA0a5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'topic',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd82729a5-0d4c-4674-a85d-424d5044b962';
    $display->content['new-d82729a5-0d4c-4674-a85d-424d5044b962'] = $pane;
    $display->panels['two_66_33_second'][6] = 'new-d82729a5-0d4c-4674-a85d-424d5044b962';
    $pane = new stdClass();
    $pane->pid = 'new-8d3ed2a8-d142-4b29-9130-c3c7f76832bf';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-prxIz0gveg1dfMtN9m1bWufCOuvN4oH7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'events-period',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d3ed2a8-d142-4b29-9130-c3c7f76832bf';
    $display->content['new-8d3ed2a8-d142-4b29-9130-c3c7f76832bf'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-8d3ed2a8-d142-4b29-9130-c3c7f76832bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b662ad6-d06f-453e-8a44-35fcc9b805bd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'groups_search';
  $page->task = 'page';
  $page->admin_title = 'Groups search';
  $page->admin_description = '';
  $page->path = 'groups';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
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
  $handler->name = 'page_groups_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'groups_search';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7c30237a-f651-40e5-8ede-55af941f007c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-910a6a0a-bb6d-4ea7-92d2-4d0d2b28f791';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'radar_group_search-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'group',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '910a6a0a-bb6d-4ea7-92d2-4d0d2b28f791';
    $display->content['new-910a6a0a-bb6d-4ea7-92d2-4d0d2b28f791'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-910a6a0a-bb6d-4ea7-92d2-4d0d2b28f791';
    $pane = new stdClass();
    $pane->pid = 'new-68652075-9565-4bbe-9434-8bca72ca92d6';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '68652075-9565-4bbe-9434-8bca72ca92d6';
    $display->content['new-68652075-9565-4bbe-9434-8bca72ca92d6'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-68652075-9565-4bbe-9434-8bca72ca92d6';
    $pane = new stdClass();
    $pane->pid = 'new-a65c460e-5e85-4e6a-9c00-f776c9126d7c';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zlAH2t6T8rBYJ5Pk1INHQNfDTe3At1GS';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a65c460e-5e85-4e6a-9c00-f776c9126d7c';
    $display->content['new-a65c460e-5e85-4e6a-9c00-f776c9126d7c'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-a65c460e-5e85-4e6a-9c00-f776c9126d7c';
    $pane = new stdClass();
    $pane->pid = 'new-cf895da5-483a-4264-9f5d-d30b8cd3dfcf';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-xNJSoKKSmhCs9ofbhO4sVzHbWh2ef1DP';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cf895da5-483a-4264-9f5d-d30b8cd3dfcf';
    $display->content['new-cf895da5-483a-4264-9f5d-d30b8cd3dfcf'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-cf895da5-483a-4264-9f5d-d30b8cd3dfcf';
    $pane = new stdClass();
    $pane->pid = 'new-49ed8934-7fe7-42a9-b43c-302721dd6c5f';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Gi3XYSEKIhAqPwn3xkWUKPAMj3cGn1G0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '49ed8934-7fe7-42a9-b43c-302721dd6c5f';
    $display->content['new-49ed8934-7fe7-42a9-b43c-302721dd6c5f'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-49ed8934-7fe7-42a9-b43c-302721dd6c5f';
    $pane = new stdClass();
    $pane->pid = 'new-35c26d8c-a5dc-48d0-9adf-62501de11a9c';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-MJ87TrovHFcRFIM48zUUFT9ers4B2zu9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'category',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '35c26d8c-a5dc-48d0-9adf-62501de11a9c';
    $display->content['new-35c26d8c-a5dc-48d0-9adf-62501de11a9c'] = $pane;
    $display->panels['two_66_33_second'][4] = 'new-35c26d8c-a5dc-48d0-9adf-62501de11a9c';
    $pane = new stdClass();
    $pane->pid = 'new-5146845c-6f97-4f13-81ba-3be865bf5ac6';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hBhQE6yb2dxndFUeffmWYbjeoMBTZiQQ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'topic',
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
    $pane->uuid = '5146845c-6f97-4f13-81ba-3be865bf5ac6';
    $display->content['new-5146845c-6f97-4f13-81ba-3be865bf5ac6'] = $pane;
    $display->panels['two_66_33_second'][5] = 'new-5146845c-6f97-4f13-81ba-3be865bf5ac6';
    $pane = new stdClass();
    $pane->pid = 'new-a5524ca5-d5ae-4f90-88a3-e902ae9e6dbe';
    $pane->panel = 'two_66_33_top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-lirCIeGDpOk51NhVxN8U0VZDHhvWrSmF';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = 'a5524ca5-d5ae-4f90-88a3-e902ae9e6dbe';
    $display->content['new-a5524ca5-d5ae-4f90-88a3-e902ae9e6dbe'] = $pane;
    $display->panels['two_66_33_top'][0] = 'new-a5524ca5-d5ae-4f90-88a3-e902ae9e6dbe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-68652075-9565-4bbe-9434-8bca72ca92d6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['groups_search'] = $page;

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
    'type' => 'none',
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
