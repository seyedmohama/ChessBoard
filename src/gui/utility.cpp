#include "utility.hpp"
#include "handler.hpp"

std::pair<int, int> positionExtraction(std::string input){
  std::pair<int, int> pair;
  char ch = input[0];
  ch -= 49;
  std::string str1, str2;
  str1 += ch;
  str2 += input[1];
  pair.first = std::stoi(str1);
  pair.second = (std::stoi(str2) - 1);

  return pair;
}

std::pair<int, int> gridPositionExtraction(std::string input){
  std::pair<int, int> pair;
  char ch = input[0], nm = input[1];
  ch -= 49;
  std::string str1, str2;
  str1 += ch;
  str2 += nm;
  pair.first = std::stoi(str1);
  pair.second = (8 - std::stoi(str2));

  return pair;
}

std::string pieceNameByPosition(std::map< std::string, std::string> map, std::string position){
	for( auto it = map.cbegin(); it != map.cend(); it++){
    if((*it).second == position){
      return (*it).first;
		}
	}
	return "";
}

std::string generateLocationOfChessBoard( int x, int y){
	x += 97; // Convert to ascii code characters {a, b, c, d, e, f, g, h}
	y += 1;
	char a = x;
	std::string result;
	result += a;
	result += std::to_string( y);

	return result;
}

void checkPawnInFrontHalfScore( StackPage *pStack){
	if(pStack->piece[1] == 'p'){

		std::string str;
		str += pStack-> piece[2];
		int n = std::stoi(str);

		if( ( pStack->piece[0] == 'w') && ( positionExtraction( pStack-> cellDestination).second > 3)){

			for (int i = 0; i < (pStack-> whitePawnsInFrontHalf.size()) ;i++){
				if( pStack-> whitePawnsInFrontHalf.at(i) == n){
					return;
				}
			}
			pStack-> handler-> get_round_player()-> Score += 3;
			pStack-> whitePawnsInFrontHalf.push_back( n);
			std::cout << pStack-> handler-> get_round_player()-> Name << " get 3 points" << std::endl;
		}
		if(pStack->piece[0] == 'b' && positionExtraction( pStack-> cellDestination).second <= 3){
			for (int i = 0; i < (pStack-> whitePawnsInFrontHalf.size()) ;i++){
				if( pStack-> whitePawnsInFrontHalf.at(i) == n){
					return;
				}
			}
			pStack-> handler-> get_round_player()-> Score += 3;
			pStack-> whitePawnsInFrontHalf.push_back( n);
			std::cout << pStack-> handler-> get_round_player()-> Name << " get 3 points" << std::endl;
		}

	}
}

void removeWidgetFromBoard( Gtk::Grid *grid, std::string cell){
	Gtk::Widget *pWidget = grid-> get_child_at( positionExtraction( cell) .first, positionExtraction( cell) .second);

	grid-> remove( *pWidget);
}

void removeWidgetFromGrid( Gtk::Grid *grid, int x, int y){
	Gtk::Widget *pWidget = grid-> get_child_at( x, y);

	grid-> remove( *pWidget);
}

