<?php
/**
 * @file
 * radar_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
