<?php
/**
 * @file
 * radar_group.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function radar_group_default_rules_configuration() {
  $items = array();
  $items['rules_administrator_notification_groups_all'] = entity_import('rules_config', '{ "rules_administrator_notification_groups_all" : {
      "LABEL" : "Administrator notification: all pending groups",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--group" : { "bundle" : "group" } },
      "IF" : [ { "NOT node_is_published" : { "node" : [ "node" ] } } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "New group on radar waiting for approval",
            "message" : "A new group [node:title]  has been submitted and awaits approval by an administrator.\\r\\n\\r\\nCheck https:\\/\\/new-radar.squat.net\\/admin\\/content\\/pending-groups"
          }
        }
      ]
    }
  }');
  return $items;
}
