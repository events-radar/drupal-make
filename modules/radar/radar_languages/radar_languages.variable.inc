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
  $realm_variables['language']['el'] = array();
  $realm_variables['language']['en'] = array(
  'site_name' => '⸨﹙∘﹚⸩ r a d a r . s q u a t . n e t ᴺᴱᵂ',
  'site_slogan' => '',
);
  $realm_variables['language']['es'] = array();
  $realm_variables['language']['eu'] = array();
  $realm_variables['language']['fr'] = array();
  $realm_variables['language']['it'] = array();
  $realm_variables['language']['nl'] = array();

return $realm_variables;
}
