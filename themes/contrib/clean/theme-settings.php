<?php
// $Id: theme-settings.php,v 1.1.2.4.2.3 2010/02/07 19:08:59 psynaptic Exp $

/**
 * Implementation of THEMEHOOK_settings() function.
 *
 * @param $saved_settings
 *   An array of saved settings for this theme.
 * @return
 *   A form array.
 */
function phptemplate_settings($saved_settings) {

  $form['clean_rebuild_registry'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rebuild theme registry on every page.'),
    '#default_value' => isset($saved_settings['clean_rebuild_registry']) ? $saved_settings['clean_rebuild_registry'] : 0,
    '#description' => t('During theme development, it can be very useful to continuously <a href="!link">rebuild the theme registry</a>.<br/><strong>WARNING:</strong> this is a huge performance penalty and must be turned off on production websites.', array('!link' => 'http://drupal.org/node/173880#theme-registry')),
  );

  $form['clean_enable_960_grid'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable 960 grid'),
    '#default_value' => isset($saved_settings['clean_enable_960_grid']) ? $saved_settings['clean_enable_960_grid'] : 0,
    '#description' => t('Enable this option to show a grid. As well as the main theme and 960gs sub-theme, the grid also works with the liquid sub-theme'),
  );

  $form['clean_960gs_columns'] = array(
    '#type' => 'radios',
    '#title' => t('960 columns'),
    '#options' => array(12 => "12", 16 => "16"),
    '#default_value' => isset($saved_settings['clean_960gs_columns']) ? $saved_settings['clean_960gs_columns'] : 12,
    '#description' => t('Select the number of columns to use for the grid. When using the 960gs sub-theme this option changes the classes used for the layout. On the other themes it just changes the number of columns displayed in the grid which can be enabled above.'),
  );

  $form['clean_960gs_default_state'] = array(
    '#type' => 'radios',
    '#title' => t('960 default state'),
    '#options' => array('grid-enabled' => 'Enabled', 'grid-disabled' => 'Disabled'),
    '#default_value' => isset($saved_settings['clean_960gs_default_state']) ? $saved_settings['clean_960gs_default_state'] : 'grid-disabled',
    '#description' => t('Choose whether to enable or disable the grid on page load.'),
  );

  return $form;
}
