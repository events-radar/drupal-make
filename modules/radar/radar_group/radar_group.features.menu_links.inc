<?php
/**
 * @file
 * radar_group.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function radar_group_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_pending-groups:pending-groups
  $menu_links['management_pending-groups:pending-groups'] = array(
    'menu_name' => 'management',
    'link_path' => 'pending-groups',
    'router_path' => 'pending-groups',
    'link_title' => 'Pending groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Publish pending groups',
      ),
      'identifier' => 'management_pending-groups:pending-groups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Pending groups');


  return $menu_links;
}
