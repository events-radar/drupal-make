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
  // Exported menu link: main-menu_api:node/2
  $menu_links['main-menu_api:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'API',
    'options' => array(
      'identifier' => 'main-menu_api:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 14,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_create-account:user/register
  $menu_links['main-menu_create-account:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Create account',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new user account, login or request a new password.',
      ),
      'identifier' => 'main-menu_create-account:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_translate:node/492
  $menu_links['main-menu_translate:node/492'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/492',
    'router_path' => 'node/%',
    'link_title' => 'Translate',
    'options' => array(
      'identifier' => 'main-menu_translate:node/492',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_why-radar:node/1
  $menu_links['main-menu_why-radar:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Why Radar?',
    'options' => array(
      'identifier' => 'main-menu_why-radar:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('API');
  t('All events');
  t('All groups');
  t('Create account');
  t('Translate');
  t('Why Radar?');


  return $menu_links;
}
