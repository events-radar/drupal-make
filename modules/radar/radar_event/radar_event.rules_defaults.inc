<?php
/**
 * @file
 * radar_event.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function radar_event_default_rules_configuration() {
  $items = array();
  $items['og_notification_pending_event'] = entity_import('rules_config', '{ "og_notification_pending_event" : {
      "LABEL" : "Notification on pending  event",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "og_group_request" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "date_repeat_entity_master_uuid" } },
        { "data_is" : {
            "data" : [ "node:date-repeat-entity-master-uuid" ],
            "value" : [ "node:uuid" ]
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:og-group-request" ] },
            "ITEM" : { "list_item_group_requested" : "Current group requested" },
            "DO" : [
              { "mail" : {
                  "to" : "[list-item-group-requested:field_notifications]",
                  "subject" : "Radar event awaiting approval",
                  "message" : "The event \\u0022[node:title]\\u0022 has been proposed for \\u0022[list-item-group-requested:title-field]\\u0022 and is awaiting approval.\\r\\n\\r\\nA manager of this group can approve it at [list-item-group-requested:url]\\/pending",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
