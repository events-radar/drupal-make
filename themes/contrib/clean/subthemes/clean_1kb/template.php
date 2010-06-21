<?php
// $Id: template.php,v 1.1.2.5 2010/05/13 13:24:00 adrinux Exp $

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function clean_1kb_preprocess_page(&$variables) {
  $full_grid_classes = array();
  $main_classes = array();
  $left_classes = array();
  $content_classes = array();
  $right_classes = array();

  // Allow modules and themes to add to the classes. @todo: accept only arrays?
  if ($variables['full_grid_classes']) {
    $full_grid_classes = array($variables['full_grid_classes']);
  }
  if ($variables['main_classes']) {
    $main_classes = array($variables['main_classes']);
  }
  if ($variables['left_classes']) {
    $left_classes = array($variables['left_classes']);
  }
  if ($variables['content_classes']) {
    $content_classes = array($variables['content_classes']);
  }
  if ($variables['right_classes']) {
    $right_classes = array($variables['right_classes']);
  }

  // Dynamic layout classes.
  $columns = theme_get_setting('clean_960gs_columns');

  $full_grid_classes[] = 'column';
  $main_classes[] = 'column';
  $left_classes[] = 'column';
  $content_classes[] = 'column';
  $right_classes[] = 'column';

  // 12 columns.
  if ($columns == 12) {

    drupal_add_css(path_to_theme() .'/css/12cols.css');

    $full_grid_classes[] = 'grid_12';
    $main_classes[] = 'grid_12';

    switch ($variables['layout']) {
      case 'both':
        $left_classes[] = 'grid_3';
        $content_classes[] = 'grid_6';
        $right_classes[] = 'grid_3';
        break;
      case 'none':
        $content_classes[] = 'grid_12';
        break;
      case 'left':
        $left_classes[] = 'grid_3';
        $content_classes[] = 'grid_9';
        break;
      case 'right':
        $content_classes[] = 'grid_9';
        $right_classes[] = 'grid_3';
        break;
    }
  }

  // 16 columns.
  else {

    drupal_add_css(path_to_theme() .'/css/16cols.css');

    $full_grid_classes[] = 'grid_16';
    $main_classes[] = 'grid_16';
    
    switch ($variables['layout']) {
      case 'both':
        $left_classes[] = 'grid_4';
        $content_classes[] = 'grid_8';
        $right_classes[] = 'grid_4';
        break;
      case 'none':
        $content_classes[] = 'grid_16';
        break;
      case 'left':
        $left_classes[] = 'grid_4';
        $content_classes[] = 'grid_12';
        break;
      case 'right':
        $content_classes[] = 'grid_12';
        $right_classes[] = 'grid_4';
        break;
    }
  }

  // Generic classes, unlikey to need changing.
  $main_classes[] = 'clear-block';
  $left_classes[] = 'sidebar';
  $content_classes[] = 'clear-block';
  $right_classes[] = 'sidebar';

  $variables['full_grid_attr']['class'] .= implode(' ', $full_grid_classes);
  $variables['main_attr']['id'] = 'main';
  $variables['main_attr']['class'] .= implode(' ', $main_classes);
  $variables['left_attr']['id'] = 'left';
  $variables['left_attr']['class'] .= implode(' ', $left_classes);
  $variables['content_attr']['id'] = 'content';
  $variables['content_attr']['class'] .= implode(' ', $content_classes);
  $variables['right_attr']['id'] = 'right';
  $variables['right_attr']['class'] .= implode(' ', $right_classes);

  // Rebuild styles variable.
  $variables['styles'] = drupal_get_css(clean_css_stripped());
  
  // Add conditional stylesheets.
  if (!module_exists('conditional_styles')) {
    $variables['styles'] .= $variables['conditional_styles'] = variable_get('conditional_styles_' . $GLOBALS['theme'], '');
  }
}
