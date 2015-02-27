<?php
/**
 * @file
 * radar_basics.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function radar_basics_default_rules_configuration() {
  $items = array();
  $items['rules_email_all_users'] = entity_import('rules_config', '{ "rules_email_all_users" : {
      "LABEL" : "Send email to all users",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACTION SET" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "2" : "2", "5" : "5" } },
            "subject" : "New Radar site is live!",
            "message" : "Hi,\\r\\nyou get this email because you\\u0027ve given your email address with your account on Radar...\\r\\n\\r\\nand because the new Radar site is now live at https:\\/\\/radar.squat.net !\\r\\n\\r\\nWe have tweaked the system a bit more in the last weeks: event titles can now be translated for example.\\r\\nWe\\u0027ve also written a Wordpress plugin to import events from Radar into Wordpress sites.\\r\\n\\r\\nAnd we have written a more detailed how-to section: how to change a single instance of a repeating event, how to add users to your group, how to translate, etc.  \\r\\nThat\\u0027s all under https:\\/\\/radar.squat.net\\/en\\/how-to\\r\\n\\r\\nIf there are any problems or bugs, please contact us: https:\\/\\/radar.squat.net\\/en\\/contact\\r\\n\\r\\nAnd of course: keep on adding your events!\\r\\n\\r\\ngreetings,\\r\\nclara"
          }
        }
      ]
    }
  }');
  return $items;
}
