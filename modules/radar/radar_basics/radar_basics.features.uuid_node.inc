<?php
/**
 * @file
 * radar_basics.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function radar_basics_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Why Radar?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cbeb62e9-4abf-4b2e-b4f3-928e03521b0c',
  'type' => 'page',
  'language' => 'en',
  'created' => 1409050792,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3da52869-9542-488b-8031-12d4e21fb694',
  'revision_uid' => 1,
  'body' => array(
    'en' => array(
      0 => array(
        'value' => 'Many of the activities in the alternative scene take place on a voluntary and irregular base. A major disadvantage of this is that not everybody who is interested in this sort of activities can find their way easily. As a result, there is an extra treshold to enjoy cheap movies, concert, discussion, vegetarian food and the many other activities organised in the alternative scene. Radar has been put up to lower this knowledge-treshold and to provide a a source of information about these activities.

Radar is a non-commercial project and publishes information about other non-commercial projects. On rare occasions we might publish a commercial event, but only if the person who adds the information thinks it is of great interest. Normally such information is refused. Commercially organised events have enough channels of commnication already. We want to provide a couterpart by serving an easily accessible database where people can add their own information.

Several different groups use radar to display their agenda on their own site. While they update the information in the central database through web-forms, they also update the information on their own site. Through this, the information is also accessible to people who have not visited their own sites yet. ',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Many of the activities in the alternative scene take place on a voluntary and irregular base. A major disadvantage of this is that not everybody who is interested in this sort of activities can find their way easily. As a result, there is an extra treshold to enjoy cheap movies, concert, discussion, vegetarian food and the many other activities organised in the alternative scene. Radar has been put up to lower this knowledge-treshold and to provide a a source of information about these activities.</p>
<p>Radar is a non-commercial project and publishes information about other non-commercial projects. On rare occasions we might publish a commercial event, but only if the person who adds the information thinks it is of great interest. Normally such information is refused. Commercially organised events have enough channels of commnication already. We want to provide a couterpart by serving an easily accessible database where people can add their own information.</p>
<p>Several different groups use radar to display their agenda on their own site. While they update the information in the central database through web-forms, they also update the information on their own site. Through this, the information is also accessible to people who have not visited their own sites yet.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'entity_id' => 1,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1409050792,
        'changed' => 1409345365,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-08-26 10:59:52 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How to post?',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '43993009-40f8-4af9-bc05-0e1e3cd2f39f',
  'type' => 'page',
  'language' => 'en',
  'created' => 1409050852,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cbc153cf-bb0a-4e12-8fb6-3c882e07833f',
  'revision_uid' => 1,
  'body' => array(
    'en' => array(
      0 => array(
        'value' => 'Radar is driven by the groups that use it. Therefore all events have to be post into a group. 

To do so, simply go to the page of that group and click on "Create an event". The location of that group is added automatically to your event, but you can change to use another existing location as well as by adding a new location.
If you want to post an event into two or more groups, do so from the group that where the event will take place. That way the correct location will 
Some groups are open for everybody to post, in others posts from non-members of that group will be hold up for moderation.

If you want to set up a new group, please contact radar@squat.net.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Radar is driven by the groups that use it. Therefore all events have to be post into a group. </p>
<p>To do so, simply go to the page of that group and click on &quot;Create an event&quot;. The location of that group is added automatically to your event, but you can change to use another existing location as well as by adding a new location.<br />
If you want to post an event into two or more groups, do so from the group that where the event will take place. That way the correct location will<br />
Some groups are open for everybody to post, in others posts from non-members of that group will be hold up for moderation.</p>
<p>If you want to set up a new group, please contact <a href="mailto:radar@squat.net">radar@squat.net</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'entity_id' => 2,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1409050852,
        'changed' => 1409345400,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-08-26 11:00:52 +0000',
);
  return $nodes;
}
