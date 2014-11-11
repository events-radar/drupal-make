<?php

/**
 * @file
 * Extends Pretty Paths to support rest server urls.
 */

/**
 * Small override of FacetapiUrlProcessorPrettyPaths.
 */
class FacetapiUrlProcessorPrettyPathsRadar extends FacetapiUrlProcessorPrettyPaths {
  /**
   * Allows pretty path to be in a query string.
   *
   * Overrides FacetapiUrlProcessorPrettyPaths::fetchParams().
   */
  public function fetchParams() {
    // @todo do this properly and directly populate the values!
    // This is good to test, but composing and then deconstructing seems a waste.
    $original_q = $_GET['q'];
    $facets = array();
    if (!empty($_GET['facets'])) {
      foreach ($_GET['facets'] as $key => $value_array) {
        foreach ($value_array as $value) {
          $facets[] = $key . '/' . $value;
        }
      }
      if (count($facets)) {
        $_GET['q'] .= '/' . implode('/', $facets);
      }
    }
    $params = parent::fetchParams();
    $_GET['q'] = $original_q;
    return $params;
  }
}
