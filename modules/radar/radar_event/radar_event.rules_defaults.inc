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
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "NOT node_is_published" : { "node" : [ "node" ] } },
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "event" : "event" } } } }
      ],
      "DO" : [
        { "og_get_managers" : {
            "USING" : { "group_content" : [ "node" ] },
            "PROVIDE" : { "group_managers" : { "group_managers" : "List of group managers" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-managers" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-item:mail" ],
                  "subject" : "Pending event for Radar group",
                  "message" : "A new event \\u0022[node:title]\\u0022 has been proposed for \\u0022[site:og-context--node]\\u0022 on Radar, and it awaits approval.\\r\\n\\r\\nYou can approve it on [site:url]\\/[site:og-context--node]\\/pending .\\r\\n\\r\\n",
                  "from" : [ "" ],
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "component_rules_get_notification_email" : [] }
      ]
    }
  }');
  $items['rules_get_notification_email'] = entity_import('rules_config', '{ "rules_get_notification_email" : {
      "LABEL" : "Get notification email",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "site:og-context--node" ],
            "field" : "field_notifications"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "site:og-context--node:field-notifications" ],
            "subject" : "New Radar event awaits approval",
            "message" : "An event has been proposed for [site:og-context--node] on [site:name] and awaits approval.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
