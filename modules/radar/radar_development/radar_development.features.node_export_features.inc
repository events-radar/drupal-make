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
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'TA3T Amsterdam\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4055a5b6-1cb2-431f-99e3-a35c1e8c0a36\',
      \'nid\' => \'2\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408611403\',
      \'changed\' => \'1408611403\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'002ac2af-949d-4944-a1f7-ac996377e910\',
      \'revision_timestamp\' => \'1408611403\',
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
            \'value\' => \'Tech Activism Third Thursday - at changing locations in Amsterdam\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Tech Activism Third Thursday - at changing locations in Amsterdam</p>\\n",
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
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2\',
            \'revision_id\' => \'2\',
          ),
        ),
      ),
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
              \'entity_id\' => \'2\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408611403\',
              \'changed\' => \'1408611403\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'8\',
        \'source\' => \'node/2\',
        \'alias\' => \'groups/ta3t-amsterdam\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday \',
      \'log\' => \'cloned from uuid : 365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4e605195-f96f-4475-84fb-d48baa6a6199\',
      \'nid\' => \'13\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408631644\',
      \'changed\' => \'1408631644\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'02c0f241-c180-4628-be45-f2a5e4f3dbfb\',
      \'revision_timestamp\' => \'1408631644\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\n\\r\\nOpen electronic give-away-shop (Bring and take)",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...</p>\\n<p>Open electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
            \'revision_id\' => \'9\',
          ),
        ),
      ),
      \'field_price\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
            \'format\' => NULL,
            \'safe_value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
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
              \'entity_id\' => \'13\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408631644\',
              \'changed\' => \'1408631644\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'21\',
        \'source\' => \'node/13\',
        \'alias\' => \'socially-inept-thursday-3\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'83a013be-c2a8-453f-a0de-f638e3c0edb3\',
      \'nid\' => \'14\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408631644\',
      \'changed\' => \'1408631644\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
      \'revision_timestamp\' => \'1408631644\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\n\\r\\nOpen electronic give-away-shop (Bring and take)",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...</p>\\n<p>Open electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
            \'revision_id\' => \'10\',
          ),
        ),
      ),
      \'field_price\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
            \'format\' => NULL,
            \'safe_value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
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
              \'entity_id\' => \'14\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408631644\',
              \'changed\' => \'1408631644\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'22\',
        \'source\' => \'node/14\',
        \'alias\' => \'socially-inept-thursday-4\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'LAG\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'efebd78c-f94b-430f-b3c9-d79fa10935ef\',
      \'nid\' => \'1\',
      \'type\' => \'group\',
      \'language\' => \'en\',
      \'created\' => \'1408610343\',
      \'changed\' => \'1408610343\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'557d4cd5-adf2-4d24-a897-544341fd099e\',
      \'revision_timestamp\' => \'1408610343\',
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
            \'value\' => "LAG is a hacklab project coming out of the SLUG (Squatting Linux User Group) mesh.\\r\\n\\r\\nOur main focus is the relationship between politics and technology, both at a practical and theorethical level.\\r\\nAt lag we are interested in ]hacking( and at the same time in questioning what hacking is. We started this place because we wanted a place to share similar interests with other people so feel free to pass by for: installing linux, discussing technical or theoretical ideas, fix your laptop, learn to weave, build a bike, find parts, learn how to encrypt data, make experiments, deconstruct apparatuses, drink coffee, read a book, write a paper, scan a book, look at stuff through a microscope, fix your clothes, share files, take things apart, present something, add things to this list and share knowledge in any other way you want.\\r\\n",
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
      \'field_group_logo\' => array(),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'info@laglab.org\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'1362268158.jpg\',
            \'uri\' => \'public://1362268158_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3519\',
            \'status\' => \'1\',
            \'timestamp\' => \'1408610343\',
            \'uuid\' => \'32208fdf-154e-43ea-886a-0986dcad10fe\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'200\',
            \'height\' => \'187\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1\',
            \'revision_id\' => \'1\',
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
              \'created\' => \'1408610343\',
              \'changed\' => \'1408610343\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/1\',
        \'alias\' => \'groups/lag\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
      \'nid\' => \'4\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408616949\',
      \'changed\' => \'1408618391\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
      \'revision_timestamp\' => \'1408618391\',
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
            \'value\' => \'Main topic: FinFish\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Main topic: FinFish</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
            \'revision_id\' => \'4\',
          ),
        ),
      ),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
          array(
            \'target_id\' => \'1\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
            \'format\' => NULL,
            \'safe_value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
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
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-21 18:00:00\',
            \'value2\' => \'2014-08-21 21:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;UNTIL=20141001T215959Z;WKST=SU\\r\\nEXDATE:20140917T220000Z",
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
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
              \'created\' => \'1408616949\',
              \'changed\' => \'1408618391\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'11\',
        \'source\' => \'node/4\',
        \'alias\' => \'groups/tatm-meetings\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday \',
      \'log\' => \'cloned from uuid : 365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a4924840-1230-4309-b7d0-81ad3c39606c\',
      \'nid\' => \'9\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408631644\',
      \'changed\' => \'1408631644\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'600bb4ee-c74a-4998-8227-fd7b2f7e0f67\',
      \'revision_timestamp\' => \'1408631644\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\n\\r\\nOpen electronic give-away-shop (Bring and take)",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...</p>\\n<p>Open electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
            \'revision_id\' => \'5\',
          ),
        ),
      ),
      \'field_price\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
            \'format\' => NULL,
            \'safe_value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
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
              \'created\' => \'1408631644\',
              \'changed\' => \'1408631644\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'17\',
        \'source\' => \'node/9\',
        \'alias\' => \'socially-inept-thursday\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 5b934f26-8c58-424e-9542-403e863984b3\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0e01f28c-f409-4279-965e-9b308d3236a8\',
      \'nid\' => \'6\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408618190\',
      \'changed\' => \'1408618307\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6bb997c5-745b-4208-abbb-08a10daef69d\',
      \'revision_timestamp\' => \'1408618307\',
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
            \'value\' => \'Discussions and so, but not on 18 September.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Discussions and so, but not on 18 September.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
            \'revision_id\' => \'4\',
          ),
        ),
      ),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'2\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
            \'format\' => NULL,
            \'safe_value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
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
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-04 18:00:00\',
            \'value2\' => \'2014-09-04 21:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;UNTIL=20141001T215959Z;WKST=SU\\r\\nEXDATE:20140917T220000Z",
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
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
              \'created\' => \'1408616949\',
              \'changed\' => \'1408618190\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'13\',
        \'source\' => \'node/6\',
        \'alias\' => \'groups/tatm-meeting-0\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday \',
      \'log\' => \'cloned from uuid : 365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d7d55287-ffdb-4275-828e-54adadb13034\',
      \'nid\' => \'11\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408631644\',
      \'changed\' => \'1408631644\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'91a389c5-20c0-4a46-a90e-5e4272a8b9e9\',
      \'revision_timestamp\' => \'1408631644\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\n\\r\\nOpen electronic give-away-shop (Bring and take)",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...</p>\\n<p>Open electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
            \'revision_id\' => \'7\',
          ),
        ),
      ),
      \'field_price\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
            \'format\' => NULL,
            \'safe_value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
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
              \'entity_id\' => \'11\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408631644\',
              \'changed\' => \'1408631644\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'19\',
        \'source\' => \'node/11\',
        \'alias\' => \'socially-inept-thursday-1\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 5b934f26-8c58-424e-9542-403e863984b3\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2723442d-8523-4d3c-87b5-55def30cee87\',
      \'nid\' => \'7\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408618190\',
      \'changed\' => \'1408618307\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a2dbc754-049c-4d07-a76d-cfbbf195985e\',
      \'revision_timestamp\' => \'1408618307\',
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
            \'value\' => \'Discussions and so, but not on 18 September.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Discussions and so, but not on 18 September.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
            \'revision_id\' => \'4\',
          ),
        ),
      ),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'2\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
            \'format\' => NULL,
            \'safe_value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
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
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-11 18:00:00\',
            \'value2\' => \'2014-09-11 21:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;UNTIL=20141001T215959Z;WKST=SU\\r\\nEXDATE:20140917T220000Z",
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
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
              \'created\' => \'1408616949\',
              \'changed\' => \'1408618190\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'14\',
        \'source\' => \'node/7\',
        \'alias\' => \'groups/tatm-meeting-1\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 5b934f26-8c58-424e-9542-403e863984b3\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'174059bf-30bc-4be7-ab6c-e632b3ce6826\',
      \'nid\' => \'5\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408618190\',
      \'changed\' => \'1408618307\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a9ebe1e4-29ca-4dd5-b7a6-ea93bdcede54\',
      \'revision_timestamp\' => \'1408618307\',
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
            \'value\' => \'Discussions and so, but not on 18 September.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Discussions and so, but not on 18 September.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
            \'revision_id\' => \'4\',
          ),
        ),
      ),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'2\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
            \'format\' => NULL,
            \'safe_value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
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
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-08-28 18:00:00\',
            \'value2\' => \'2014-08-28 21:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;UNTIL=20141001T215959Z;WKST=SU\\r\\nEXDATE:20140917T220000Z",
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
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
              \'created\' => \'1408616949\',
              \'changed\' => \'1408618190\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'12\',
        \'source\' => \'node/5\',
        \'alias\' => \'groups/tatm-meeting\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday \',
      \'log\' => \'cloned from uuid : 365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b63ac030-efa1-49c5-a714-e09bc009b156\',
      \'nid\' => \'10\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408631644\',
      \'changed\' => \'1408631644\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cdb6a935-c29f-489b-a49d-da6fe08268c0\',
      \'revision_timestamp\' => \'1408631644\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\n\\r\\nOpen electronic give-away-shop (Bring and take)",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...</p>\\n<p>Open electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
            \'revision_id\' => \'6\',
          ),
        ),
      ),
      \'field_price\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
            \'format\' => NULL,
            \'safe_value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
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
              \'created\' => \'1408631644\',
              \'changed\' => \'1408631644\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'18\',
        \'source\' => \'node/10\',
        \'alias\' => \'socially-inept-thursday-0\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Socially Inept Thursday \',
      \'log\' => \'cloned from uuid : 365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'38c50e1d-0581-44e5-aeb6-99187e7e6341\',
      \'nid\' => \'12\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408631644\',
      \'changed\' => \'1408631644\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dc4155ee-2fd1-4231-9776-0c3e2ead58b7\',
      \'revision_timestamp\' => \'1408631644\',
      \'revision_uid\' => \'1\',
      \'field_category\' => array(),
      \'field_topics\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
          array(
            \'tid\' => \'7\',
          ),
        ),
      ),
      \'body\' => array(
        \'en\' => array(
          array(
            \'value\' => "Hakclab open for hacking. Play, hack, build, fix...\\r\\n\\r\\nOpen electronic give-away-shop (Bring and take)",
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Hakclab open for hacking. Play, hack, build, fix...</p>\\n<p>Open electronic give-away-shop (Bring and take)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5\',
            \'revision_id\' => \'8\',
          ),
        ),
      ),
      \'field_price\' => array(),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'https://laglab.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
            \'format\' => NULL,
            \'safe_value\' => \'365f0b00-fef0-44dc-a58f-3a56fa73ce4a\',
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
              \'entity_id\' => \'12\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1408631644\',
              \'changed\' => \'1408631644\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'20\',
        \'source\' => \'node/12\',
        \'alias\' => \'socially-inept-thursday-2\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'TATM meeting\',
      \'log\' => \'cloned from uuid : 5b934f26-8c58-424e-9542-403e863984b3\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3402f311-403a-428c-b53a-a9b3dc4b91a4\',
      \'nid\' => \'8\',
      \'type\' => \'event\',
      \'language\' => \'en\',
      \'created\' => \'1408618190\',
      \'changed\' => \'1408618307\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e6b185f1-6c3e-4421-ac62-a17120135a32\',
      \'revision_timestamp\' => \'1408618307\',
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
            \'value\' => \'Discussions and so, but not on 18 September.\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Discussions and so, but not on 18 September.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image\' => array(),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'value\' => \'4\',
            \'revision_id\' => \'4\',
          ),
        ),
      ),
      \'field_price\' => array(
        \'en\' => array(
          array(
            \'value\' => \'free entrance\',
            \'format\' => NULL,
            \'safe_value\' => \'free entrance\',
          ),
        ),
      ),
      \'og_group_ref\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'2\',
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
      \'field_phone\' => array(),
      \'field_link\' => array(
        \'en\' => array(
          array(
            \'url\' => \'ta3m.nl\',
            \'title\' => \'\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_email\' => array(
        \'und\' => array(
          array(
            \'email\' => \'ta3m@squat.net\',
          ),
        ),
      ),
      \'date_repeat_entity_master_uuid\' => array(
        \'und\' => array(
          array(
            \'value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
            \'format\' => NULL,
            \'safe_value\' => \'5b934f26-8c58-424e-9542-403e863984b3\',
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
      \'field_date_time\' => array(
        \'und\' => array(
          array(
            \'value\' => \'2014-09-25 18:00:00\',
            \'value2\' => \'2014-09-25 21:00:00\',
            \'timezone\' => \'Europe/Amsterdam\',
            \'offset\' => \'0\',
            \'offset2\' => \'0\',
            \'rrule\' => "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=TH;UNTIL=20141001T215959Z;WKST=SU\\r\\nEXDATE:20140917T220000Z",
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datetime\',
          ),
        ),
      ),
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
              \'created\' => \'1408616949\',
              \'changed\' => \'1408618190\',
            ),
          ),
        ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'15\',
        \'source\' => \'node/8\',
        \'alias\' => \'groups/tatm-meeting-2\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
