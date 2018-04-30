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
