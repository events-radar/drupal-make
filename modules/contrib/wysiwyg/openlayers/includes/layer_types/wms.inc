<?php
// $Id: wms.inc,v 1.1.2.8 2010/04/29 21:03:48 tmcw Exp $

/**
 * @file
 * WMS Layer Type
 */

/**
 * OpenLayers WMS Layer Type class
 */
class openlayers_layer_type_wms extends openlayers_layer_type {
  function __construct($layer = array(), $map = array()) {
    parent::__construct($layer, $map);
    if (isset($this->data)) {
      $this->data += $this->options_init();
    }
    else {
      $this->data = $this->options_init();
    }
  }

  /**
   * Provide initial values for options.
   */
  function options_init() {
    return array(
      'serverResolutions' => openlayers_get_resolutions('900913'),
      'maxExtent' => openlayers_get_extent('900913'),
      'projection' => array('900913'),
      'layer_handler' => 'wms',
      'baselayer' => FALSE
    );
  }

  /**
   * Options form which generates layers
   */
  function options_form() {
    return array(
      'base_url' => array(
        '#type' => 'textfield',
        '#title' => t('Base URL'),
        '#default_value' => isset($this->data['base_url']) ?
          $this->data['base_url'] : ''
      ),
      
      // TODO: swap terms
      'params' => array(
        'isBaseLayer' => array(
          '#type' => 'checkbox',
          '#default_value' => isset($this->data['params']['isBaseLayer']) ? 
            $this->data['params']['isBaseLayer'] : TRUE,
          '#title' => t('BaseLayer'),
          '#description' => t('Uncheck to make this map an overlay')
        ),
      ),
      'options' => array(
      'srs' => array(
        '#type' => 'select',
        '#title' => t('Projection'),
        '#options' => array(
          'EPSG:900913' => '900913',
          'EPSG:4326' => '4326'),
        '#default_value' => isset($this->data['options']['srs']) ?
          $this->data['options']['srs'] : '900913'
      ),
        'TRANSPARENT' => array(
          '#type' => 'checkbox',
          '#default_value' => isset($this->data['options']['TRANSPARENT']) ?
            $this->data['options']['TRANSPARENT'] : FALSE,
          '#title' => t('Transparent'),
          '#description' => t('When a PNG, make the background color transparent')
        ),
        'format' => array(
          '#type' => 'select',
          '#title' => t('File Format'),
          '#options' => array(
            'image/png' => 'image/png',
            'image/jpeg' => 'image/jpeg'),
          '#default_value' => isset($this->data['options']['format']) ?
            $this->data['options']['format'] : 'image/png'
        ),
        'layers' => array(
          '#type' => 'textfield',
          '#title' => t('Layers'),
          '#default_value' => isset($this->data['options']['layers']) ?
            $this->data['options']['layers'] : ''
        ),
        'styles' => array(
          '#type' => 'textfield',
          '#title' => t('Styles'),
          '#default_value' => isset($this->data['options']['styles']) ?
            $this->data['options']['styles'] : ''
        ),
      ),
      'layer_type' => array(
        '#type' => 'hidden',
        '#value' => 'openlayers_layer_type_wms'
      )
    );
  }

  /**
   * Render.
   */
  function render(&$map) {
    drupal_add_js(drupal_get_path('module', 'openlayers') .'/includes/layer_types/wms.js');
    return $this->options;
  }
}
