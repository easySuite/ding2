core = 7.x
api = 2

defaults[projects][subdir] = "contrib"

; Contrib modules
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.2"

projects[admin_views][subdir] = "contrib"
projects[admin_views][version] = "1.5"

projects[apc][subdir] = "contrib"
projects[apc][version] = "1.0-beta4"

projects[autologout][subdir] = "contrib"
projects[autologout][version] = "4.4"

projects[autosave][subdir] = "contrib"
projects[autosave][version] = "2.2"

projects[block_access][subdir] = "contrib"
projects[block_access][version] = "1.6"

projects[cache_actions][subdir] = "contrib"
projects[cache_actions][version] = "2.0-alpha5"

projects[ckeditor_link][subdir] = "contrib"
projects[ckeditor_link][version] = "2.4"

projects[conditional_styles][subdir] = "contrib"
projects[conditional_styles][version] = "2.2"

projects[cs_adaptive_image][subdir] = "contrib"
projects[cs_adaptive_image][version] = "1.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.9"
projects[ctools][patch][] = "https://www.drupal.org/files/issues/ctools-require_once_fatal_error-1032054-74.patch"

projects[date][subdir] = "contrib"
projects[date][version] = "2.9"

projects[dibs][subdir] = "contrib"
projects[dibs][version] = "1.4"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[domain][subdir] = "contrib"
projects[domain][version] = "3.12"

projects[domain_ctools][subdir] = "contrib"
projects[domain_ctools][version] = "1.3"

projects[domain_menu_access][subdir] = "contrib"
projects[domain_menu_access][version] = "1.2"

projects[domain_variable][subdir] = "contrib"
projects[domain_variable][version] = "1.1"

; The patch ensures that file upload patch is created on file upload. It normally
; created on settings form save, but as we use feature this do not work.
; See https://www.drupal.org/node/2410241
projects[dynamic_background][subdir] = "contrib"
projects[dynamic_background][version] = "2.0-rc4"
projects[dynamic_background][patch][] = "https://www.drupal.org/files/issues/create_file_path-2410241-1.patch"

projects[email][subdir] = "contrib"
projects[email][version] = "1.3"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.7"

projects[entitycache][subdir] = "contrib"
projects[entitycache][version] = "1.5"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[eu_cookie_compliance][subdir] = "contrib"
projects[eu_cookie_compliance][version] = "1.14"

projects[expire][subdir] = "contrib"
projects[expire][version] = "2.0-rc4"

projects[features][subdir] = "contrib"
projects[features][version] = "2.10"

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = "1.0"

projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-alpha8"

projects[fences][type] = "module"
projects[fences][subdir] = "contrib"
projects[fences][version] = "1.0"
projects[fences][patch][0] = "http://drupal.org/files/field_for_wrapper_css_class-1679684-3.patch"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.1"

projects[file_entity][subdir] = "contrib"
projects[file_entity][version] = "2.0-beta3"

projects[flag][subdir] = "contrib"
projects[flag][version] = "2.2"

projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.7"

projects[formblock][type] = "module"
projects[formblock][subdir] = "contrib"
projects[formblock][download][type] = "git"
projects[formblock][download][url] = "http://git.drupal.org/project/formblock.git"
projects[formblock][download][revision] = "2d94c83"

projects[geocoder][subdir] = "contrib"
projects[geocoder][version] = "1.3"

projects[geofield][subdir] = "contrib"
projects[geofield][version] = "1.2"

projects[geophp][subdir] = "contrib"
projects[geophp][version] = "1.7"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.5"
projects[globalredirect][patch][] = "http://drupal.org/files/language_redirect_view_node-1399506-2.patch"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.3"

projects[imagemagick][subdir] = "contrib"
projects[imagemagick][version] = "1.0"

projects[image_resize_filter][subdir] = "contrib"
projects[image_resize_filter][version] = "1.16"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.7"

projects[languageicons][subdir] = "contrib"
projects[languageicons][version] = "1.1"

projects[leaflet][subdir] = "contrib"
projects[leaflet][version] = "1.3"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.3"

projects[link][subdir] = "contrib"
projects[link][version] = "1.4"

projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.1"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.13"

projects[maintenance_mode_api][subdir] = "contrib"
projects[maintenance_mode_api][version] = "1.0-beta1"

projects[media][subdir] = "contrib"
projects[media][version] = "2.0-beta2"

projects[media_vimeo][subdir] = "contrib"
projects[media_vimeo][version] = "2.1"

projects[media_youtube][subdir] = "contrib"
projects[media_youtube][version] = "3.0"

projects[memcache][subdir] = "contrib"
projects[memcache][version] = "1.0"

projects[menu_block][type] = "module"
projects[menu_block][subdir] = "contrib"
projects[menu_block][download][type] = "git"
projects[menu_block][download][url] = "http://git.drupal.org/project/menu_block.git"
projects[menu_block][download][revision] = "32ab1cf08b729c93302455d67dd05f64ad2fc056"
projects[menu_block][patch][0] = "http://drupal.org/files/menu_block-ctools-693302-96.patch"

projects[menu_breadcrumb][subdir] = "contrib"
projects[menu_breadcrumb][version] = "1.6"

projects[menu_position][subdir] = "contrib"
projects[menu_position][version] = "1.2"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0"

; NanoSOAP is currently not placed in contrib at this was not the case
; when using recursive make files.
projects[nanosoap][subdir] = "contrib"
projects[nanosoap][version] = "1.0"
projects[nanosoap][patch][] = "http://drupal.org/files/nanosoap-curloptions-1943732.patch"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.1"

projects[node_clone][subdir] = "contrib"
projects[node_clone][version] = "1.0"

projects[node_export][subdir] = "contrib"
projects[node_export][version] = "3.1"

projects[oembed][subdir] = "contrib"
projects[oembed][version] = "1.0-rc2"
; Remove hook_system_info_alter() to allow installing modules depending on oembed, after oembed is installed.
projects[oembed][patch][] = "http://www.drupal.org/files/issues/oembed-remove_hook_sytem_info_alter-2502817-1.patch"

projects[og][subdir] = "contrib"
projects[og][version] = "2.9"

projects[og_menu][subdir] = "contrib"
projects[og_menu][version] = "3.1"

; This version is patch to make the next/prev links work.
projects[opening_hours][type] = "module"
projects[opening_hours][subdir] = "contrib"
projects[opening_hours][download][type] = "git"
projects[opening_hours][download][url] = "http://git.drupal.org/project/opening_hours.git"
projects[opening_hours][download][revision] = "81146d1e8ab63ca70976596d928e4ec46dfdfd57"
projects[opening_hours][patch][] = "http://drupal.org/files/issues/is-string-check-2260505-2.patch"
projects[opening_hours][patch][] = "http://drupal.org/files/issues/change-path-2270935-2.patch"
projects[opening_hours][patch][] = "http://www.drupal.org/files/issues/Issue620-single-minute-opening-hours.patch"
projects[opening_hours][patch][] = "https://www.drupal.org/files/issues/opening_hours-2194867-D7.patch"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.5"

projects[panels_breadcrumbs][subdir] = "contrib"
projects[panels_breadcrumbs][version] = "2.2"

projects[panels_everywhere][subdir] = "contrib"
projects[panels_everywhere][version] = "1.0-rc2"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.3"

projects[pm_existing_pages][subdir] = "contrib"
projects[pm_existing_pages][version] = "1.4"

projects[proj4js][subdir] = "contrib"
projects[proj4js][version] = "1.2"

projects[profile2][subdir] = "contrib"
projects[profile2][version] = "1.3"

projects[realname][subdir] = "contrib"
projects[realname][version] = "1.3"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc3"

projects[relation][subdir] = "contrib"
projects[relation][version] = "1.0"

projects[role_delegation][subdir] = "contrib"
projects[role_delegation][version] = "1.1"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.9"

projects[scheduler][subdir] = "contrib"
projects[scheduler][version] = "1.5"

projects[secure_permissions][subdir] = "contrib"
projects[secure_permissions][version] = "1.6"
projects[secure_permissions][patch][] = "http://drupal.org/files/issues/2188491-features-multilingual-2.patch"
projects[secure_permissions][patch][] = "http://drupal.org/files/issues/secure_permissions-dont_disable_all_permissions-2499607-3.patch"

projects[similarterms][subdir] = "contrib"
projects[similarterms][version] = "2.5"

projects[sslproxy][subdir] = "contrib"
projects[sslproxy][version] = "1.0"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[tipsy][subdir] = "contrib"
projects[tipsy][version] = "1.0-rc1"

projects[token][subdir] = "contrib"
projects[token][version] = "1.6"

projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.2"

projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.0-beta1"

projects[variable][subdir] = "contrib"
projects[variable][version] = "2.5"

projects[varnish][subdir] = "contrib"
projects[varnish][version] = "1.1"

projects[virtual_field][subdir] = "contrib"
projects[virtual_field][version] = "1.2"

projects[views][subdir] = "contrib"
projects[views][version] = "3.14"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.3"

projects[views_responsive_grid][subdir] = "contrib"
projects[views_responsive_grid][version] = "1.3"

projects[view_unpublished][subdir] = "contrib"
projects[view_unpublished][version] = "1.2"

projects[webform][subdir] = "contrib"
projects[webform][version] = "4.13"

projects[workbench][subdir] = "contrib"
projects[workbench][version] = "1.2"

projects[workflow][subdir] = "contrib"
projects[workflow][version] = "2.5"
projects[workflow][patch][] = "http://www.drupal.org/files/issues/features_import-2484297-10.patch"
; Prevent fatal errors on cron when using Scheduler, https://www.drupal.org/node/2499193.
projects[workflow][patch][] = "https://www.drupal.org/files/issues/workflow-php_fatal_error_call-2499193-7-2.5.patch"

; This revision support the CKEditor 4.x, and can be used until a new version is tagged.
projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "7981731f4f3db2f932419499d2ec13a073e9b88f"

projects[ask_vopros][type] = "module"
projects[ask_vopros][subdir] = "contrib"
projects[ask_vopros][download][type] = "git"
projects[ask_vopros][download][url] = "git@github.com:Biblioteksvagten/ask_vopros.git"
projects[ask_vopros][download][tag] = "1.1"

; Libraries
libraries[bpi-client][destination] = "modules/bpi/lib"
libraries[bpi-client][download][type] = "git"
libraries[bpi-client][download][url] = "http://github.com/ding2/bpi-client.git"
libraries[bpi-client][download][branch] = "master"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.7/ckeditor_4.4.7_full.zip
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[chosen][download][type] = "get"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/1.4.2/chosen_v1.4.2.zip"
libraries[chosen][destination] = "libraries"

libraries[leaflet][download][type] = "get"
libraries[leaflet][download][url] = "http://cdn.leafletjs.com/downloads/leaflet-0.7.3.zip"
libraries[leaflet][directory_name] = "leaflet"
libraries[leaflet][destination] = "libraries"

libraries[profiler][download][type] = "git"
libraries[profiler][download][url] = "http://git.drupal.org/project/profiler.git"
libraries[profiler][download][branch] = "7.x-2.0-beta1"
; https://drupal.org/node/1328796, keep dependency order of base profile.
libraries[profiler][patch][0] = "http://drupal.org/files/profiler-reverse.patch"

libraries[ting-client][download][type] = "git"
libraries[ting-client][download][url] = "http://github.com/ding2/ting-client.git"
libraries[ting-client][download][branch] = "master"
libraries[ting-client][destination] = "modules/ting/lib"

libraries[zen-grids][download][type] = "git"
libraries[zen-grids][download][url] = "https://github.com/JohnAlbin/zen-grids.git"
libraries[zen-grids][download][tag] = "1.4"
libraries[zen-grids][destination] = "libraries"

; easyDDB contribution modules
projects[extlink][version]                  = "1.18"
projects[extlink][subdir]                   = "contrib"

projects[opengraph_meta][version]           = "1.3"
projects[opengraph_meta][subdir]            = "contrib"

projects[features_override][version]        = "2.0-rc1"
projects[features_override][subdir]         = "contrib"

projects[field_reference_delete][version]   = "1.0-beta1"
projects[field_reference_delete][subdir]    = "contrib"

projects[memcache_storage][version]         = "1.4"
projects[memcache_storage][subdir]          = "contrib"

projects[search404][version]                = "1.3"
projects[search404][subdir]                 = "contrib"

projects[xmlsitemap][version]               = "2.0"
projects[xmlsitemap][subdir]                = "contrib"

projects[references][version]               = "2.1"
projects[references][subdir]                = "contrib"

projects[search_api][version]               = "1.14"
projects[search_api][subdir]                = "contrib"

projects[search_api_db][version]            = "1.4"
projects[search_api_db][subdir]             = "contrib"

projects[taxonomy_menu][version]            = "1.4"
projects[taxonomy_menu][subdir]             = "contrib"
projects[taxonomy_menu][patch][]            = "http://drupal.org/files/issues/taxonomy_menu-variable-and-array-check.patch"

projects[linkchecker][version]              = "1.2"
projects[linkchecker][subdir]               = "contrib"

projects[httprl][version]                   = "1.14"
projects[httprl][subdir]                    = "contrib"
