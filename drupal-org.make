; radar profile make file.
core = 7.x
api = 2

; Basic additions
projects[ctools][subdir] = "contrib"
projects[entity][subdir] = "contrib"
projects[features][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[redirect][subdir] = "contrib"
projects[pathauto][subdir] = "contrib"
projects[token][subdir] = "contrib"
projects[views_bulk_operations][subdir] = "contrib"

;; address and location
;fields
projects[addressfield][subdir] = "contrib"
projects[geofield][subdir] = "contrib"
; requirements
projects[geophp][subdir] = "contrib"
projects[geocoder][subdir] = "contrib"
; mapping
projects[openlayers][subdir] = "contrib"
; Broken makefile library path, prevents makefile finishing.
projects[openlayers][type] = "module"
projects[openlayers][download][url] = "git://git.drupal.org/project/openlayers.git"
projects[openlayers][download][revision] = "ccee1d33289f297f27345f3a19c45c00d468d2b4"
projects[leaflet][subdir] = "contrib"
libraries[leaflet][type] = "libraries"
libraries[leaflet][download][type] = "file"
libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.3.zip"
projects[leaflet_geojson][subdir] = "contrib"

;; date
; field
projects[date][subdir] = "contrib"
;
projects[calendar][subdir] = "contrib"
; ical
projects[date_ical][subdir] = "contrib"
projects[feeds][subdir] = "contrib"
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
projects[better_exposed_filters][subdir] = "contrib"
projects[inline_entity_form][subdir] = "contrib"

; Migrate
projects[migrate][subdir] = "migrate"
projects[migrate_extras][subdir] = "migrate"

; Devel
projects[devel][subdir] = "devel"
projects[devel_themer][subdir] = "devel"
projects[schema][subdir] = "devel"

; Themes
projects[adaptivetheme][type] = "theme"
