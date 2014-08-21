<?php
/**
 * @file
 * radar_languages.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function radar_languages_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['de'] = array();
  $realm_variables['language']['en'] = array(
  'site_name' => 'radar.squat.net',
  'site_slogan' => '',
);
  $realm_variables['language']['nl'] = array();

return $realm_variables;
}
