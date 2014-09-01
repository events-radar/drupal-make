<?php
/**
 * @file
 * radar_admin_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function radar_admin_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_event-ical-importer:node/add/event-ical-importer
  $menu_links['navigation_event-ical-importer:node/add/event-ical-importer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-ical-importer',
    'router_path' => 'node/add/event-ical-importer',
    'link_title' => 'Event ical importer',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration item for pulling in an iCal feed and converting items into events in radar.',
      ),
      'identifier' => 'navigation_event-ical-importer:node/add/event-ical-importer',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_event:node/add/event
  $menu_links['navigation_event:node/add/event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => 'What is happening when? ',
      ),
      'identifier' => 'navigation_event:node/add/event',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_group:node/add/group
  $menu_links['navigation_group:node/add/group'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/group',
    'router_path' => 'node/add/group',
    'link_title' => 'Group',
    'options' => array(
      'attributes' => array(
        'title' => 'Squat, location, action group, city.',
      ),
      'identifier' => 'navigation_group:node/add/group',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_import:import
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: navigation_page:node/add/page
  $menu_links['navigation_page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Simple pages, for example the about page.',
      ),
      'identifier' => 'navigation_page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Compose tips');
  t('Event');
  t('Event ical importer');
  t('Group');
  t('Import');
  t('Page');


  return $menu_links;
}
