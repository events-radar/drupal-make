<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _radar_groups_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
