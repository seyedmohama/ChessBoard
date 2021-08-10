#ifndef UTILITY
#define UTILITY

#include <iostream>
#include <string>
#include <map>
#include "StackPage.hpp"

std::pair<int, int> positionExtraction(std::string);
std::string pieceNameByPosition(std::map< std::string, std::string> map, std::string position);

//	generate location code of chess board from a pair number
std::string generateLocationOfChessBoard( int, int);
void checkPawnInFrontHalfScore( StackPage *pStack);

void removeWidgetFromBoard( Gtk::Grid*, std::string);
void removeWidgetFromGrid( Gtk::Grid*, int, int);

#endif
