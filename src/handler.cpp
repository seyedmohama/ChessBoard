#include "handler.hpp"

Handler::Handler(std::string gn, std::string pfn, std::string psn){
	gameName = gn;
	playerFirstName = pfn;
	playerSecondName = psn;
}

Handler::~Handler(){
}

void Handler::set_gameName(std::string gn){
	gameName = gn;
}
void Handler::set_playerFirstName(std::string pfn){
	playerFirstName = pfn;
}
void Handler::set_playerSecondName(std::string psn){
	playerSecondName = psn;
}

std::string Handler::get_gameName(){ return gameName; }
std::string Handler::get_playerFirstName(){ return playerFirstName; }
std::string Handler::get_playerSecondName(){ return playerSecondName; }
