#include "handler.hpp"

Handler::Handler(std::string gn, std::string pfn, std::string psn){
	gameName = gn;
	playerFirstName = pfn;
	playerSecondName = psn;

	firstPlayerScore = 0;
	secondPlayerScore = 0;
	firstPlayerNegativScore = 0;
	secondPlayerNegativScore = 0;

	round = Color::White;
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
void Handler::firstPlayerAppendScore(size_t number){
	firstPlayerScore++;
}
void Handler::firstPlayerAppendNegativScore(size_t number){
	firstPlayerNegativScore++;
}
void Handler::secondPlayerAppendScore(size_t number){
	secondPlayerScore++;
}
void Handler::secondPlayerAppendNegativScore(size_t number){
	secondPlayerNegativScore++;
}

void Handler::changeRound(){
	if(round == Color::White){
		round = Color::Black;
	}
	else{
		round = Color::White;
	}
}

std::string Handler::get_round(){
	if(round == Color::White){
		return "White";
	}
	if(round == Color::Black){
		return "Black";
	}
}
