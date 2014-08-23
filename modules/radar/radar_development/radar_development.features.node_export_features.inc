<?php
/**
 * @file
 * radar_development.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function radar_development_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0fa4480e-33e9-4ece-83f9-5b35e1902490\',
      \'nid\' => \'9\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408822910\',
      \'changed\' => \'1408822910\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
      \'revision_timestamp\' => \'1408822910\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...<br />\\nOpen electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
            \'format\' => NULL,
            \'safe_value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-21 16:00:00\',
            \'value2\' => \'2014-08-21 16:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;COUNT=6;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'9\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408822910\',
              \'changed\' => \'1408822910\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'29\',
        \'source\' => \'node/9\',
        \'alias\' => \'socially-inept-thursday-4\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'37\',
      \'uid\' => \'1\',
      \'title\' => \'TA3M\',
      \'log\' => \'cloned from uuid : 51049f45-fbd2-4fdd-8617-b11d88afece5\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'65e4b923-86b9-4389-9c61-14336f5158e9\',
      \'nid\' => \'28\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408825585\',
      \'changed\' => \'1408825585\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'16dcff76-028c-4096-a793-0fcfae15fc38\',
      \'revision_timestamp\' => \'1408825585\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'security & surveillance presentations\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>security &amp; surveillance presentations</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'51049f45-fbd2-4fdd-8617-b11d88afece5\',
            \'format\' => NULL,
            \'safe_value\' => \'51049f45-fbd2-4fdd-8617-b11d88afece5\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-01 19:00:00\',
            \'value2\' => \'2014-11-01 22:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYMONTHDAY=1;COUNT=3;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'26\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'28\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408825585\',
              \'changed\' => \'1408825585\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'48\',
        \'source\' => \'node/28\',
        \'alias\' => \'ta3m/2014-11-01-190000-2014-11-01-223000\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 15c056cb-0348-4a7b-b72f-8bc67153459b\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'dbeae3bd-ef9d-4b69-8bff-d1106b1ef16b\',
      \'nid\' => \'8\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408822910\',
      \'changed\' => \'1408822910\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4afb1306-3766-42cf-8afc-515c6cb47a45\',
      \'revision_timestamp\' => \'1408822910\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...<br />\\nOpen electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
            \'format\' => NULL,
            \'safe_value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-25 16:00:00\',
            \'value2\' => \'2014-09-25 16:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;COUNT=6;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'8\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408822910\',
              \'changed\' => \'1408822910\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'28\',
        \'source\' => \'node/8\',
        \'alias\' => \'socially-inept-thursday-3\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'38\',
      \'uid\' => \'1\',
      \'title\' => \'TA3M\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cb2fe96d-69ac-4a4c-8424-23ae0a7daadb\',
      \'nid\' => \'29\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408825585\',
      \'changed\' => \'1408825708\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'51049f45-fbd2-4fdd-8617-b11d88afece5\',
      \'revision_timestamp\' => \'1408825708\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'September topic: FinFisher\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>September topic: FinFisher</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'51049f45-fbd2-4fdd-8617-b11d88afece5\',
            \'format\' => NULL,
            \'safe_value\' => \'51049f45-fbd2-4fdd-8617-b11d88afece5\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-15 18:00:00\',
            \'value2\' => \'2014-09-15 21:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYMONTHDAY=1;COUNT=3;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'26\',
          ),
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'29\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408825585\',
              \'changed\' => \'1408825708\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'49\',
        \'source\' => \'node/29\',
        \'alias\' => \'ta3m/2014-09-15-180000-2014-09-15-213000\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 15c056cb-0348-4a7b-b72f-8bc67153459b\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'62b61341-f5f9-4b2d-82c0-9d852775820a\',
      \'nid\' => \'4\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408822910\',
      \'changed\' => \'1408822910\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'51a3fceb-d8c6-46c8-87af-bea645c67241\',
      \'revision_timestamp\' => \'1408822910\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...<br />\\nOpen electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
            \'format\' => NULL,
            \'safe_value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-28 16:00:00\',
            \'value2\' => \'2014-08-28 16:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;COUNT=6;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'4\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408822910\',
              \'changed\' => \'1408822910\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'24\',
        \'source\' => \'node/4\',
        \'alias\' => \'socially-inept-thursday\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 15c056cb-0348-4a7b-b72f-8bc67153459b\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9d3805fd-67d4-4f50-aa1d-f2b0e633389a\',
      \'nid\' => \'5\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408822910\',
      \'changed\' => \'1408822910\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'59d81c04-88eb-46d5-ad43-e1608f381e01\',
      \'revision_timestamp\' => \'1408822910\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...<br />\\nOpen electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
            \'format\' => NULL,
            \'safe_value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-04 16:00:00\',
            \'value2\' => \'2014-09-04 16:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;COUNT=6;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'5\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408822910\',
              \'changed\' => \'1408822910\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'25\',
        \'source\' => \'node/5\',
        \'alias\' => \'socially-inept-thursday-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'LAG\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ab19bb3f-51ab-4f85-9f28-a3a70dbde081\',
      \'nid\' => \'1\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408820937\',
      \'changed\' => \'1408821927\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a611493-28d8-44bb-a437-fb0f4a89be62\',
      \'revision_timestamp\' => \'1408821927\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'9\',
          ),
          array(
            \'tid\' => \'10\',
          ),
          array(
            \'tid\' => \'11\',
          ),
        ),
      ),
      \'field_og_subscribe_settings\' => array(
        \'und\' => array(
          array(
            \'value\' => \'approval\',
          ),
        ),
      ),
      \'field_og_access_default_value\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'og_roles_permissions\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "LAG is a hacklab project coming out of the SLUG (Squatting Linux User Group) mesh.\\r\\n\\r\\nOur main focus is the relationship between politics and technology, both at a practical and theorethical level.\\r\\nAt lag we are interested in ]hacking( and at the same time in questioning what hacking is. We started this place because we wanted a place to share similar interests with other people so feel free to pass by for: installing linux, discussing technical or theoretical ideas, fix your laptop, learn to weave, build a bike, find parts, learn how to encrypt data, make experiments, deconstruct apparatuses, drink coffee, read a book, write a paper, scan a book, look at stuff through a microscope, fix your clothes, share files, take things apart, present something, add things to this list and share knowledge in any other way you want.",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>LAG is a hacklab project coming out of the SLUG (Squatting Linux User Group) mesh.</p>\\n<p>Our main focus is the relationship between politics and technology, both at a practical and theorethical level.<br />\\nAt lag we are interested in ]hacking( and at the same time in questioning what hacking is. We started this place because we wanted a place to share similar interests with other people so feel free to pass by for: installing linux, discussing technical or theoretical ideas, fix your laptop, learn to weave, build a bike, find parts, learn how to encrypt data, make experiments, deconstruct apparatuses, drink coffee, read a book, write a paper, scan a book, look at stuff through a microscope, fix your clothes, share files, take things apart, present something, add things to this list and share knowledge in any other way you want.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'group_group\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'group_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_group_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'1362268158.jpg\',
            \'uri\' => \'public://1362268158_4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3519\',
            \'status\' => \'1\',
            \'timestamp\' => \'1408820937\',
            \'uuid\' => \'c69ca454-684e-4ad0-8836-7e2ae6ebdde0\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'200\',
            \'height\' => \'187\',
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_opening_times\' => array(
        \'en\' => array(
          array(
            \'value\' => "Thursday 17:00 - 23:00\\r\\nSaturday 14:00 - 23:00 ",
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Thursday 17:00 - 23:00<br />\\nSaturday 14:00 - 23:00</p>\\n",
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'1\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408820937\',
              \'changed\' => \'1408821927\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'16\',
        \'source\' => \'node/1\',
        \'alias\' => \'lag\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 15c056cb-0348-4a7b-b72f-8bc67153459b\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5aff8c5f-c37e-471f-900f-c30a6e095a6f\',
      \'nid\' => \'7\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408822910\',
      \'changed\' => \'1408822910\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'89c9cd08-1faa-4bbc-a501-e8139c3bb4d7\',
      \'revision_timestamp\' => \'1408822910\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...<br />\\nOpen electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
            \'format\' => NULL,
            \'safe_value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-18 16:00:00\',
            \'value2\' => \'2014-09-18 16:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;COUNT=6;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'7\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408822910\',
              \'changed\' => \'1408822910\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'27\',
        \'source\' => \'node/7\',
        \'alias\' => \'socially-inept-thursday-2\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 15c056cb-0348-4a7b-b72f-8bc67153459b\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6afdcfcb-7c7f-4058-abb5-23947c23e3b5\',
      \'nid\' => \'6\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408822910\',
      \'changed\' => \'1408822910\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'93f5c65d-55ae-4c1a-a9eb-440bd32f97cb\',
      \'revision_timestamp\' => \'1408822910\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...<br />\\nOpen electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
            \'format\' => NULL,
            \'safe_value\' => \'15c056cb-0348-4a7b-b72f-8bc67153459b\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-11 16:00:00\',
            \'value2\' => \'2014-09-11 16:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;COUNT=6;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'6\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408822910\',
              \'changed\' => \'1408822910\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'26\',
        \'source\' => \'node/6\',
        \'alias\' => \'socially-inept-thursday-1\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'36\',
      \'uid\' => \'1\',
      \'title\' => \'TA3M\',
      \'log\' => \'cloned from uuid : 51049f45-fbd2-4fdd-8617-b11d88afece5\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5ca9d711-8fc8-45da-b39f-d56b9343d035\',
      \'nid\' => \'27\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408825585\',
      \'changed\' => \'1408825840\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ca3780db-bc5a-4215-9820-507301996da0\',
      \'revision_timestamp\' => \'1408825840\',
      \'revision_uid\' => \'5\',
      \'field_category\' => array(),
      \'field_topics\' => array(),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'October topic: Hacking in the East\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>October topic: Hacking in the East</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'51049f45-fbd2-4fdd-8617-b11d88afece5\',
            \'format\' => NULL,
            \'safe_value\' => \'51049f45-fbd2-4fdd-8617-b11d88afece5\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-01 18:00:00\',
            \'value2\' => \'2014-10-01 21:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'7200\',
            \'offset2\' => \'7200\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYMONTHDAY=1;COUNT=3;WKST=MO\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'26\',
          ),
        ),
      ),
      \'og_group_request\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'3\',
          ),
        ),
      ),
      \'field_email\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'3\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'27\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408825585\',
              \'changed\' => \'1408825840\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'47\',
        \'source\' => \'node/27\',
        \'alias\' => \'ta3m/2014-10-01-180000-2014-10-01-213000\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'3\',
      \'title\' => \'Lagging\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'46a1c24a-707c-4c02-8acf-1c13bc2b55ce\',
      \'nid\' => \'10\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408823134\',
      \'changed\' => \'1408823134\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ca65510e-b3bc-427d-a958-bf66e7f26521\',
      \'revision_timestamp\' => \'1408823134\',
      \'revision_uid\' => \'3\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'12\',
          ),
        ),
      ),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'11\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Hakclab open for hacking. Play, hack, build, fix...\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'date_repeat_entity_clone_state\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'ca65510e-b3bc-427d-a958-bf66e7f26521\',
            \'format\' => NULL,
            \'safe_value\' => \'ca65510e-b3bc-427d-a958-bf66e7f26521\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-23 14:00:00\',
            \'value2\' => \'2014-08-23 14:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'7200\',
            \'offset2\' => \'7200\',
            \'rrule\' => NULL,
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'10\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'3\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408823134\',
              \'changed\' => \'1408823134\',
            ),
          ),
        ),
      \'name\' => \'Linus\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'30\',
        \'source\' => \'node/10\',
        \'alias\' => \'lagging\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'4\',
      \'title\' => "Joe\'s Garage",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'60a2e303-0c4a-4e8c-a9de-e4b482d74fcd\',
      \'nid\' => \'3\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408822550\',
      \'changed\' => \'1408822595\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f5c36199-86ac-4cfe-9e57-6d2a5a0621f2\',
      \'revision_timestamp\' => \'1408822595\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'5\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'16\',
          ),
        ),
      ),
      \'field_og_subscribe_settings\' => array(
        \'und\' => array(
          array(
            \'value\' => \'anyone\',
          ),
        ),
      ),
      \'field_og_access_default_value\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_roles_permissions\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Joe\'s Garage is a squatted social center, a meeting place in the Transvaal neighbourhood for squatters and none squatters. After the eviction in October 2008 from Pretoriusstraat 28, Joe\'s garage has reopened across the street at Pretoriusstraat 43.\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Joe&#039;s Garage is a squatted social center, a meeting place in the Transvaal neighbourhood for squatters and none squatters. After the eviction in October 2008 from Pretoriusstraat 28, Joe&#039;s garage has reopened across the street at Pretoriusstraat 43.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'group_group\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'group_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_group_logo\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'joe@squat.net\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'joesgarage.nl\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'3\',
          ),
        ),
      ),
      \'field_opening_times\' => array(),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'3\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'4\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408822550\',
              \'changed\' => \'1408822595\',
            ),
          ),
        ),
      \'name\' => \'Johanna\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => array(
        \'pid\' => \'23\',
        \'source\' => \'node/3\',
        \'alias\' => \'joes-garage\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'35\',
      \'uid\' => \'5\',
      \'title\' => \'TA3M Amsterdam\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'af8058b4-aa18-4393-8444-fdc5edd060ba\',
      \'nid\' => \'26\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408825392\',
      \'changed\' => \'1408825507\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f7803d51-8a71-4523-925e-0c6e9b381acb\',
      \'revision_timestamp\' => \'1408825507\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(),
      \'field_og_subscribe_settings\' => array(
        \'und\' => array(
          array(
            \'value\' => \'approval\',
          ),
        ),
      ),
      \'field_og_access_default_value\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_roles_permissions\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Discussions & workshops at changing locations\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Discussions &amp; workshops at changing locations</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'group_group\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
          ),
        ),
      ),
      \'group_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_group_logo\' => array(),
      \'field_email\' => array(),
      \'field_image\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_offline\' => array(),
      \'field_opening_times\' => array(),
      \'field_phone\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'26\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'5\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408825392\',
              \'changed\' => \'1408825507\',
            ),
          ),
        ),
      \'name\' => \'Tatjana\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'46\',
        \'source\' => \'node/26\',
        \'alias\' => \'ta3m-amsterdam\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
