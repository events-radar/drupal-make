<?php
/**
 * @file
 * radar_languages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_languages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
