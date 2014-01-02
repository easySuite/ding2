core = 7.x
api = 2

; Projects
projects[ding_devel][type] = "module"
projects[ding_devel][download][type] = "git"
projects[ding_devel][download][url] = "git@github.com:ding2tal/ding_devel.git"
projects[ding_devel][download][tag] = "7.x-1.0-rc1"

projects[openruth][type] = "module"
projects[openruth][download][type] = "git"
projects[openruth][download][url] = "git@github.com:ding2tal/openruth.git"
projects[openruth][download][tag] = "7.x-1.0-rc1"

projects[ding_frontend][type] = "module"
projects[ding_frontend][download][type] = "git"
projects[ding_frontend][download][url] = "git@github.com:ding2tal/ding_frontend.git"
projects[ding_frontend][download][tag] = "7.x-1.0-rc1"

projects[ding_groups][type] = "module"
projects[ding_groups][download][type] = "git"
projects[ding_groups][download][url] = "git@github.com:ding2tal/ding_groups.git"
projects[ding_groups][download][tag] = "7.x-1.0-rc1"

projects[ding_ting_frontend][type] = "module"
projects[ding_ting_frontend][download][type] = "git"
projects[ding_ting_frontend][download][url] = "git@github.com:ding2tal/ding_ting_frontend.git"
projects[ding_ting_frontend][download][tag] = "7.x-1.0-rc1"

#projects[mkdru_ding_frontend][type] = "module"
#projects[mkdru_ding_frontend][download][type] = "git"
#projects[mkdru_ding_frontend][download][url] = "git@github.com:ding2tal/mkdru_ding_frontend.git"
#projects[mkdru_ding_frontend][download][tag] = "7.x-1.0-rc1"

projects[ding_content][type] = "module"
projects[ding_content][download][type] = "git"
projects[ding_content][download][url] = "git@github.com:ding2tal/ding_content.git"
projects[ding_content][download][tag] = "7.x-1.0-rc1"

projects[ding_example_content][type] = "module"
projects[ding_example_content][download][type] = "git"
projects[ding_example_content][download][url] = "git@github.com:ding2tal/ding_example_content.git"
projects[ding_example_content][download][tag] = "7.x-1.0-rc1"

projects[ding_frontpage][type] = "module"
projects[ding_frontpage][download][type] = "git"
projects[ding_frontpage][download][url] = "git@github.com:ding2tal/ding_frontpage.git"
projects[ding_frontpage][download][tag] = "7.x-1.0-rc1"

projects[ding_library][type] = "module"
projects[ding_library][download][type] = "git"
projects[ding_library][download][url] = "git@github.com:ding2tal/ding_library.git"
projects[ding_library][download][tag] = "7.x-1.0-rc1"

projects[ding_news][type] = "module"
projects[ding_news][download][type] = "git"
projects[ding_news][download][url] = "git@github.com:ding2tal/ding_news.git"
projects[ding_news][download][tag] = "7.x-1.0-rc1"

projects[ding_event][type] = "module"
projects[ding_event][download][type] = "git"
projects[ding_event][download][url] = "git@github.com:ding2tal/ding_event.git"
projects[ding_event][download][tag] = "7.x-1.0-rc1"

projects[ding_permissions][type] = "module"
projects[ding_permissions][download][type] = "git"
projects[ding_permissions][download][url] = "git@github.com:ding2tal/ding_permissions.git"
projects[ding_permissions][download][tag] = "7.x-1.0-rc1"

projects[ding_webtrends][type] = "module"
projects[ding_webtrends][download][type] = "git"
projects[ding_webtrends][download][url] = "git@github.com:ding2tal/ding_webtrends.git"
projects[ding_webtrends][download][tag] = "7.x-1.0-rc1"

projects[ding_session_cache][type] = "module"
projects[ding_session_cache][download][type] = "git"
projects[ding_session_cache][download][url] = "git@github.com:ding2tal/ding_session_cache.git"
projects[ding_session_cache][download][tag] = "7.x-1.0-rc1"

projects[ding_staff][type] = "module"
projects[ding_staff][download][type] = "git"
projects[ding_staff][download][url] = "git@github.com:ding2tal/ding_staff.git"
projects[ding_staff][download][tag] = "7.x-1.0-rc1"

projects[ding_varnish][type] = "module"
projects[ding_varnish][download][type] = "git"
projects[ding_varnish][download][url] = "git@github.com:ding2tal/ding_varnish.git"
projects[ding_varnish][download][tag] = "7.x-1.0-rc1"

projects[ding_contact][type] = "module"
projects[ding_contact][download][type] = "git"
projects[ding_contact][download][url] = "git@github.com:ding2tal/ding_contact.git"
projects[ding_contact][download][tag] = "7.x-1.0-rc1"

; Base theme
projects[ddbasic][type] = "theme"
projects[ddbasic][download][type] = "git"
projects[ddbasic][download][url] = "git@github.com:ding2tal/ddbasic.git"
projects[ddbasic][download][tag] = "7.x-1.0-rc1"

; Libraries
libraries[profiler][download][type] = "git"
libraries[profiler][download][url] = "http://git.drupal.org/project/profiler.git"
libraries[profiler][download][branch] = "7.x-2.0-beta1"
libraries[profiler][patch][0] = "http://drupal.org/files/profiler-reverse.patch"

; Contrib modules
projects[entitycache][subdir] = "contrib"
projects[entitycache][version] = "1.1"
projects[entitycache][patch][0] = "http://drupal.org/files/issues/2146543-ensure-entity-inserts-clears-caches.1.patch"

projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.7"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.7"

projects[memcache][subdir] = "contrib"
projects[memcache][version] = "1.0"

projects[apc][subdir] = "contrib"
projects[apc][version] = "1.0-beta4"

; Vejlebib modules
projects[ding_opening_hours][type] = "module"
projects[ding_opening_hours][download][type] = "git"
projects[ding_opening_hours][download][url] = "git@github.com:vejlebib/ding_opening_hours.git"
projects[ding_opening_hours][download][branch] = "master"

projects[vejlebib_views_panels][type] = "module"
projects[vejlebib_views_panels][download][type] = "git"
projects[vejlebib_views_panels][download][url] = "git@github.com:vejlebib/vejlebib_views_panels.git"
projects[vejlebib_views_panels][download][branch] = "master"

projects[ding_eresource][type] = "module"
projects[ding_eresource][download][type] = "git"
projects[ding_eresource][download][url] = "git@github.com:vejlebib/ding_eresource.git"
projects[ding_eresource][download][branch] = "master"

projects[ding_zerohit_form][type] = "module"
projects[ding_zerohit_form][download][type] = "git"
projects[ding_zerohit_form][download][url] = "git@github.com:vejlebib/ding_zerohit_form.git"
projects[ding_zerohit_form][download][branch] = "7.x-1.x"

projects[ting_extrasearch][type] = "module"
projects[ting_extrasearch][download][type] = "git"
projects[ting_extrasearch][download][url] = "git@github.com:vejlebib/ting_extrasearch.git"
projects[ting_extrasearch][download][branch] = "7.x-0.x"

; Vejlebib theme
projects[wellejus][type] = "theme"
projects[wellejus][download][type] = "git"
projects[wellejus][download][url] = "git@github.com:vejlebib/wellejus.git"
projects[wellejus][download][branch] = "7.x-1.x"

;-- OVERRIDDEN / FORKED FOR VEJLEBIB --
; Ting Covers must be vejlebib version
projects[ting_covers][type] = "module"
projects[ting_covers][download][type] = "git"
projects[ting_covers][download][url] = "git@github.com:vejlebib/ting_covers.git"
projects[ting_covers][download][branch] = "extra-covers"

; Ding User must be version with migrated users support
projects[ding_user][type] = "module"
projects[ding_user][download][type] = "git"
projects[ding_user][download][url] = "git@github.com:ding2tal/ding_user.git"
projects[ding_user][download][branch] = "support-user-migrations"

; alma must be version with migrated users support
projects[alma][type] = "module"
projects[alma][download][type] = "git"
projects[alma][download][url] = "git@github.com:ding2tal/alma.git"
projects[alma][download][branch] = "support_user_migrations"
