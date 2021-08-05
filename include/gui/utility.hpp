#ifndef UTILITY
#define UTILITY

#include <iostream>
#include <string>
#include <map>

std::pair<int, int> positionExtraction(std::string);
std::string pieceNameByPosition(std::map< std::string, std::string> map, std::string position);

//	generate location code of chess board from a pair number
std::string generateLocationOfChessBoard( int, int);
#endif
