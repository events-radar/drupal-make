<?php
/**
 * @file
 * radar_topics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_topics_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
