project('chessap', 'cpp',
          version: '0.1.0',
    meson_version: '>= 0.50.0',
  default_options: [ 'warning_level=2',
                     'cpp_std=c++11',
                   ],
)
gtkmm_dep = dependency('gtkmm-3.0')
src = [

#	GUI
  'src/main.cpp',
  'src/gui/MainWindow.cpp',
  'src/gui/StackPage.cpp',
	'src/handler.cpp',
	'src/gui/drag_drop.cpp',
	'src/gui/utility.cpp',
	
#	LOGIC
#	'src/Bishop.cpp',
#	'src/Cell.cpp',
#	'src/ChessBoard.cpp',
#	'src/Chessman.cpp',
#	'src/King.cpp',
#	'src/Knight.cpp',
#	'src/Pawn.cpp',
#	'src/Queen.cpp',
#	'src/Rook.cpp'
]
includes = include_directories(
  'include',
  'include/gui'
)

executable('ChessAP', src , dependencies : gtkmm_dep, include_directories : includes)

