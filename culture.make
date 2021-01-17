core = 7.x
api = 2

; Include ding2 make file
includes[ding2] = "easyopac.make"

projects[culture][type]             = "theme"
projects[culture][subdir]           = ""
projects[culture][download][type]   = "git"
projects[culture][download][url]    = "git@github.com:easySuite/culture.git"
projects[culture][download][branch] = "develop"

projects[culture_frontend][type]             = "module"
projects[culture_frontend][subdir]           = ""
projects[culture_frontend][download][type]   = "git"
projects[culture_frontend][download][url]    = "git@github.com:easySuite/culture_frontend.git"
projects[culture_frontend][download][branch] = "develop"

projects[kultur_calendar][type]             = "module"
projects[kultur_calendar][subdir]           = ""
projects[kultur_calendar][download][type]   = "git"
projects[kultur_calendar][download][url]    = "git@github.com:easySuite/kultur_calendar.git"
projects[kultur_calendar][download][branch] = "culture_development"

projects[similar][subdir] = "contrib"
projects[similar][version] = "2.0-beta6"

projects[domain_taxonomy][type]             = "module"
projects[domain_taxonomy][subdir]           = "contrib"
projects[domain_taxonomy][download][type]   = "git"
projects[domain_taxonomy][download][url]    = "https://git.drupal.org/project/domain_taxonomy.git"
projects[domain_taxonomy][download][revision] = "e489da08999708c9830cc25aa6d432e0a738be9f"

projects[ding_event_calendar][type]             = "module"
projects[ding_event_calendar][subdir]           = ""
projects[ding_event_calendar][download][type]   = "git"
projects[ding_event_calendar][download][url]    = "git@github.com:easySuite/ding_event_calendar.git"
projects[ding_event_calendar][download][branch] = "develop-culture"

projects[ding_nodelist][type]             = "module"
projects[ding_nodelist][subdir]           = ""
projects[ding_nodelist][download][type]   = "git"
projects[ding_nodelist][download][url]    = "git@github.com:easySuite/ding_nodelist.git"
projects[ding_nodelist][download][branch] = "culture-development"
