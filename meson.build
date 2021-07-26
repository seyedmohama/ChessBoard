project('chessap', 'cpp',
          version: '0.1.0',
    meson_version: '>= 0.50.0',
  default_options: [ 'warning_level=2',
                     'cpp_std=c++11',
                   ],
)
gtkmm_dep = dependency('gtkmm-3.0')
src = [
  'src/main.cpp',
  'src/gui/MainWindow.cpp',
  'src/gui/StackPage.cpp',
	'src/handler.cpp',
	'src/gui/drag_drop.cpp'
]
includes = include_directories(
  'include',
  'include/gui'
)

executable('ChessAP', src , dependencies : gtkmm_dep, include_directories : includes)

