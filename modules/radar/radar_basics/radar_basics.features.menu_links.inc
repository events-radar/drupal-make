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

  // Exported menu link: main-menu_how-to-post:node/28
  $menu_links['main-menu_how-to-post:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'How to post?',
    'options' => array(
      'identifier' => 'main-menu_how-to-post:node/28',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_info:node/27
  $menu_links['main-menu_info:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Info',
    'options' => array(
      'identifier' => 'main-menu_info:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('How to post?');
  t('Info');


  return $menu_links;
}
