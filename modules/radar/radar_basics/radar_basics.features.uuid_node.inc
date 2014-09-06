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
    'original' => NULL,
    'data' => array(),
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
        'entity_id' => 13,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1409408888,
        'changed' => 1410001521,
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
If you want to post an event into two or more groups, do so from the group that where the event will take place. That way the correct location will automatically be added.
Some groups are open for everybody to post, in others posts from non-members of that group will be hold up for moderation.

As a registered user, you can add a new group at http://radar.iskra.net/node/add/group . The group will not be visible untli an administrator has published it. 
You will then also be made an administration manager of that group. As such you can add other users to the group and moderate events posted by other into your group.',
        'summary' => '',
        'format' => 'rich_text_editor',
        'safe_value' => '<p>Radar is driven by the groups that use it. Therefore all events have to be post into a group. </p>
<p>To do so, simply go to the page of that group and click on "Create an event". The location of that group is added automatically to your event, but you can change to use another existing location as well as by adding a new location.<br />
If you want to post an event into two or more groups, do so from the group that where the event will take place. That way the correct location will automatically be added.<br />
Some groups are open for everybody to post, in others posts from non-members of that group will be hold up for moderation.</p>
<p>As a registered user, you can add a new group at <a href="http://radar.iskra.net/node/add/group">http://radar.iskra.net/node/add/group</a> . The group will not be visible untli an administrator has published it.<br />
You will then also be made an administration manager of that group. As such you can add other users to the group and moderate events posted by other into your group.</p>
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
    'original' => NULL,
    'data' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-08-26 11:00:52 +0000',
);
  return $nodes;
}
