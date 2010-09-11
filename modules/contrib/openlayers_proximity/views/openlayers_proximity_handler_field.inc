<?php
// $Id: openlayers_proximity_handler_field.inc,v 1.1.2.1 2010/07/27 06:23:04 antoniodemarco Exp $

class openlayers_proximity_handler_field extends views_handler_field_numeric {

  function option_definition() {
    $options = parent::option_definition();
    $options['location_provider'] = array('default' => '');
    $options['set_precision'] = array('default' => TRUE);
    $options['precision'] = array('default' => 2);
    $options['hide_empty'] = array('default' => TRUE); 
    $this->definition['float'] = TRUE;
    return $options;
  }
  
  /**
   * Basic options for all sort criteria
   */
  function options_form(&$form, &$form_state) {
    
    if ($handlers = $this->view->display_handler->get_handlers('filter')) {
      $options = array();
      foreach ($handlers as $name => $handler) {
        if ($handler->definition['handler'] == 'openlayers_proximity_handler_filter_circle') {
          $options[$name] = $handler->definition['group'] .': '. $handler->definition['title'] .' ('. $handler->admin_summary() .')';
        }
      }
      $this->options['suffix'] = ' '. $handler->value['unit'];
      $form['location_provider'] = array(
        '#title' => t('Location provider'),
        '#type' => 'select',
        '#options' => $options,
      );
    }
    parent::options_form($form, $form_state);
  }
  
  function query() {
    $handler = $this->view->display_handler->get_handler('filter', $this->options['location_provider']);
    if ($handler && $handler->value['location'] && isset($this->query->table_queue[$handler->table_formula_alias()])) {
      $this->field_alias = $this->query->add_field($handler->table_formula_alias(), $this->real_field);
    }
  }

}
