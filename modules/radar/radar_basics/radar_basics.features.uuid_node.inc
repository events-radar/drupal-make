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
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Why Radar?',
        'format' => NULL,
        'safe_value' => 'Why Radar?',
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
        'created' => 1415288318,
        'changed' => 1415288318,
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
  'title' => 'API',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ad45001c-765a-4663-b415-1421b9f4897a',
  'type' => 'page',
  'language' => 'en',
  'created' => 1409408888,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '836c6a7e-6c2b-4c70-9179-73c84c5c1944',
  'revision_uid' => 1,
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<ul>
  <li><a href="#api">API</a></li>
  <li><a href="#ical">iCalendar feeds</a></li>
</ul>

<h2 id="api">API</h2>

<p><strong>Subject to change</strong></p>

<p>One thing <em>certain</em> to change is the search endpoint. It\'s an incorrect implementation, but is there now as a stopgap to enable lookups of UUIDs to use the other endpoints.</p>

<h3>Example:</h3>

<p>First find the UUID for the group.</p>

<pre>
<code>
Request:
  GET api/1.0/search/groups.json?fields[]=title&fields[]=uuid&filter[~and][title]=Joe\'s Garage
</code>
<code>
Response:
{

    "3": {
        "title": "Joe\'s Garage",
        "uuid": "9b48213f-212f-4799-9430-0499683c3fb8"
    }

}
</code>
</pre>
<br />
<pre>
<code>
Request:
  GET api/1.0/group_events/9b48213f-212f-4799-9430-0499683c3fb8.json
</code>
<code>
Response:
[

    {
        "uid": "1",
        "field_category": [
            {
                "tid": "5"
            }
        ],
        "field_date_time": [
            {
                "value": "2014-09-01 20:00:00",
                "value2": "2014-09-01 21:00:00",
                "timezone": "Europe/Amsterdam",
                "offset": "7200",
                "offset2": "7200",
                "rrule": "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=MO;COUNT=2;WKST=MO",
                "timezone_db": "Europe/Amsterdam",
                "date_type": "datetime"
            }
        ],
        "body": {
            "value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "summary": "",
            "format": null,
            "safe_value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "safe_summary": ""
        },
        "group_group": [ ],
        "field_image": [ ],
        "language": "English",
        "nid": "5",
        "uuid": "73cfeeb2-3687-4808-beaf-fc61c0e8c553",
        "field_offline": [
            {
                "target_id": "1",
                "uuid": "997bd4d7-8460-4799-a6c4-644c4946eba7"
            }
        ],
        "field_link": [ ],
        "field_phone": [ ],
        "created": "2014-08-30T13:51:25+00:00",
        "field_price": [ ],
        "title": "A repeating event in the Joe group",
        "field_topic": [
            {
                "tid": "15"
            }
        ],
        "vid": "5"
    },
    {
        "uid": "1",
        "field_category": [
            {
                "tid": "5"
            }
        ],
        "field_date_time": [
            {
                "value": "2014-09-08 20:00:00",
                "value2": "2014-09-08 21:00:00",
                "timezone": "Europe/Amsterdam",
                "offset": "7200",
                "offset2": "7200",
                "rrule": "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=MO;COUNT=2;WKST=MO",
                "timezone_db": "Europe/Amsterdam",
                "date_type": "datetime"
            }
        ],
        "body": {
            "value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "summary": "",
            "format": null,
            "safe_value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "safe_summary": ""
        },
        "group_group": [ ],
        "field_image": [ ],
        "language": "English",
        "nid": "4",
        "uuid": "fa9f7618-9310-4cff-89bd-36d65b6824b3",
        "field_offline": [
            {
                "target_id": "1",
                "uuid": "997bd4d7-8460-4799-a6c4-644c4946eba7"
            }
        ],
        "field_link": [ ],
        "field_phone": [ ],
        "created": "2014-08-30T13:51:25+00:00",
        "field_price": [ ],
        "title": "A repeating event in the Joe group",
        "field_topic": [
            {
                "tid": "15"
            }
        ],
        "vid": "4"
    }

]
</code>
</pre>

<p>A <em>bug already visible</em>: the topics need to be by UUID :-(. You could then look them up using GET api/1.0/taxonom_term/:uuid</p>

<h3>File</h2><h3>Retrieve</h3><pre><code>GET api/1.0/file/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/file/:uuid</code></pre><h3>Create_raw</h3><pre><code>POST api/1.0/file/create_raw</code></pre><h2>Group_events</h2><h3>Index</h3><pre><code>GET api/1.0/group_events/:uuid</code></pre><h2>Location</h2><h3>Retrieve</h3><pre><code>GET api/1.0/location/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/location/:uuid</code></pre><h2>Node</h2><h3>Retrieve</h3><pre><code>GET api/1.0/node/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/node/:uuid</code></pre><h3>Files</h3><pre><code>GET api/1.0/node/:nid/:file_contents/:image_styles/files</code></pre><h2>Search</h2><h3>Retrieve</h3><pre><code>GET api/1.0/search/:index</code></pre><div>Query String Parameters</div><div><h4>(array) filter - optional</h4><p>String of filters to apply to the search, in the form \'filter[~and][title]=title\'. Filters can be nested.<div><h4>(array) sort - optional</h4><p>String containing the sort elements for the search in the form \'sort[nid]=DESC\'. Multiple sort terms can be used.<div><h4>(int) limit - optional</h4><p>Number of results to retrieve.<div><h4>(int) offset - optional</h4><p>The position of the first returned search result.<div><h4>(array) fields - optional</h4><p>The fields to get, if fields are from a related entity, use field_relationship:field_name for getting a given field or field_relationship_* for getting the whole set of data<h2>Taxonomy_term</h2><h3>Retrieve</h3><pre><code>GET api/1.0/taxonomy_term/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/taxonomy_term/:uuid</code></pre><h2>User</h2><h3>Login</h3><pre><code>POST api/1.0/user/login</code></pre><div>Body Data</div><div><h4>(string) username - required</h4><p>A valid username<div><h4>(string) password - required</h4><p>A valid password<h3>Logout</h3><pre><code>POST api/1.0/user/logout</code></pre><h3>Token</h3><pre><code>POST api/1.0/user/token</code></pre>

<h2 id="ical">iCalendar feeds</h2>

<h3>Incoming</h3>

<p>Administrators of groups can \'Create new Event ical importer in group\', link in the grey section where others can add events. You just need to fill the iCalendar feed into the \'FEED URL\' box. If your events do not have geolocation you will also want to select the default \'Offline\' location for events.</p>

<h3>Outgoing</h3>

<p>Each group has an <img src="/profiles/radar/modules/contrib/date_ical/images/ical-feed-icon-34x14.png" alt="iCal"> link to it\'s upcoming events feed on the group page.</p>
<p>Feeds of the other upcoming events pages to be created.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul><li><a href="#api">API</a></li>
  <li><a href="#ical">iCalendar feeds</a></li>
</ul><h2 id="api">API</h2>

<p><strong>Subject to change</strong></p>

<p>One thing <em>certain</em> to change is the search endpoint. It\'s an incorrect implementation, but is there now as a stopgap to enable lookups of UUIDs to use the other endpoints.</p>

<h3>Example:</h3>

<p>First find the UUID for the group.</p>

<pre>
<code>
Request:
  GET api/1.0/search/groups.json?fields[]=title&amp;fields[]=uuid&amp;filter[~and][title]=Joe\'s Garage
</code>
<code>
Response:
{

    "3": {
        "title": "Joe\'s Garage",
        "uuid": "9b48213f-212f-4799-9430-0499683c3fb8"
    }

}
</code>
</pre>
<br /><pre>
<code>
Request:
  GET api/1.0/group_events/9b48213f-212f-4799-9430-0499683c3fb8.json
</code>
<code>
Response:
[

    {
        "uid": "1",
        "field_category": [
            {
                "tid": "5"
            }
        ],
        "field_date_time": [
            {
                "value": "2014-09-01 20:00:00",
                "value2": "2014-09-01 21:00:00",
                "timezone": "Europe/Amsterdam",
                "offset": "7200",
                "offset2": "7200",
                "rrule": "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=MO;COUNT=2;WKST=MO",
                "timezone_db": "Europe/Amsterdam",
                "date_type": "datetime"
            }
        ],
        "body": {
            "value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "summary": "",
            "format": null,
            "safe_value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "safe_summary": ""
        },
        "group_group": [ ],
        "field_image": [ ],
        "language": "English",
        "nid": "5",
        "uuid": "73cfeeb2-3687-4808-beaf-fc61c0e8c553",
        "field_offline": [
            {
                "target_id": "1",
                "uuid": "997bd4d7-8460-4799-a6c4-644c4946eba7"
            }
        ],
        "field_link": [ ],
        "field_phone": [ ],
        "created": "2014-08-30T13:51:25+00:00",
        "field_price": [ ],
        "title": "A repeating event in the Joe group",
        "field_topic": [
            {
                "tid": "15"
            }
        ],
        "vid": "5"
    },
    {
        "uid": "1",
        "field_category": [
            {
                "tid": "5"
            }
        ],
        "field_date_time": [
            {
                "value": "2014-09-08 20:00:00",
                "value2": "2014-09-08 21:00:00",
                "timezone": "Europe/Amsterdam",
                "offset": "7200",
                "offset2": "7200",
                "rrule": "RRULE:FREQ=WEEKLY;INTERVAL=1;BYDAY=MO;COUNT=2;WKST=MO",
                "timezone_db": "Europe/Amsterdam",
                "date_type": "datetime"
            }
        ],
        "body": {
            "value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "summary": "",
            "format": null,
            "safe_value": "This is a sample repeating event in the group that will repeat for two weeks.",
            "safe_summary": ""
        },
        "group_group": [ ],
        "field_image": [ ],
        "language": "English",
        "nid": "4",
        "uuid": "fa9f7618-9310-4cff-89bd-36d65b6824b3",
        "field_offline": [
            {
                "target_id": "1",
                "uuid": "997bd4d7-8460-4799-a6c4-644c4946eba7"
            }
        ],
        "field_link": [ ],
        "field_phone": [ ],
        "created": "2014-08-30T13:51:25+00:00",
        "field_price": [ ],
        "title": "A repeating event in the Joe group",
        "field_topic": [
            {
                "tid": "15"
            }
        ],
        "vid": "4"
    }

]
</code>
</pre>

<p>A <em>bug already visible</em>: the topics need to be by UUID :-(. You could then look them up using GET api/1.0/taxonom_term/:uuid</p>

<h3>File<h3>Retrieve</h3><pre><code>GET api/1.0/file/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/file/:uuid</code></pre><h3>Create_raw</h3><pre><code>POST api/1.0/file/create_raw</code></pre><h2>Group_events</h2><h3>Index</h3><pre><code>GET api/1.0/group_events/:uuid</code></pre><h2>Location</h2><h3>Retrieve</h3><pre><code>GET api/1.0/location/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/location/:uuid</code></pre><h2>Node</h2><h3>Retrieve</h3><pre><code>GET api/1.0/node/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/node/:uuid</code></pre><h3>Files</h3><pre><code>GET api/1.0/node/:nid/:file_contents/:image_styles/files</code></pre><h2>Search</h2><h3>Retrieve</h3><pre><code>GET api/1.0/search/:index</code></pre><div>Query String Parameters</div><div><h4>(array) filter - optional</h4><p>String of filters to apply to the search, in the form \'filter[~and][title]=title\'. Filters can be nested.</p><div><h4>(array) sort - optional</h4><p>String containing the sort elements for the search in the form \'sort[nid]=DESC\'. Multiple sort terms can be used.</p><div><h4>(int) limit - optional</h4><p>Number of results to retrieve.</p><div><h4>(int) offset - optional</h4><p>The position of the first returned search result.</p><div><h4>(array) fields - optional</h4><p>The fields to get, if fields are from a related entity, use field_relationship:field_name for getting a given field or field_relationship_* for getting the whole set of data</p><h2>Taxonomy_term</h2><h3>Retrieve</h3><pre><code>GET api/1.0/taxonomy_term/:uuid</code></pre><h3>Update</h3><pre><code>PUT api/1.0/taxonomy_term/:uuid</code></pre><h2>User</h2><h3>Login</h3><pre><code>POST api/1.0/user/login</code></pre><div>Body Data</div><div><h4>(string) username - required</h4><p>A valid username</p><div><h4>(string) password - required</h4><p>A valid password</p><h3>Logout</h3><pre><code>POST api/1.0/user/logout</code></pre><h3>Token</h3><pre><code>POST api/1.0/user/token</code></pre>

<h2 id="ical">iCalendar feeds</h2>

<h3>Incoming</h3>

<p>Administrators of groups can \'Create new Event ical importer in group\', link in the grey section where others can add events. You just need to fill the iCalendar feed into the \'FEED URL\' box. If your events do not have geolocation you will also want to select the default \'Offline\' location for events.</p>

<h3>Outgoing</h3>

<p>Each group has an <img src="/profiles/radar/modules/contrib/date_ical/images/ical-feed-icon-34x14.png" alt="iCal" /> link to it\'s upcoming events feed on the group page.</p>
<p>Feeds of the other upcoming events pages to be created.</p></div></div></div></div></div></div></div></h3>',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'API',
        'format' => NULL,
        'safe_value' => 'API',
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
        'created' => 1411309642,
        'changed' => 1411309642,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-08-30 14:28:08 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How to post groups and events?',
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
        'value' => '<h3>Groups</h3><h4>What is a group?</h4><p>In the context of this website, anybody who organizes something or who provides a space for others is a group. This can be the collective that runs a social space, or the group that squatted a building, but also the group who cooks there every week, or the project that meets up there once a month. Whether these are one or several groups on the radar site is up to you. Groups can have physical locations, but don\'t have to. This way, a group that meets at different locations also has a page where visitors can easily find upcoming events, without needing to know where the next meeting will be.</p><h4>Everybody can create a group...</h4><ul><li>Every registered user can create a group at http://new-radar.squat.net/node/add/group.</li><li>The name of the group will be used as URL for your group.</li><li>Set the language correctly, to allow for translations. If your language is missing, contact us, and we add it.</li><li>Fill in the fields as appropriate.</li><li>You can add a physical location, or use an exiting one. Groups don\'t have to have a location, and it is possible to change the locations for individual events later.</li><li>You can decide who should be allowed to post events for this group. This depends on your situation. For example if you are a social space with lots of groups organizing independent events you might want to give the responsibility for their announcements to lots of them, but if you run a cinema you possibly only want a few people dealing with it.</li><li>When you safe a new group it is <em>not</em> immediately visible. It needs to be approved by an administrator first.</li><li>Once the group is approved, you become its mananger.</li></ul><h4>... but a site administrator needs to approve it.</h4><ul><li>All new groups are listed on the <a href="/admin/content/pending-groups">Publish Pending groups</a> page. It\'s only accessibel to site administrators.</li><li>As a administrator, you can see all the information given for a pending group by clicking on its the <em>edit</em> link in the table.</li><li>The list page has a simple tick box to approve of a new group. It is then visible to everybody.</li><li>After approviing the group, please also give the manager of the group the role as <em>administrative member</em> by choosing the <em>Administer group</em> tab, and then going to the <em>People</em> page. (In future that will happen automatically, but at the moment it still needs to be done manually).</li></ul><h4>Setting up a group as an site administrator</h4><ul><li>You go through the same steps as any other user, but you can then approve of your own group.</li><li>Don\'t forget to give yourself the role of administrative member of this group.</li></ul><h4>Managing a group</h4><ul><li>As an administrative member of a group, you see some tabs on your group page, that give you some additional options to manage the group and its content.</li><li>Administrative members of a group can make other users members or administrative members.</li><li>Depending on the settings of your group, you need to approve of events posted into your group before they show up.</li></ul><h3>&nbsp;</h3><h3>Events</h3><ul><li>All events need to be posted into a group.</li><li>Cities are not groups. They are added as locations, so that it\'s possible to search by country, town, etc.</li><li>It\'s okay to make a new group for a one-off event, such as a protest camp or a demonstration.</li></ul><h4>How to add a new event</h4><ul><li>Go to the page of the group that organises the event or where it takes place, and click on the "create event" link.</li><li>Just fill in all relevant information.</li><li>Repeating events be set up with different rules, such as every Monday and Thursday, or every last Tuesday of the month. Individual dates can be excluded or modified (see below). Repeating events need either an end date or a number of occurences.</li><li>The location field is pre-populated with the location information of that group page, but you can change it.</li><li>You can add more groups and more locations to an event, for example if you are an group that has a meeting at a social space, or if you organise a demonstration together with other groups.</li><li>If you are a member of that group, your event will be visible immediately. If you post into another group, then it might require approval of that group first. This depends on individual group settings.</li></ul><h4>How to approve of an event</h4><ul><li>Group administrators see tab for "pending events" on their group page.</li><li>On that list you can just click a tick box to approve of an event.</li></ul><h4>Modifying repeating events</h4><ul><li>Repeating events are stored as individual events in the database so it is possible to change them individually, or to cancel individual dates. You can for example add a weekly film programme, and only add the name and description of the film when you got it, or cancel a single date.</li><li>Click on the edit tab for the event you want to change, and change what ever needs changing. Then click on save.</li><li>After that you are asked whether you want to apply this change only this occurence or to all.</li></ul><p>&nbsp;</p><h3>Pushing or pulling events to or from Radar</h3><p>You can push events from your own website with an ical feed, or you can pull them from Radar to your site. Both options have their advantages, but make sure to only use one so that you have one authorative source of information. Otherwise it will become messy.</p><h4>Adding feeds of events...</h4><ul><li>If you already have added your events to another website that provides a feed, then you can also automatically import these events.</li><li>Click on the link on the "Create ical event importer" link on your group page, and add the url of your feed.</li><li>Where possible the importer will try to match up the information in your feed with the fields on the website, but information such as categories will probably be missing.</li><li>When you update events or your site, they will automatially get updated on the radar site as well.</li><li>For more details, see the <a href="/api#ical">API</a> page.</li></ul><h4>... or pulling events off the radar site?</h4><ul><li>Instead you importing events from your website into radar with feeds and potentially loosing some information on the way, you can also use radar to post them, and then import them into your site with a special API.</li><li>You can choose which information to include, by customizing the query as shown on the <a href="/api">API</a> page.</li><li>Contact us if you got any problems.</li></ul>',
        'summary' => '',
        'format' => 'rich_text_editor',
        'safe_value' => '<h3>Groups</h3>
<h4>What is a group?</h4>
<p>In the context of this website, anybody who organizes something or who provides a space for others is a group. This can be the collective that runs a social space, or the group that squatted a building, but also the group who cooks there every week, or the project that meets up there once a month. Whether these are one or several groups on the radar site is up to you. Groups can have physical locations, but don\'t have to. This way, a group that meets at different locations also has a page where visitors can easily find upcoming events, without needing to know where the next meeting will be.<br /></p><h4>Everybody can create a group...</h4>
<ul><li>Every registered user can create a group at <a href="http://new-radar.squat.net/node/add/group">http://new-radar.squat.net/node/add/group</a>.</li>
<li>The name of the group will be used as URL for your group.</li>
<li>Set the language correctly, to allow for translations. If your language is missing, contact us, and we add it.</li>
<li>Fill in the fields as appropriate.</li>
<li>You can add a physical location, or use an exiting one. Groups don\'t have to have a location, and it is possible to change the locations for individual events later.</li>
<li>You can decide who should be allowed to post events for this group. This depends on your situation. For example if you are a social space with lots of groups organizing independent events you might want to give the responsibility for their announcements to lots of them, but if you run a cinema you possibly only want a few people dealing with it.</li>
<li>When you safe a new group it is <em>not</em> immediately visible. It needs to be approved by an administrator first.</li>
<li>Once the group is approved, you become its mananger.</li>
</ul><h4>... but a site administrator needs to approve it.</h4>
<ul><li>All new groups are listed on the <a href="/admin/content/pending-groups">Publish Pending groups</a> page. It\'s only accessibel to site administrators.</li>
<li>As a administrator, you can see all the information given for a pending group by clicking on its the <em>edit</em> link in the table.</li>
<li>The list page has a simple tick box to approve of a new group. It is then visible to everybody.</li>
<li>After approviing the group, please also give the manager of the group the role as <em>administrative member</em> by choosing the <em>Administer group</em> tab, and then going to the <em>People</em> page. (In future that will happen automatically, but at the moment it still needs to be done manually).</li>
</ul><h4>Setting up a group as an site administrator</h4>
<ul><li>You go through the same steps as any other user, but you can then approve of your own group.</li>
<li>Don\'t forget to give yourself the role of administrative member of this group.</li>
</ul><h4>Managing a group</h4>
<ul><li>As an administrative member of a group, you see some tabs on your group page, that give you some additional options to manage the group and its content.</li>
<li>Administrative members of a group can make other users members or administrative members.</li>
<li>Depending on the settings of your group, you need to approve of events posted into your group before they show up.</li>
</ul><h3> </h3>
<h3>Events</h3>
<ul><li>All events need to be posted into a group.</li>
<li>Cities are not groups. They are added as locations, so that it\'s possible to search by country, town, etc.</li>
<li>It\'s okay to make a new group for a one-off event, such as a protest camp or a demonstration.</li>
</ul><h4>How to add a new event</h4>
<ul><li>Go to the page of the group that organises the event or where it takes place, and click on the "create event" link.</li>
<li>Just fill in all relevant information.</li>
<li>Repeating events be set up with different rules, such as every Monday and Thursday, or every last Tuesday of the month. Individual dates can be excluded or modified (see below). Repeating events need either an end date or a number of occurences.</li>
<li>The location field is pre-populated with the location information of that group page, but you can change it.</li>
<li>You can add more groups and more locations to an event, for example if you are an group that has a meeting at a social space, or if you organise a demonstration together with other groups.</li>
<li>If you are a member of that group, your event will be visible immediately. If you post into another group, then it might require approval of that group first. This depends on individual group settings.</li>
</ul><h4>How to approve of an event</h4>
<ul><li>Group administrators see tab for "pending events" on their group page.</li>
<li>On that list you can just click a tick box to approve of an event.</li>
</ul><h4>Modifying repeating events</h4>
<ul><li>Repeating events are stored as individual events in the database so it is possible to change them individually, or to cancel individual dates. You can for example add a weekly film programme, and only add the name and description of the film when you got it, or cancel a single date.</li>
<li>Click on the edit tab for the event you want to change, and change what ever needs changing. Then click on save.</li>
<li>After that you are asked whether you want to apply this change only this occurence or to all.</li>
</ul><p> <br /></p><h3>Pushing or pulling events to or from Radar</h3>
<p>You can push events from your own website with an ical feed, or you can pull them from Radar to your site. Both options have their advantages, but make sure to only use one so that you have one authorative source of information. Otherwise it will become messy.<br /></p><h4>Adding feeds of events...</h4>
<ul><li>If you already have added your events to another website that provides a feed, then you can also automatically import these events.</li>
<li>Click on the link on the "Create ical event importer" link on your group page, and add the url of your feed.</li>
<li>Where possible the importer will try to match up the information in your feed with the fields on the website, but information such as categories will probably be missing.</li>
<li>When you update events or your site, they will automatially get updated on the radar site as well.</li>
<li>For more details, see the <a href="/api#ical">API</a> page.</li>
</ul><h4>... or pulling events off the radar site?</h4>
<ul><li>Instead you importing events from your website into radar with feeds and potentially loosing some information on the way, you can also use radar to post them, and then import them into your site with a special API.</li>
<li>You can choose which information to include, by customizing the query as shown on the <a href="/api">API</a> page.</li>
<li>Contact us if you got any problems.</li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'How to post groups and events?',
        'format' => NULL,
        'safe_value' => 'How to post groups and events?',
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
        'entity_id' => 3,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1409050852,
        'changed' => 1415810305,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-08-26 11:00:52 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Translate',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e0602968-e251-45e2-8ae9-4cb98fc36a2c',
  'type' => 'page',
  'language' => 'en',
  'created' => 1410436370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e72ba8f0-880f-45c6-b96f-cb30c1c6f63d',
  'revision_uid' => 1,
  'body' => array(
    'de' => array(
      0 => array(
        'value' => 'Radar ist mehr-sprachig.
<strong>Content translation:</strong> All groups and events can be posted in any of the available languages and then translated into any other one. A link to do so is visible for logged-in users directly on the pages.
<strong>Interface translation:</strong> The whole interface (labels, buttons etc.) can be translated as well. Some of that is provided automatically, but other bits of texts need to be translated manually for each language. Any user with the permissions of a <em>content editor</em> can translate them in the <a href="/admin/config/regional/translate/table">Translation table</a>.
<strong>More languages?</strong> Additional languages can be added at any time. Just tell us.',
        'summary' => '',
        'format' => 'rich_text_editor',
        'safe_value' => '<p>Radar ist mehr-sprachig.<br /><strong>Content translation:</strong> All groups and events can be posted in any of the available languages and then translated into any other one. A link to do so is visible for logged-in users directly on the pages.<br /><strong>Interface translation:</strong> The whole interface (labels, buttons etc.) can be translated as well. Some of that is provided automatically, but other bits of texts need to be translated manually for each language. Any user with the permissions of a <em>content editor</em> can translate them in the <a href="/admin/config/regional/translate/table">Translation table</a>.<br /><strong>More languages?</strong> Additional languages can be added at any time. Just tell us.</p>
',
        'safe_summary' => '',
      ),
    ),
    'en' => array(
      0 => array(
        'value' => 'Radar is multilingual - but needs translation.
<strong>Content translation:</strong> All groups and events can be posted in any of the available languages and then translated into any other one. A link to do so is visible for logged-in users directly on the pages.
<strong>Interface translation:</strong> The whole interface (labels, buttons etc.) can be translated as well. Some of that is provided automatically, but other bits of texts need to be translated manually for each language. Any user with the permissions of a <em>content editor</em> can translate them in the <a href="/admin/config/regional/translate/table">Translation table</a>.
<strong>More languages?</strong> Additional languages can be added at any time. Just tell us.',
        'summary' => '',
        'format' => 'rich_text_editor',
        'safe_value' => '<p>Radar is multilingual - but needs translation.<br /><strong>Content translation:</strong> All groups and events can be posted in any of the available languages and then translated into any other one. A link to do so is visible for logged-in users directly on the pages.<br /><strong>Interface translation:</strong> The whole interface (labels, buttons etc.) can be translated as well. Some of that is provided automatically, but other bits of texts need to be translated manually for each language. Any user with the permissions of a <em>content editor</em> can translate them in the <a href="/admin/config/regional/translate/table">Translation table</a>.<br /><strong>More languages?</strong> Additional languages can be added at any time. Just tell us.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'title_field' => array(
    'de' => array(
      0 => array(
        'value' => 'übersetzen',
        'format' => NULL,
        'safe_value' => 'übersetzen',
      ),
    ),
    'en' => array(
      0 => array(
        'value' => 'Translate',
        'format' => NULL,
        'safe_value' => 'Translate',
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
        'entity_id' => 492,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1415288318,
        'changed' => 1415288318,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-09-11 11:52:50 +0000',
);
  return $nodes;
}
