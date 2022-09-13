project('algorun', 'c')

gtkdep = dependency('gtk4')

gnome=import('gnome')

sourcefiles=files('main.c', 'ball.c', 'ball.h', 'scene.h')

executable('algorun', sourcefiles,  dependencies: gtkdep)
