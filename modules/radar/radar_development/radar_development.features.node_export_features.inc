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
      \'vid\' => \'48\',
      \'uid\' => \'1\',
      \'title\' => \'TA3M Amsterdam\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1d5d1ac0-e68a-426b-b180-618442f0707f\',
      \'nid\' => \'1\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408740180\',
      \'changed\' => \'1408797759\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'002ac2af-949d-4944-a1f7-ac996377e910\',
      \'revision_timestamp\' => \'1408797759\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'5\',
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
            \'value\' => "Tech Activism Third Monday meetings in Amsterdam - at changing locations.\\r\\nCurrently set onto the 4th Monday of the month, to show up higher on the lists.",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Tech Activism Third Monday meetings in Amsterdam - at changing locations.<br />\\nCurrently set onto the 4th Monday of the month, to show up higher on the lists.</p>\\n",
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
            \'email\' => \'info@ta3m.nl\',
          ),
        ),
      ),
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
      \'field_opening_times\' => array(
        \'en\' => array(
          array(
            \'value\' => \'usually from 20-24 hrs\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>usually from 20-24 hrs</p>\\n",
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
              \'created\' => \'1408740180\',
              \'changed\' => \'1408797759\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/1\',
        \'alias\' => \'ta3m-amsterdam\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'33\',
      \'uid\' => \'1\',
      \'title\' => "Joe\'s Garage",
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a31b849f-5567-49cd-a3bc-7a6b5ded18c6\',
      \'nid\' => \'27\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408791349\',
      \'changed\' => \'1408794245\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'007b0d02-ce55-4c00-9e4b-296ff8c8c79c\',
      \'revision_timestamp\' => \'1408794245\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'6\',
          ),
          array(
            \'tid\' => \'7\',
          ),
          array(
            \'tid\' => \'8\',
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
            \'value\' => "Joe\'s Garage is a squatted social center, a meeting place in the Transvaal neighbourhood for squatters and none squatters. After the eviction in October 2008 from Pretoriusstraat 28, Joe\'s garage has reopened across the street at Pretoriusstraat 43.",
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
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'uid\' => \'1\',
            \'filename\' => \'57622.medium.jpg\',
            \'uri\' => \'public://57622.medium_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'29754\',
            \'status\' => \'1\',
            \'timestamp\' => \'1408791405\',
            \'uuid\' => \'4492c629-e5d4-4401-9f65-c38386c9030d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'320\',
            \'height\' => \'225\',
          ),
        ),
      ),
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
            \'target_id\' => \'7\',
          ),
        ),
      ),
      \'field_opening_times\' => array(
        \'en\' => array(
          array(
            \'value\' => "Monday: 19.00 Volkseten Vegazulu\\r\\nTuesday: 11.00 - 15.00 Office Hours\\r\\nTuesday: 20.00 - 21.30 Kraakspreekuur, (daarna is er een borrel)\\r\\nWednesday: 15.00 - 18.00 Lonely Collective Day Cafe\\r\\nWednesday: 20:00 Kritische Studenten Evening (once a month)\\r\\nThursday: 19.00 Volkseten Vegazulu\\r\\nSaturday: 14.00 - 18.00 Weggeefwinkel\\r\\nSunday: 20.00 Filmavond/Infoavond (film begins at 21:00) ",
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Monday: 19.00 Volkseten Vegazulu<br />\\nTuesday: 11.00 - 15.00 Office Hours<br />\\nTuesday: 20.00 - 21.30 Kraakspreekuur, (daarna is er een borrel)<br />\\nWednesday: 15.00 - 18.00 Lonely Collective Day Cafe<br />\\nWednesday: 20:00 Kritische Studenten Evening (once a month)<br />\\nThursday: 19.00 Volkseten Vegazulu<br />\\nSaturday: 14.00 - 18.00 Weggeefwinkel<br />\\nSunday: 20.00 Filmavond/Infoavond (film begins at 21:00)</p>\\n",
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
              \'created\' => \'1408791349\',
              \'changed\' => \'1408794245\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'36\',
        \'source\' => \'node/27\',
        \'alias\' => \'joes-garage\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'42\',
      \'uid\' => \'1\',
      \'title\' => \'Lagging\',
      \'log\' => \'cloned from uuid : 65c1533d-47c4-4417-996a-70ddafe8c3f6\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d4838917-f2c7-4ee3-b36f-6d5f3436b6d0\',
      \'nid\' => \'35\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795824\',
      \'changed\' => \'1408795824\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'18757790-8054-4a8c-b292-af2387836bff\',
      \'revision_timestamp\' => \'1408795824\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
          array(
            \'tid\' => \'9\',
          ),
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)",
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
            \'value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
            \'format\' => NULL,
            \'safe_value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-30 12:00:00\',
            \'value2\' => \'2014-08-30 12:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=SA;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'35\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795628\',
              \'changed\' => \'1408795824\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'46\',
        \'source\' => \'node/35\',
        \'alias\' => \'lagging-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'39\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'17475da3-02f3-4501-b3f8-aa5df3940c7c\',
      \'nid\' => \'32\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795760\',
      \'changed\' => \'1408795760\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2349dd3e-44a9-448f-acf9-c4b11a5b4d46\',
      \'revision_timestamp\' => \'1408795760\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
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
            \'value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
            \'format\' => NULL,
            \'safe_value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'32\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795760\',
              \'changed\' => \'1408795760\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'43\',
        \'source\' => \'node/32\',
        \'alias\' => \'socially-inept-thursday-2\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8a14abc1-08ce-45a0-abf3-62e563c26788\',
      \'nid\' => \'22\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408790762\',
      \'changed\' => \'1408807721\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'24efc3ba-e49a-4f07-90fd-62632ba5d0ff\',
      \'revision_timestamp\' => \'1408807721\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Presentations and discussions.\\r\\nIn August with a talk about FinFish",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Presentations and discussions.<br />\\nIn August with a talk about FinFish</p>\\n",
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
            \'value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
            \'format\' => NULL,
            \'safe_value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-25 18:00:00\',
            \'value2\' => \'2014-08-25 21:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYDAY=+4MO;BYMONTH=1,2,3,4,5,6,7,8,9,10,11,12;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'22\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408790762\',
              \'changed\' => \'1408807721\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'28\',
        \'source\' => \'node/22\',
        \'alias\' => \'groups/tatm-meeting-4\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'41\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0d14278e-0f6e-4221-86c5-a0444c481972\',
      \'nid\' => \'34\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795760\',
      \'changed\' => \'1408795760\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
      \'revision_timestamp\' => \'1408795760\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
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
            \'value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
            \'format\' => NULL,
            \'safe_value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-14 16:00:00\',
            \'value2\' => \'2014-08-14 16:00:00\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'34\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795760\',
              \'changed\' => \'1408795760\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'45\',
        \'source\' => \'node/34\',
        \'alias\' => \'socially-inept-thursday-4\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'27\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'91509562-ae5d-4add-a50c-3486b057da4b\',
      \'nid\' => \'25\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408790762\',
      \'changed\' => \'1408790762\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3062eb0f-58f3-4790-8207-dc34d3832beb\',
      \'revision_timestamp\' => \'1408790762\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Presentations and discussions.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Presentations and discussions.</p>\\n",
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
            \'value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
            \'format\' => NULL,
            \'safe_value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-11-24 19:00:00\',
            \'value2\' => \'2014-11-24 22:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYDAY=+4MO;BYMONTH=1,2,3,4,5,6,7,8,9,10,11,12;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
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
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
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
              \'entity_id\' => \'25\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408740180\',
              \'changed\' => \'1408790762\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'31\',
        \'source\' => \'node/25\',
        \'alias\' => \'groups/tatm-meeting-8\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'31\',
      \'uid\' => \'1\',
      \'title\' => \'LAG\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cc2c7671-b8f0-4497-8260-52a4d90005d4\',
      \'nid\' => \'4\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408740180\',
      \'changed\' => \'1408791655\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'557d4cd5-adf2-4d24-a897-544341fd099e\',
      \'revision_timestamp\' => \'1408791655\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'2\',
          ),
          array(
            \'tid\' => \'3\',
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
            \'value\' => "LAG is a hacklab project coming out of the SLUG (Squatting Linux User Group) mesh.\\r\\nOur main focus is the relationship between politics and technology, both at a practical and theorethical level.\\r\\nAt lag we are interested in ]hacking( and at the same time in questioning what hacking is. We started this place because we wanted a place to share similar interests with other people so feel free to pass by for: installing linux, discussing technical or theoretical ideas, fix your laptop, learn to weave, build a bike, find parts, learn how to encrypt data, make experiments, deconstruct apparatuses, drink coffee, read a book, write a paper, scan a book, look at stuff through a microscope, fix your clothes, share files, take things apart, present something, add things to this list and share knowledge in any other way you want.\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>LAG is a hacklab project coming out of the SLUG (Squatting Linux User Group) mesh.<br />\\nOur main focus is the relationship between politics and technology, both at a practical and theorethical level.<br />\\nAt lag we are interested in ]hacking( and at the same time in questioning what hacking is. We started this place because we wanted a place to share similar interests with other people so feel free to pass by for: installing linux, discussing technical or theoretical ideas, fix your laptop, learn to weave, build a bike, find parts, learn how to encrypt data, make experiments, deconstruct apparatuses, drink coffee, read a book, write a paper, scan a book, look at stuff through a microscope, fix your clothes, share files, take things apart, present something, add things to this list and share knowledge in any other way you want.</p>\\n",
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
            \'uri\' => \'public://1362268158_3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3519\',
            \'status\' => \'1\',
            \'timestamp\' => \'1408790238\',
            \'uuid\' => \'b0895af2-a0dc-4f6b-9a8a-38d6aba8592f\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'4\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408740180\',
              \'changed\' => \'1408791655\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/4\',
        \'alias\' => \'lag\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'45\',
      \'uid\' => \'1\',
      \'title\' => \'Lagging\',
      \'log\' => \'cloned from uuid : 65c1533d-47c4-4417-996a-70ddafe8c3f6\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e3e2a6be-27fd-41cc-ab24-e6fb4eb2c998\',
      \'nid\' => \'38\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795824\',
      \'changed\' => \'1408795824\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5e452290-fd22-49cb-b389-4f1176d18986\',
      \'revision_timestamp\' => \'1408795824\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
          array(
            \'tid\' => \'9\',
          ),
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)",
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
            \'value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
            \'format\' => NULL,
            \'safe_value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-20 12:00:00\',
            \'value2\' => \'2014-09-20 12:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=SA;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'38\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795628\',
              \'changed\' => \'1408795824\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'49\',
        \'source\' => \'node/38\',
        \'alias\' => \'lagging-3\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'38\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1613b421-068c-4498-a4a5-72149cab5f0b\',
      \'nid\' => \'31\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795760\',
      \'changed\' => \'1408795760\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'65185f81-c794-47be-8ea9-b54a6f64d134\',
      \'revision_timestamp\' => \'1408795760\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
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
            \'value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
            \'format\' => NULL,
            \'safe_value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'31\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795760\',
              \'changed\' => \'1408795760\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'42\',
        \'source\' => \'node/31\',
        \'alias\' => \'socially-inept-thursday-1\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'35\',
      \'uid\' => \'1\',
      \'title\' => \'Lagging\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
      \'nid\' => \'28\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795628\',
      \'changed\' => \'1408795824\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
      \'revision_timestamp\' => \'1408795824\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
          array(
            \'tid\' => \'9\',
          ),
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)",
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
            \'value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
            \'format\' => NULL,
            \'safe_value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-23 12:00:00\',
            \'value2\' => \'2014-08-23 12:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=SA;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'28\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795628\',
              \'changed\' => \'1408795824\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'39\',
        \'source\' => \'node/28\',
        \'alias\' => \'lagging\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'28\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c847192a-8d40-487e-8c83-512bcbf11709\',
      \'nid\' => \'26\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408790762\',
      \'changed\' => \'1408790762\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6a3b3fcb-b54d-484c-b183-1502e3e41efa\',
      \'revision_timestamp\' => \'1408790762\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Presentations and discussions.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Presentations and discussions.</p>\\n",
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
            \'value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
            \'format\' => NULL,
            \'safe_value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-12-22 19:00:00\',
            \'value2\' => \'2014-12-22 22:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYDAY=+4MO;BYMONTH=1,2,3,4,5,6,7,8,9,10,11,12;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
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
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
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
              \'entity_id\' => \'26\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408740180\',
              \'changed\' => \'1408790762\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'32\',
        \'source\' => \'node/26\',
        \'alias\' => \'groups/tatm-meeting-9\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'26\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e9b71456-ebc1-4e8c-a5ab-2b7a92b4ceee\',
      \'nid\' => \'24\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408790762\',
      \'changed\' => \'1408790762\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'858318f4-5a4d-43a9-b1b3-30e2c8782ef5\',
      \'revision_timestamp\' => \'1408790762\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Presentations and discussions.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Presentations and discussions.</p>\\n",
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
            \'value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
            \'format\' => NULL,
            \'safe_value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-10-27 19:00:00\',
            \'value2\' => \'2014-10-27 22:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYDAY=+4MO;BYMONTH=1,2,3,4,5,6,7,8,9,10,11,12;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
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
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
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
              \'entity_id\' => \'24\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408740180\',
              \'changed\' => \'1408790762\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'30\',
        \'source\' => \'node/24\',
        \'alias\' => \'groups/tatm-meeting-6\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'43\',
      \'uid\' => \'1\',
      \'title\' => \'Lagging\',
      \'log\' => \'cloned from uuid : 65c1533d-47c4-4417-996a-70ddafe8c3f6\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c25665d7-8ee0-4c65-a88b-1ecacfccf5e7\',
      \'nid\' => \'36\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795824\',
      \'changed\' => \'1408795824\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8a73435a-32d2-4211-a3c8-318884df57eb\',
      \'revision_timestamp\' => \'1408795824\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
          array(
            \'tid\' => \'9\',
          ),
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)",
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
            \'value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
            \'format\' => NULL,
            \'safe_value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-06 12:00:00\',
            \'value2\' => \'2014-09-06 12:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=SA;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'36\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795628\',
              \'changed\' => \'1408795824\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'47\',
        \'source\' => \'node/36\',
        \'alias\' => \'lagging-1\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 5b934f26-8c58-424e-9542-403e863984b3\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
      \'nid\' => \'10\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408740180\',
      \'changed\' => \'1408790762\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
      \'revision_timestamp\' => \'1408790762\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Presentations and discussions.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Presentations and discussions.</p>\\n",
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
            \'value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
            \'format\' => NULL,
            \'safe_value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-07-28 18:00:00\',
            \'value2\' => \'2014-07-28 21:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYDAY=+4MO;BYMONTH=1,2,3,4,5,6,7,8,9,10,11,12;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
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
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
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
              \'entity_id\' => \'10\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408740180\',
              \'changed\' => \'1408790762\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'11\',
        \'source\' => \'node/10\',
        \'alias\' => \'groups/tatm-meeting-2\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'46\',
      \'uid\' => \'1\',
      \'title\' => \'Lagging\',
      \'log\' => \'cloned from uuid : 65c1533d-47c4-4417-996a-70ddafe8c3f6\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e09ae624-4555-461e-a6b6-a92d485f9b42\',
      \'nid\' => \'39\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795824\',
      \'changed\' => \'1408795824\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9038376c-28f7-4020-a238-5b276c652d6e\',
      \'revision_timestamp\' => \'1408795824\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
          array(
            \'tid\' => \'9\',
          ),
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)",
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
            \'value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
            \'format\' => NULL,
            \'safe_value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-27 12:00:00\',
            \'value2\' => \'2014-09-27 12:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=SA;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'39\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795628\',
              \'changed\' => \'1408795824\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'50\',
        \'source\' => \'node/39\',
        \'alias\' => \'lagging-4\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'36\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'35a298c8-6b44-4ba3-9dac-9050d615189e\',
      \'nid\' => \'29\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795760\',
      \'changed\' => \'1408795760\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9a5c1a4c-29e7-41e6-9600-993bd0625ad8\',
      \'revision_timestamp\' => \'1408795760\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
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
            \'value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
            \'format\' => NULL,
            \'safe_value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'created\' => \'1408795760\',
              \'changed\' => \'1408795760\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'40\',
        \'source\' => \'node/29\',
        \'alias\' => \'socially-inept-thursday\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'810e3a74-2169-4122-a54d-0bf821fef0d0\',
      \'nid\' => \'23\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408790762\',
      \'changed\' => \'1408807968\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b3dbbfb4-9750-4ed3-9294-acbffab2eb0d\',
      \'revision_timestamp\' => \'1408807968\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'4\',
          ),
          array(
            \'tid\' => \'5\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Presentations and discussions. \\r\\nTopic in September: Privacy or so",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Presentations and discussions.<br />\\nTopic in September: Privacy or so</p>\\n",
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
            \'value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
            \'format\' => NULL,
            \'safe_value\' => \'8c4062f4-b100-42a1-88a4-2066e2f2c17f\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-22 18:00:00\',
            \'value2\' => \'2014-09-22 21:30:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=MONTHLY;INTERVAL=1;BYDAY=+4MO;BYMONTH=1,2,3,4,5,6,7,8,9,10,11,12;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'27\',
          ),
        ),
      ),
      \'og_group_request\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
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
            \'target_id\' => \'7\',
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
              \'entity_id\' => \'23\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408790762\',
              \'changed\' => \'1408807968\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'29\',
        \'source\' => \'node/23\',
        \'alias\' => \'groups/tatm-meeting-5\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'40\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9be58350-c010-4176-93f0-85c3ba784614\',
      \'nid\' => \'33\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795760\',
      \'changed\' => \'1408795760\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ddb40aec-7099-436a-ba73-bc7a7879a469\',
      \'revision_timestamp\' => \'1408795760\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
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
            \'value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
            \'format\' => NULL,
            \'safe_value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'33\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795760\',
              \'changed\' => \'1408795760\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'44\',
        \'source\' => \'node/33\',
        \'alias\' => \'socially-inept-thursday-3\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'37\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday\',
      \'log\' => \'cloned from uuid : 2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9a41c671-15b2-46ff-84e8-d20dd1aadd67\',
      \'nid\' => \'30\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795760\',
      \'changed\' => \'1408795760\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e6509b3d-4dd0-4a3a-8677-4c3e8bd97b0c\',
      \'revision_timestamp\' => \'1408795760\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
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
            \'value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
            \'format\' => NULL,
            \'safe_value\' => \'2b2ea7c1-7a8c-4a85-80b6-dac8f19ef4bd\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'30\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795760\',
              \'changed\' => \'1408795760\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'41\',
        \'source\' => \'node/30\',
        \'alias\' => \'socially-inept-thursday-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'44\',
      \'uid\' => \'1\',
      \'title\' => \'Lagging\',
      \'log\' => \'cloned from uuid : 65c1533d-47c4-4417-996a-70ddafe8c3f6\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'28c232e1-2550-4043-aa1c-c9c938be68a9\',
      \'nid\' => \'37\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408795824\',
      \'changed\' => \'1408795824\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e801dc7a-05d4-49fe-aed1-af072372965b\',
      \'revision_timestamp\' => \'1408795824\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'3\',
          ),
          array(
            \'tid\' => \'9\',
          ),
          array(
            \'tid\' => \'10\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\nOpen electronic give-away-shop (Bring and take)",
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
            \'value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
            \'format\' => NULL,
            \'safe_value\' => \'65c1533d-47c4-4417-996a-70ddafe8c3f6\',
          ),
        ),
      ),
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-13 12:00:00\',
            \'value2\' => \'2014-09-13 12:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => \'RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=SA;COUNT=6;WKST=MO\',
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
            \'value\' => \'0\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
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
            \'target_id\' => \'5\',
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
              \'entity_id\' => \'37\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408795628\',
              \'changed\' => \'1408795824\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'48\',
        \'source\' => \'node/37\',
        \'alias\' => \'lagging-2\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
