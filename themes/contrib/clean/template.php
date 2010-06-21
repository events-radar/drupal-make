<?php
// $Id: template.php,v 1.1.2.7.2.17.2.40 2010/06/15 10:39:28 matason Exp $

// Auto-rebuild the theme registry during theme development.
if (theme_get_setting('clean_rebuild_registry')) {
  drupal_rebuild_theme_registry();
}

/**
 * Implementation of hook_theme().
 */
function clean_theme(&$existing, $type, $theme, $path) {
  
  // Compute the conditional stylesheets.
  if (!module_exists('conditional_styles')) {
    include_once $base_path . drupal_get_path('theme', 'clean') . '/template.conditional-styles.inc';
    // _conditional_styles_theme() only needs to be run once.
    if ($theme == 'clean') {
      _conditional_styles_theme($existing, $type, $theme, $path);
    }
  }
  return array(
    'fieldset' => array(
      'arguments' => array('element' => array()),
      'template' => 'fieldset',
    ),
  );
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function clean_preprocess_node(&$variables) {
  global $theme_key;
  $node = $variables['node'];

  $variables['pre'] = '';
  $variables['post'] = '';

  if ($variables['title']) {
    $variables['title'] = l($variables['title'], "node/{$variables['node']->nid}", array('html' => TRUE));
  }

  // Create node classes.
  clean_node_classes($variables);

  // Add node template file suggestions for node-type-teaser and node-type-prevew
  if (!$variables['page']) {
    $variables['template_files'][] = 'node-'. $node->type .'--teaser';
    $variables['template_files'][] = 'node-'. $node->type .'-'. $node->nid .'--teaser';
  }

  if ($node->op == 'Preview' && !$variables['teaser']) {
    $variables['template_files'][] = 'node-'. $node->type .'--preview';
    $variables['template_files'][] = 'node-'. $node->type .'-'. $node->nid .'--preview';    
  }

  $function = $theme_key . '_preprocess_node_' . $node->type;
  if (function_exists($function)) {
    call_user_func_array($function, array(&$variables));
  }
}

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function clean_preprocess_page(&$variables) {
  $base_path = base_path();
  $variables['base_theme'] = $path_to_clean = drupal_get_path('theme', 'clean') . '/';
  $path_to_theme = path_to_theme() . '/';
  global $user, $theme_key;

  clean_body_classes($variables);
  clean_html_attributes($variables);

  $variables['path'] = $base_path . $path_to_theme;

  $site_name = filter_xss_admin(variable_get('site_name', 'Drupal'));
  $variables['site_name_themed'] = theme_get_setting('toggle_name') ? l($site_name, '<front>', array('attributes' => array('id' => 'site-name'))) : '';

  if ($variables['site_slogan']) {
    $variables['site_slogan_themed'] = '<span id="site-slogan">'. $variables['site_slogan'] .'</span>';
  }

  if ($variables['mission']) {
    $variables['mission_themed'] = '<span id="mission">'. $variables['mission'] .'</span>';
  }

  if ($variables['logo']) {
    $logo_path = preg_replace('@^'. $base_path .'@', '', $variables['logo']);
    file_exists($logo_path) ?
      $image = theme('image', $logo_path, $site_name) :
      $image = theme('image', $path_to_clean .'/logo.png', $site_name);
    $variables['logo_themed'] = l($image, '<front>', array('attributes' => array('id' => 'logo', 'rel' => 'home', 'title' => t('Return to the !site_name home page', array('!site_name' => $site_name))), 'html' => TRUE));
  }

  $variables['skip_link'] = '<ul class="acc-hide">
    <li><a href="#content" class="skip-link">Skip to content</a></li>
    <li><a href="#footer" class="skip-link">Skip to footer</a></li>
  </ul>';

  $variables['primary_links'] = (!empty($variables['primary_links'])) ?
    theme('links', $variables['primary_links'], array('class' => 'links primary-links')) :
    $add_link;

  $variables['secondary_links'] = (!empty($variables['secondary_links'])) ?
    theme('links', $variables['secondary_links'], array('class' => 'links secondary-links')) : '';

  $settings = array(
    'theme_path' => $base_path . $path_to_clean,
    'theme_key' => str_replace('_', '-', $theme_key),
    'columns' => theme_get_setting('clean_960gs_columns'),
    'default_state' => theme_get_setting('clean_960gs_default_state'),
  );

  if (theme_get_setting('clean_enable_960_grid')) {
    drupal_add_js(array('clean' => $settings), 'setting');
    drupal_add_js($path_to_clean . 'js/grid.js', 'theme', 'header', FALSE, TRUE, FALSE);
    drupal_add_css($path_to_clean . 'css/grid.css', 'theme');
    $variables['scripts'] = drupal_get_js();
  }

  $variables['styles'] = drupal_get_css(clean_css_stripped());
  // Add conditional stylesheets.
  if (!module_exists('conditional_styles')) {
    $variables['styles'] .= $variables['conditional_styles'] = variable_get('conditional_styles_' . $GLOBALS['theme'], '');
  }
}

function clean_html_attributes(&$variables) {
  $attributes = array();
  $language = $variables['language'];
  
  $attributes['xmlns'] = 'http://www.w3.org/1999/xhtml';
  $attributes['xml:lang'] = $language->language;
  $attributes['lang'] = $language->language;
  $attributes['dir'] = $language->dir;
  
  $variables['html_attr'] = $attributes;
}

/**
 * Create node classes for node templates files.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @return $classes
 *   A string of node classes for inserting into the node template.
 */
function clean_node_classes(&$variables) {
  $node = $variables['node'];
  $classes = array();

  // Merge in existing classes.
  if ($variables['classes']) {
    $classes = array($variables['classes']);
  }

  $classes[] = 'node';
  $classes[] = 'node-'. $node->type;
  if ($variables['page']) {
    $classes[] = 'node-'. $node->type . '-page';
  }
  elseif ($variables['teaser']) {
    $classes[] = 'node-teaser';
    $classes[] = 'node-'. $node->type . '-teaser';
  }
  if ($variables['sticky']) {
    $classes[] = 'sticky';
  }
  if (!$variables['status']) {
    $classes[] = 'node-unpublished';
  }
  $classes[] = 'clear-block';

  $variables['attr']['id'] = 'node-'. $node->nid;
  $variables['attr']['class'] = implode(' ', $classes);
}

/**
 * Create body classes for page templates files in addition to those provided by core.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @return
 *   Adds data to $variables directly.
 */
function clean_body_classes(&$variables) {
  $classes = array();

  // Merge in existing classes.
  if ($variables['body_classes']) {
    $classes = array($variables['body_classes']);
  }

  // Create classes for the user-visible path sections.
  global $base_path;
  list(,$path) = explode($base_path, request_uri(), 2);
  list($path,) = explode('?', $path, 2);
  $path = rtrim($path, '/');

  // Create section classes down to 3 levels. Path is empty if we're at <front>.
  if ($path) {
    $path_alias_sections = array_slice(explode('/', $path), 0, 3);
    $section_path = 'section';
    foreach ($path_alias_sections as $arg_piece) {
      $section_path .= '-'. $arg_piece;
      $classes[] = $section_path;
    }
  }

  if ($variables['is_admin']) {
    $classes[] = 'admin-section';
  }

  $variables['attr']['class'] .= implode(' ', $classes);

  // System path gives us the id, replacing slashes with dashes.
  $system_path = drupal_get_normal_path($path);
  if ($section_path) {
    $variables['attr']['id'] = 'page-'. str_replace('/', '-', $system_path);
  }  
}

/**
 * Implementation of preprocess_block().
 */
function clean_preprocess_block(&$variables) {
  $variables['attr']['id'] = "block-{$variables['block']->module}-{$variables['block']->delta}";
  $variables['attr']['class'] = "block block-{$variables['block']->module}";

  $variables['pre'] = '';
  $variables['post'] = '';

  $variables['hook'] = 'block';
  $variables['title'] = $variables['block']->subject;
  $variables['content'] = $variables['block']->content;
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function clean_preprocess_comment(&$variables) {
  $comment = $variables['comment'];

  $variables['pre'] = '';
  $variables['post'] = '';

  $attr = array();
  $variables['attr']['id'] = "comment-{$variables['comment']->cid}";

  $variables['attr']['class'] = "comment {$variables['status']}";

  if ($comment->new) {  
    $variables['attr']['class'] .= ' comment-new';
  }
  if ($variables['zebra']) {
    $variables['attr']['class'] .= ' comment-'. $variables['zebra'];
  }
}

/**
 * Implementation of preprocess_box().
 */
function clean_preprocess_box(&$variables) {
  $attr = array();
  $variables['attr']['class'] = "box";

  $variables['pre'] = '';
  $variables['post'] = '';
}

/**
 * Implementation of preprocess_fieldset().
 */
function clean_preprocess_fieldset(&$variables) {
  $variables['hook'] = 'fieldset';
  $element = $variables['element'];

  $variables['pre'] = '';
  $variables['post'] = '';

  $attr = array();
  if (isset($element['#attributes'])) {
    $attr = $element['#attributes'];
    $class = $attr['class'];
  }

  $attr['class'] = 'fieldset';
  $attr['class'] .= ' '. $class;
  if (!empty($element['#collapsible']) || !empty($element['#collapsed'])) {
    $attr['class'] .= ' collapsible';
  }
  if (!empty($element['#collapsed'])) {
    $attr['class'] .= ' collapsed';
  }

  $variables['attr'] = $attr;

  if (!empty($element['#description'])) {
    $description = "<div class='description'>{$element['#description']}</div>";
  }
  if (!empty($element['#children'])) {
    $children = $element['#children'];
  }
  if (!empty($element['#value'])) {
    $value = $element['#value'];
  }
  $variables['content'] = $description . $children . $value;

  if (!empty($element['#title'])) {
    $variables['title'] = $element['#title'];
  }
  if (!empty($element['#collapsible']) || !empty($element['#collapsed'])) {
    $variables['title'] = l($variables['title'], $_GET['q'], array('fragment' => 'fieldset'));
  }
}

/**
 * Override theme_menu_local_tasks().
 *
 * Add clear-block class to ul elements.
 */
function clean_menu_local_tasks() {
  $primary = menu_primary_local_tasks();
  $secondary = menu_secondary_local_tasks();

  if (!$primary && !$secondary) {
    return '';
  }

  $output = '<div id="tabs">';
  if ($primary) {
    $output .= "<ul class='tabs primary links'>$primary</ul>";
  }
  if ($secondary) {
    $output .= "<ul class='tabs secondary links'>$secondary</ul>";
  }
  $output .= '</div>';

  return $output;
}

/**
 * Strips CSS files from a Drupal CSS array whose filenames start with
 * prefixes provided in the $match argument.
 */
function clean_css_stripped($match = array('modules/*'), $exceptions = NULL) {
  // Set default exceptions
  if (!is_array($exceptions)) {
    $exceptions = array(
      'modules/system/system.css',
      'modules/update/update.css',
      'modules/openid/openid.css',
      'modules/acquia/*',
    );
  }
  $css = drupal_add_css();
  $match = implode("\n", $match);
  $exceptions = implode("\n", $exceptions);
  foreach (array_keys($css['all']['module']) as $filename) {
    if (drupal_match_path($filename, $match) && !drupal_match_path($filename, $exceptions)) {
      unset($css['all']['module'][$filename]);
    }
  }

  // This servers to move the "all" CSS key to the front of the stack.
  // Mainly useful because modules register their CSS as 'all', while
  // Tao has a more media handling.
  ksort($css);
  return $css;
}

/**
 * Only show the breadcrumb trail if there are more items than just 'Home'.
 */
function clean_breadcrumb($breadcrumb) {
  if (count($breadcrumb) > 1) {
    return '<div class="breadcrumb">'. implode(' &raquo; ', $breadcrumb) .'</div>';
  }
}

/**
* Override theme_textfield().
*/
function clean_textfield($element) {
  if ($element['#size'] >= 15) {
    $element['#size'] = '';
    $element['#attributes']['class'] = isset($element['#attributes']['class']) ? "{$element['#attributes']['class']} fluid" : "fluid";
  }
  return theme_textfield($element);
}

function clean_file($element) {
  _form_set_class($element, array('form-file'));
  if ($element['#size'] >= 15) {
    $element['#size'] = '';
    $element['#attributes']['class'] = isset($element['#attributes']['class']) ? "{$element['#attributes']['class']} fluid" : "fluid";
  }
  return theme('form_element', $element, '<input type="file" name="'. $element['#name'] .'"'. ($element['#attributes'] ? ' '. drupal_attributes($element['#attributes']) : '') .' id="'. $element['#id'] .'" size="'. $element['#size'] ."\" />\n");
}

function clean_password($element) {
  if ($element['#size'] >= 15) {
    $element['#size'] = '';
    $element['#attributes']['class'] = isset($element['#attributes']['class']) ? "{$element['#attributes']['class']} fluid" : "fluid";
  }
  $maxlength = $element['#maxlength'] ? ' maxlength="'. $element['#maxlength'] .'" ' : '';

  _form_set_class($element, array('form-text'));
  $output = '<input type="password" name="'. $element['#name'] .'" id="'. $element['#id'] .'" '. $maxlength . $size . drupal_attributes($element['#attributes']) .' />';
  return theme('form_element', $element, $output);
}

/**
 * Return a themed set of links.
 *
 * @param $links
 *   A keyed array of links to be themed.
 * @param $attributes
 *   A keyed array of attributes
 * @return
 *   A string containing an unordered list of links.
 */
function clean_links($links, $attributes = array('class' => 'links')) {
  global $language;
  $output = '';

  if (count($links) > 0) {
    $output = '<ul'. drupal_attributes($attributes) .'>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = $key;

      // Add first, last and active classes to the list of links to help out themers.
      if ($i == 1) {
        $class .= ' first';
      }
      if ($i == $num_links) {
        $class .= ' last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
          && (empty($link['language']) || $link['language']->language == $language->language)) {
        $class .= ' active';
      }
      $output .= '<li'. drupal_attributes(array('class' => $class)) .'>';

      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      else if (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for adding title and class attributes
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span'. $span_attributes .'>'. $link['title'] .'</span>';
      }

      $i++;
      $output .= "</li>";
    }

    $output .= '</ul>';
  }

  return $output;
}

function clean_menu_local_task($link, $active = FALSE) {
  return '<li '. ($active ? 'class="active" ' : '') .'>'. $link ."</li>";
}
