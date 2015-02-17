<?php
/**
 * @file
 * radar_languages.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function radar_languages_default_rules_configuration() {
  $items = array();
  $items['rules_email_to_translators'] = entity_import('rules_config', '{ "rules_email_to_translators" : {
      "LABEL" : "Email to Translators",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACTION SET" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "8" : "8" } },
            "subject" : "New words to translate on new Radar",
            "message" : "Hi,\\r\\nyou get this email because you are set up as a translator on the new radar site.\\r\\n\\r\\nIn the last days, we have made the menu and the blocks on the front pages translatable, and it would be great if you could translate them.\\r\\n\\r\\nOn https:\\/\\/new-radar.squat.net\\/en\\/admin\\/config\\/regional\\/translate\\/translate-set you can set your language, and then choose a text group.\\r\\nPriorities are: Blocks, Taxonomy and then Menu.\\r\\n\\r\\nIn case you haven\\u0027t seen the new form: you can just use the tab key to move from one field to the next, and then just hit save when you reach the bottom of the page.\\r\\n\\r\\nThanks a lot!\\r\\nClara"
          }
        }
      ]
    }
  }');
  return $items;
}
