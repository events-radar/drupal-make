<?php
/**
 * @file
 * radar_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function radar_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@default_node_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@default_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@events';
  $strongarm->value = '-1';
  $export['facetapi:block_cache:search_api@events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@default_node_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@default_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@default_node_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
  );
  $export['facetapi_pretty_paths_searcher_search_api@default_node_index_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@events';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@events_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
  );
  $export['facetapi_pretty_paths_searcher_search_api@events_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@groups';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@groups'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@groups_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
  );
  $export['facetapi_pretty_paths_searcher_search_api@groups_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'default_node_index' => array(
      'search_api_views:radar_search:panel_pane_1' => 'search_api_views:radar_search:panel_pane_1',
    ),
    'events' => array(
      'search_api_views:radar_event_search:panel_pane_1' => 'search_api_views:radar_event_search:panel_pane_1',
      'search_api_views:radar_group_search:panel_pane_1' => 'search_api_views:radar_group_search:panel_pane_1',
      'search_api_views:radar_group_search:default' => 'search_api_views:radar_group_search:default',
      'SearchApiQuery' => 'SearchApiQuery',
      'search_api_views:radar_group_events:panel_pane_1' => 'search_api_views:radar_group_events:panel_pane_1',
      'search_api_views:radar_group_events:panel_pane_2' => 'search_api_views:radar_group_events:panel_pane_2',
      'search_api_views:radar_group_events:page_1' => 'search_api_views:radar_group_events:page_1',
      'search_api_views:radar_group_events:page_2' => 'search_api_views:radar_group_events:page_2',
      'search_api_views:radar_group_events:page_3' => 'search_api_views:radar_group_events:page_3',
      'search_api_views:radar_group_events:page_4' => 'search_api_views:radar_group_events:page_4',
    ),
    'groups' => array(
      'search_api_views:radar_group_search:panel_pane_1' => 'search_api_views:radar_group_search:panel_pane_1',
      'SearchApiQuery' => 'SearchApiQuery',
      'search_api_views:radar_group_search:panel_pane_2' => 'search_api_views:radar_group_search:panel_pane_2',
      'search_api_views:radar_group_search:openlayers_1' => 'search_api_views:radar_group_search:openlayers_1',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
