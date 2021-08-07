#include "../include/handler.hpp"
#include "Player.h"

Handler::Handler(std::string gn, std::string pfn, std::string psn){
	gameName = gn;
	firstPlayer.Name = pfn;
	secondPlayer.Name = psn;

	firstPlayer.Score = 0;
	secondPlayer.Score = 0;
	firstPlayer.NegativScore = 0;
	secondPlayer.NegativScore = 0;

	round = PlayersColor::White;

	numberOfWhiteConvertPawn = 0;
	numberOfBlackConvertPawn = 0;
}

Handler::~Handler(){
}

void Handler::set_gameName(std::string gn){
	gameName = gn;
}
void Handler::set_playerFirstName(std::string pfn){
	firstPlayer.Name = pfn;
}
void Handler::set_playerSecondName(std::string psn){
	secondPlayer.Name = psn;
}

std::string Handler::get_gameName(){ return gameName; }
void Handler::firstPlayerAppendScore(size_t number){
	firstPlayer.Score += number;
}
void Handler::firstPlayerAppendNegativScore(size_t number){
	firstPlayer.NegativScore += number;
}
void Handler::secondPlayerAppendScore(size_t number){
	secondPlayer.Score += number;
}
void Handler::secondPlayerAppendNegativScore(size_t number){
	secondPlayer.NegativScore += number;
}

void Handler::changeRound(){
	if(round == PlayersColor::White){
		round = PlayersColor::Black;
	}
	else{
		round = PlayersColor::White;
	}
}

PlayersColor Handler::get_round(){
	return round;
}

int Handler::get_numberOfWhiteConvertPawn(){
	return numberOfWhiteConvertPawn;
}
int Handler::get_numberOfBlackConvertPawn(){
	return numberOfBlackConvertPawn;
}
