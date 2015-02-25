<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "at_radar" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "at_radar".
 * 2. Uncomment the required function to use.
 */


/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
function at_radar_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function at_radar_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function at_radar_preprocess_page(&$vars) {
}
function at_radar_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function at_radar_preprocess_node(&$vars) {
}
function at_radar_process_node(&$vars) {
}
// */

/**
 * Override variables in entity templates.
 */
function at_radar_preprocess_entity(&$vars) {
  if ($vars['entity_type'] == 'location') {
    at_radar_preprocess_entity_location($vars);
  }
}

/**
 * Override variables in location entity templates.
 *
 * @see at_radar_preprocess_entity().
 */
function at_radar_preprocess_entity_location(&$vars) {
  unset($vars['content']['title']);
}

/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function at_radar_preprocess_comment(&$vars) {
}
function at_radar_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function at_radar_preprocess_block(&$vars) {
}
function at_radar_process_block(&$vars) {
}
// */

/**
 * Overrides theme_system_powered_by().
 */
function at_radar_system_powered_by() {
  return '<span>'
    . t('Run by the <a href="@user">community</a>, <a href="@built">built</a> with <a href="@poweredby">drupal</a>, hosted by <a href="@squat">squat.net</a>',
      array(
        '@user' => url('user'),
        '@built' => 'https://github.com/events-radar',
        '@poweredby' => 'https://www.drupal.org/',
        '@squat' => 'https://squat.net/',
      ))
    . '</span>';
}
