<?php

/**
 * @file
 * Generates a first name + last name format.
 */

$plugin = array(
  'title' => t('Building name (single line)'),
  'format callback' => 'radar_location_format_building_name_generate',
  'type' => 'name',
  'weight' => -10,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function radar_location_format_building_name_generate(&$format, $address) {
  $format['name_block'] = array(
    '#type' => 'addressfield_container',
    '#attributes' => array('class' => array('addressfield-container-inline', 'name-block')),
    '#weight' => -50,
  );
  $format['name_block']['name_line'] = array(
    '#title' => t('Building name'),
    '#tag' => 'div',
    '#size' => 30,
    '#attributes' => array(
      'class' => array('name-block'),
      'x-autocompletetype' => 'name',
      'autocomplete' => 'name',
    ),
  );
}
