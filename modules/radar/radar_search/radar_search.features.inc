<?php
/**
 * @file
 * radar_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radar_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function radar_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function radar_search_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_offline:field_address:administrative_area" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:country" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:locality" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:organisation_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:postal_code" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:premise" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:thoroughfare" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_map:geom" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_map:latlon" : {
          "type" : "list\\u003Cstring\\u003E",
          "real_type" : "list\\u003Clocation\\u003E"
        },
        "field_offline:title" : { "type" : "list\\u003Ctext\\u003E" },
        "nid" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" },
        "uuid" : { "type" : "text" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['events'] = entity_import('search_api_index', '{
    "name" : "Events",
    "machine_name" : "events",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_date_time:duration" : { "type" : "list\\u003Cduration\\u003E" },
        "field_date_time:value" : { "type" : "list\\u003Cdate\\u003E" },
        "field_date_time:value2" : { "type" : "list\\u003Cdate\\u003E" },
        "field_offline" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "location" },
        "field_offline:field_address:administrative_area" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:country" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:locality" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:name_line" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:postal_code" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:premise" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:thoroughfare" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_map:geom" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_map:latlon" : {
          "type" : "list\\u003Cstring\\u003E",
          "real_type" : "list\\u003Clocation\\u003E"
        },
        "field_offline:id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_offline:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_price" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_aggregation_1" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "uuid" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 1, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "event" : "event" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "first_start_date",
                "type" : "min",
                "fields" : [ "field_date_time:value" ],
                "description" : "A Minimum aggregation of the following fields: Date \\u0026amp; Time \\u00bb Start date."
              }
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['groups'] = entity_import('search_api_index', '{
    "name" : "Groups index",
    "machine_name" : "groups",
    "description" : null,
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_offline" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "location" },
        "field_offline:field_address:administrative_area" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:country" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:locality" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:name_line" : { "type" : "list\\u003Ctext\\u003E" },
        "field_offline:field_address:postal_code" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:premise" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_address:thoroughfare" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_map:geom" : { "type" : "list\\u003Cstring\\u003E" },
        "field_offline:field_map:latlon" : {
          "type" : "list\\u003Cstring\\u003E",
          "real_type" : "list\\u003Clocation\\u003E"
        },
        "field_offline:id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_offline:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "string" },
        "uuid" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "group" : "group" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function radar_search_default_search_api_server() {
  $items = array();
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "solr",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/radar_staging",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function radar_search_default_search_api_sort() {
  $items = array();
  $items['events__search_api_aggregation_1'] = entity_import('search_api_sort', '{
    "index_id" : "events",
    "field" : "search_api_aggregation_1",
    "name" : "first_start_date",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "events__search_api_aggregation_1",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "asc",
    "options" : { "field_name" : "first_start_date" },
    "rdf_mapping" : []
  }');
  return $items;
}
