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
  $realm_variables['language']['ca'] = array();
  $realm_variables['language']['cs'] = array();
  $realm_variables['language']['de'] = array();
  $realm_variables['language']['el'] = array();
  $realm_variables['language']['en'] = array(
  'site_name' => 'radar.squat.net',
  'site_slogan' => 'Alternative and radical events agenda',
);
  $realm_variables['language']['es'] = array();
  $realm_variables['language']['eu'] = array();
  $realm_variables['language']['fr'] = array();
  $realm_variables['language']['it'] = array();
  $realm_variables['language']['nl'] = array();
  $realm_variables['language']['pl'] = array();
  $realm_variables['language']['pt-br'] = array();
  $realm_variables['language']['ru'] = array();
  $realm_variables['language']['tr'] = array();

return $realm_variables;
}
