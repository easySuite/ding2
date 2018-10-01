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

projects[kultur_events][type]             = "module"
projects[kultur_events][subdir]           = ""
projects[kultur_events][download][type]   = "git"
projects[kultur_events][download][url]    = "git@github.com:easySuite/kultur_events.git"
projects[kultur_events][download][branch] = "development"

projects[kultur_frontpage][type]             = "module"
projects[kultur_frontpage][subdir]           = ""
projects[kultur_frontpage][download][type]   = "git"
projects[kultur_frontpage][download][url]    = "git@github.com:easySuite/kultur_frontpage.git"
projects[kultur_frontpage][download][branch] = "development"

projects[kultur_calendar][type]             = "module"
projects[kultur_calendar][subdir]           = ""
projects[kultur_calendar][download][type]   = "git"
projects[kultur_calendar][download][url]    = "git@github.com:easySuite/kultur_calendar.git"
projects[kultur_calendar][download][branch] = "culture_development"

projects[kultur_subtheme][type]             = "theme"
projects[kultur_subtheme][subdir]           = ""
projects[kultur_subtheme][download][type]   = "git"
projects[kultur_subtheme][download][url]    = "git@github.com:easySuite/kultur_subtheme.git"
projects[kultur_subtheme][download][branch] = "develop"

projects[similar][subdir] = "contrib"
projects[similar][version] = "2.0-beta6"

projects[domain_taxonomy][type]             = "module"
projects[domain_taxonomy][subdir]           = "contrib"
projects[domain_taxonomy][download][type]   = "git"
projects[domain_taxonomy][download][url]    = "https://git.drupal.org/project/domain_taxonomy.git"
projects[domain_taxonomy][download][revision] = "e489da08999708c9830cc25aa6d432e0a738be9f"
