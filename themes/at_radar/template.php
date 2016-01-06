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
function at_radar_preprocess_page(&$vars) {
  $vars['site_logo'] = '<a href="/">｟(･)｠</a>';
}
function at_radar_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
function at_radar_preprocess_node(&$vars) {
  // Google schema.org parser isn't recognising @about
  // This is almost certainly breaking foaf and sioc
  // @todo Work out what actually is supposed to happen here.
  unset($vars['attributes_array']['about']);
}

function at_radar_process_node(&$vars) {
  if (in_array('node__panel__event', $vars['theme_hook_suggestions'])) {
    $vars['content']['field_topic']['#title'] = t('Topics');
    if (!empty($vars['content']['field_price_category'])) {
      $vars['content']['field_price_category']['#title'] = t('Price');
      if (!empty($vars['content']['field_price'])) {
        $vars['content']['field_price']['#label_display'] = 'hidden';
        $vars['content']['field_price'][0]['#markup'] = ' - ' . $vars['content']['field_price'][0]['#markup'];
        $price = render($vars['content']['field_price']);
        $vars['content']['field_price_category']['#prefix'] = '<div>';
        $vars['content']['field_price_category']['#suffix'] = $price . '</div>';
      }
    }
    else {
      $vars['content']['field_price']['#title'] = t('Price');
    }
  }
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

function at_radar_preprocess_panels_pane(&$vars) {
  if ($vars['pane']->type == 'node_content' && !empty($vars['title'])) {
    $vars['title_heading'] = 'h1';
  }
  if ($vars['pane']->type == 'views_panes' && $vars['pane']->subtype == 'radar_event-panel_pane_1') {
    $vars['attributes_array']['property'] = array('schema:location');
  }
}

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
        '@built' => 'https://git.codecoop.org/groups/radar',
        '@poweredby' => 'https://www.drupal.org/',
        '@squat' => 'https://squat.net/',
      ))
    . '</span>';
}

function at_radar_preprocess_two_66_33(&$vars) {
  $context = current($vars['display']->context);
  if (is_object($context) && get_class($context) == 'ctools_context' && $context->is_type('node')) {
    $node = $context->data;
    $uri = entity_uri('node', $node);

    // Load RDF mapping to get the RDF type.
    $mapping = rdf_mapping_load('node', $node->type);
    if (!empty($mapping['rdftype'])) {
      // Adds RDFa markup to the panel container like in rdf_preprocess_node().
      // The about attribute specifies the URI of the resource described within
      // the HTML element (panel), while the @typeof attribute indicates its
      // RDF type (e.g., foaf:Document, sioc:Person, and so on).
      $vars['attributes_array']['about'] = url($uri['path'], $uri['options']);
      $vars['attributes_array']['typeof'] = $mapping['rdftype'];
    }
  }

  $vars['panel_prefix'] = '';
  $vars['panel_suffix'] = '';
}

function at_radar_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('<div class="panel-separator"></div>', $vars['panes']);
  return $output;
}
