; radar profile make file.
core = 7.x
api = 2

;
;; Basic additions
;
projects[captcha][subdir] = "contrib"
projects[captcha][version] ="1.1"
projects[captcha_pack][subdir] ="contrib"
projects[captcha_pack][version] = "1.0-alpha1"
projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"
projects[ds][subdir] = "contrib"
projects[ds][version] = "2.6"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.5"
projects[entity][patch][925212] = "https://www.drupal.org/files/925212-3-user-role-list.patch"

projects[features][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.4"
projects[views][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[variable][subdir] = "contrib"
projects[variable][version] = "2.5"
projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.0-alpha5"
projects[uuid_features][subdir] = "contrib"
projects[uuid_features][version] = "1.0-alpha4"
projects[replicate][subdir] = "contrib"
projects[replicate][version] = "1.1"

; urls
projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][type] = "module"
projects[globalredirect][download][url] = "git://git.drupal.org/project/globalredirect"
projects[globalredirect][download][revision] = "e7debe9a90aa97e79099b721d603b8d0e967ccca"
; Enable ignore hook to skip redirecting /api
; https://www.drupal.org/node/1438584
projects[globalredirect][patch][1438584] = "https://www.drupal.org/files/1438584-12_globalredirect_active_path.patch"

projects[subpathauto][subdir] = "contrib"
projects[subpathauto][version] = "1.3"

; views extension
projects[views_litepager][subdir] = "contrib"
projects[views_litepager][version] = "3.0"

projects[views_load_more][subdir] = "contrib"
projects[views_load_more][version] = "1.2"

projects[views_bulk_operations][subdir] = "contrib"

;
;; address and location
;

;fields
projects[addressfield][subdir] = "contrib"
; using git just because patch was written against it.
projects[addressfield][type] = "module"
projects[addressfield][download][url] = "git://git.drupal.org/project/addressfield.git"
projects[addressfield][download][revision] = "8c0e233f8b690743a586435ca713b478af3d98a1"
; UK addresses patch, till there is something better.
; https://www.drupal.org/node/1844918
projects[addressfield][patch][1844918] = "https://www.drupal.org/files/issues/1844918-07-alternate_street_address_order_uk.patch"

projects[geofield][subdir] = "contrib"
; requirements
projects[geophp][subdir] = "contrib"
projects[geocoder][subdir] = "contrib"

;
;; mapping
;

; openlayers for admin backend
projects[openlayers][subdir] = "contrib"
; Broken makefile library path, prevents makefile finishing.
projects[openlayers][type] = "module"
projects[openlayers][download][url] = "git://git.drupal.org/project/openlayers.git"
projects[openlayers][download][revision] = "d01aae20f83e23c0e67ef94027dc0002d42f432a"
; Library
libraries[openlayers][type] = "libraries"
libraries[openlayers][download][type] = "file"
libraries[openlayers][download][url] = "http://github.com/openlayers/openlayers/releases/download/release-2.13.1/OpenLayers-2.13.1.zip"

projects[proj4js][subdir] = "contrib"
projects[proj4js][version] = "1.2"

; leaflet for front end.
projects[leaflet][subdir] = "contrib"
libraries[leaflet][type] = "libraries"
libraries[leaflet][download][type] = "file"
libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.3.zip"
projects[leaflet_geojson][subdir] = "contrib"

; location entity, and autopopulation of location.
projects[eck][subdir] = "contrib"
; Git version patch is applied against.
projects[eck][type] = "module"
projects[eck][download][url] = "git://git.drupal.org/project/eck"
projects[eck][download][revision] = "6b2be8f39e976260df1a30a8dda73f6ede3a5c6a"
; UUID patch https://www.drupal.org/node/2037281#comment-9104489
projects[eck][patch][2037281] = "https://www.drupal.org/files/issues/eck-uuid-default-property-2037281-26.patch"

projects[auto_entitylabel][subdir] = "contrib"
projects[auto_entitylabel][type] = "module"
projects[auto_entitylabel][download][url] = "git://git.drupal.org/project/auto_entitylabel.git"
projects[auto_entitylabel][download][revision] = "baf64896565faa5efe38900a8c881e17cef2499e"
; Work around for eck update https://www.drupal.org/node/2329729
projects[auto_entitylabel][patch][2329729] = "https://www.drupal.org/files/issues/2329729-01-auto_entitylabel_eck.patch"
; UUID for entityreference
projects[entityreference_uuid][subdir] = "contrib"
projects[entityreference_uuid][type] = "module"
projects[entityreference_uuid][download][url] = "https://github.com/Gizra/entityreference_uuid.git"
projects[entityreference_uuid][download][revision] = "95feee9d7fa5cd9f8862d9cf7d3655a271bb66c2"
;
projects[entityreference_prepopulate][subdir] = "contrib"
projects[entityreference_prepopulate][version] = "1.5"

;
;; date
;

; field
projects[date][subdir] = "contrib"

projects[date_repeat_entity][subdir] = "contrib"
projects[date_repeat_entity][version] = "2.0"

projects[calendar][subdir] = "contrib"

; ical
projects[date_ical][subdir] = "contrib"

; timezone field - attached to locations
projects[tzfield][subdir] = "contrib"
projects[tzfield][type] = "module"
projects[tzfield][download][url] = "git://git.drupal.org/project/tzfield.git"
projects[tzfield][download][revision] = "7ceb3474405e6fccaa7d53b4161fe62fab73718a"
; Entity API patch
projects[tzfield][patch][1824306] = "https://www.drupal.org/files/allow_tzfield_to_work_with_entity_api-1824306-1.patch"
; Use core TZ list
projects[tzfield][patch][1952050] = "https://www.drupal.org/files/1952050-1-tzfield-system_time_zone.patch"

;
;; Feeds
;

projects[feeds][subdir] = "contrib"
; Need dev version for this issue now committed.
; https://www.drupal.org/node/1989196
projects[feeds][type] = "module"
projects[feeds][download][url] = "git://git.drupal.org/project/feeds.git"
projects[feeds][download][revision] = "0cc602dbe06f6c5c094ac904167e467c146268ef"
; Patch to enable inheritance of parent node fields.
; https://www.drupal.org/node/1074662#comment-8370161
projects[feeds][patch][1074662] = "https://www.drupal.org/files/issues/1074662-10-feeds-inherit_properties.patch-7.x-2.0-alpha8-2.patch"
; Fix unique test
; https://www.drupal.org/node/2328605#comment-9098023
projects[feeds][patch][2328605] = "https://www.drupal.org/files/issues/2328605-06-existingEntityId.patch"

projects[job_scheduler][subdir] = "contrib"
; libraries
libraries[iCalcreator][type] = "libraries"
libraries[iCalcreator][download][url] = "https://github.com/iCalcreator/iCalcreator.git"
libraries[iCalcreator][download][revision] = "e3dbec2cb3bb91a8bde989e467567ae8831a4026"

;; other fields
projects[email][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[email][subdir] = "contrib"
projects[phone][subdir] = "contrib"

; multilingual
projects[entity_translation][subdir] = "contrib"
projects[entity_translation][type] = "module"
projects[entity_translation][download][url] = "git://git.drupal.org/project/entity_translation"
projects[entity_translation][download][revision] = "182739794291db83ee7d2a74bfb2ae2a83d5bcea"

projects[i18n][subdir] = "contrib"
projects[i18nviews][subdir] = "contrib"
; No release availabel.
projects[i18nviews][type] = "module"
projects[i18nviews][download][url] = "git://git.drupal.org/project/i18nviews.git"
projects[i18nviews][download][revision] = "26bd52c4664b0fec8155273f0c0f3ab8a5a2ef66"
projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.0"
projects[lang_dropdown][subdir] = "contrib"
projects[lang_dropdown][version] = "2.5"
projects[title][subdir] = "contrib"
projects[title][version] = "1.0-alpha7"
projects[translate_set][subdir] = "contrib"
projects[translate_set][version] = "1.3"

; Organic groups
projects[entityreference][subdir] = "contrib"
projects[og][subdir] = "contrib"
projects[og_views][subdir] = "contrib"

projects[og_create_perms][subdir] = "contrib"
projects[og_language][subdir] = "contrib"
projects[og_node_link][subdir] = "contrib"
; @todo this one's from the commons root, don't know if we'll use
projects[radioactivity][subdir] = "contrib"
projects[radioactivity][version] = "2.9"

; contrib moderation
projects[flag][subdir] = "contrib"
projects[flag][version] = "3.5"

projects[flag_abuse][subdir] = "contrib"
projects[flag_abuse][version] = "2.0"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.7"

;
;; Search
;
projects[search_api][subdir] = "contrib"
projects[search_api_solr][subdir] = "contrib"
;libraries[SolrPhpClient][type] = "libraries"
;libraries[SolrPhpClient][download][type] = "file"
;libraries[SolrPhpClient][download][url] = "http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.tgz"

; Search API location - dev includes distance for results.
projects[search_api_location][subdir] = "contrib"
projects[search_api_location][type] = "module"
projects[search_api_location][download][url] = "git://git.drupal.org/project/search_api_location.git"
projects[search_api_location][download][revision] = "e7624bab910bd2ec4dccd0490e1cf762adc3d2cb"

; Search API sorts - so we can show things in date order.
projects[search_api_sorts][subdir] = "contrib"
; Fixes broken list page from version 1.5
projects[search_api_sorts][type] = "module"
projects[search_api_sorts][download][url] = "git://git.drupal.org/project/search_api_sorts.git"
projects[search_api_sorts][download][revision] = "de8b6feaea76aa27cf549c60221fea2b53f0d111"

; facet_api
projects[facetapi][subdir] = "contrib"
projects[facetapi][version] = "1.5"
projects[facetapi_bonus][subdir] = "contrib"
projects[facetapi_bonus][version] = "1.1"

; Search API integration for date facet only exists
; in dev. It has several fixes after first commit too.
projects[date_facets][subdir] = "contrib"
projects[date_facets][type] = "module"
projects[date_facets][download][url] = "git://git.drupal.org/project/date_facets.git"
projects[date_facets][download][revision] = "9037608bc2736096b9e30d94e843958aab27e584"

; Pretty paths
projects[facetapi_pretty_paths][subdir] = "contrib"
projects[facetapi_pretty_paths][version] = "1.1"

;
;; Services
;
projects[services][subdir] = "contrib"
projects[services][version] = "3.7"

projects[services_views][subdir] = "contrib"
; dev has basic argument handling added.
projects[services_views][type] = "module"
projects[services_views][download][url] = "git://git.drupal.org/project/services_views.git"
projects[services_views][download][revision] = "e30674c31c07ec11b530bc2741f8ef677d4ae9d2"
; patch to extend argument handling.
projects[services_views][patch][2330187] = "https://www.drupal.org/files/issues/2330187-02-arguments-declared-to-services.patch"

; stop-gap search_api solution
projects[services_entity][subdir] = "contrib"
projects[services_entity][version] = "2.0-alpha8"
projects[services_search_api][subdir] = "contrib"
projects[services_search_api][type] = "module"
projects[services_search_api][download][url] = "git://git.drupal.org/project/services_search_api.git"
projects[services_search_api][download][revision] = "a868e7a197925e36f01f3057a9f2d66c13e95c1f"
projects[services_search_api][patch][2072691] = "https://www.drupal.org/files/issues/services_search_api-2072691-6.patch"

;
;; Admin helpers.
;
projects[node_clone][subdir] = "contrib"
projects[node_clone][version] = "1.0-rc2"

projects[flood_control][subdir] = "contrib"
projects[flood_control][version] = "1.0"

;
;; Layout
;
projects[panels][subdir] = "contrib"

; UI enhancement
projects[admin_menu][subdir] = "contrib"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0-alpha2"

projects[better_exposed_filters][subdir] = "contrib"
projects[inline_entity_form][subdir] = "contrib"

projects[message][subdir] = "contrib"
projects[message][version] = "1.9"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[select_or_other][subdir] = "contrib"
projects[select_or_other][version] = "2.20"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][type] = "module"
projects[wysiwyg][download][url] = "git://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "898d022cf7d0b6c6a6e7d813199d561b4ad39f8b"

libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.5/ckeditor_4.4.5_standard.zip"

projects[hide_formats][subdir] = "contrib"
projects[hide_formats][version]  = "1.1"

; Migrate
projects[migrate][subdir] = "migrate"
projects[migrate_extras][subdir] = "migrate"

; Themes
projects[adaptivetheme][type] = "theme"

;
;; Devel
;
projects[diff][subdir] = "devel"
projects[diff][version] = "3.2"
projects[masquerade][subdir] = "devel"
projects[masquerade][version] = "1.0-rc7"
