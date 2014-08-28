; radar profile make file.
core = 7.x
api = 2

;
;; Basic additions
;
projects[ctools][subdir] = "contrib"
projcets[ds][subdir] = "contrib"
projects[ds][version] = "2.6"
projects[entity][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[redirect][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[variable][subdir] = "contrib"
projects[variable][version] = "2.5"
projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.0-alpha5"
projects[uuid_features][subdir] = "contrib"
projects[uuid_features][version] = "1.0-alpha4"
projects[replicate][subdir] = "contrib"
projects[replicate][version] = "1.1"

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
projects[openlayers][download][revision] = "ccee1d33289f297f27345f3a19c45c00d468d2b4"

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
projects[eck][version] = "2.0-rc4"
projects[auto_entitylabel][subdir] = "contrib"
projects[auto_entitylabel][type] = "module"
projects[auto_entitylabel][download][url] = "git://git.drupal.org/project/auto_entitylabel.git"
projects[auto_entitylabel][download][revision] = "baf64896565faa5efe38900a8c881e17cef2499e"
projects[entityreference_prepopulate][subdir] = "contrib"
projects[entityreference_prepopulate][version] = "1.5"

;; date
; field
projects[date][subdir] = "contrib"
projects[date_repeat_entity][subdir] = "contrib"
projects[date_repeat_entity][version] = "2.0"
;
projects[calendar][subdir] = "contrib"
; ical
projects[date_ical][subdir] = "contrib"

projects[feeds][subdir] = "contrib"
; Need dev version for this issue now committed.
; https://www.drupal.org/node/1989196
projects[feeds][type] = "module"
projects[feeds][download][url] = "git://git.drupal.org/project/feeds.git"
projects[feeds][download][revision] = "a6abe508df0c215205e1e645254eafe2ea761bf0"
; Patch to enable inheritance of parent node fields.
; https://www.drupal.org/node/1074662#comment-8370161
projects[feeds][patch][1074662] = "https://www.drupal.org/files/issues/1074662-10-feeds-inherit_properties.patch-7.x-2.0-alpha8-2.patch"
; Fix unique test
; https://www.drupal.org/node/2328605#comment-9098023
projects[feeds][patch][2328605] = "https://www.drupal.org/files/issues/2328605-01-existingEntityId.patch"

projects[job_scheduler][subdir] = "contrib"
; libraries
libraries[iCalcreator][type] = "libraries"
libraries[iCalcreator][download][type] = "file"
libraries[iCalcreator][download][url] = "http://www.kigkonsult.se/downloads/dl.php?f=iCalcreator-2.10.23"

;; other fields
projects[email][subdir] = "contrib"
projects[link][subdir] = "contrib"
projects[email][subdir] = "contrib"
projects[phone][subdir] = "contrib"

; i18n
projects[entity_translation][subdir] = "contrib"
projects[i18n][subdir] = "contrib"
projects[i18nviews][subdir] = "contrib"
; No release availabel.
projects[i18nviews][type] = "module"
projects[i18nviews][download][url] = "git://git.drupal.org/project/i18nviews.git"
projects[i18nviews][download][revision] = "26bd52c4664b0fec8155273f0c0f3ab8a5a2ef66"

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

; Search - @TODO
projects[search_api][subdir] = "contrib"
projects[search_api_solr][subdir] = "contrib"
;libraries[SolrPhpClient][type] = "libraries"
;libraries[SolrPhpClient][download][type] = "file"
;libraries[SolrPhpClient][download][url] = "http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.tgz"
; add patches
projects[search_api_location][subdir] = "contrib"
; facet_api
projects[facetapi][subdir] = "contrib"
projects[facetapi][subdir] = "contrib"
; https://drupal.org/project/date_facets https://drupal.org/node/1834998

; Layout
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

; Migrate
projects[migrate][subdir] = "migrate"
projects[migrate_extras][subdir] = "migrate"

; Themes
projects[adaptivetheme][type] = "theme"

;
;; Devel
;
projects[devel][subdir] = "devel"
projects[devel_themer][subdir] = "devel"
projects[schema][subdir] = "devel"
projects[diff][subdir] = "devel"
projects[diff][version] = "3.2"
projects[masquerade][subdir] = "devel"
projects[masquerade][version] = "1.0-rc7"
