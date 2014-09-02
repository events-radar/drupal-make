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
  // Translatables
  // Included for use with string extractors like potx.
  t('Event');
  t('Event ical importer');


  return $menu_links;
}
