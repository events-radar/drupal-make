<?php
/**
 * @file
 * radar_basics.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function radar_basics_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_all-events:events
  $menu_links['main-menu_all-events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'All events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_all-events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_all-groups:groups
  $menu_links['main-menu_all-groups:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'All groups',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_all-groups:groups',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All events');
  t('All groups');


  return $menu_links;
}
