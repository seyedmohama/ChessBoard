#include "../include/handler.hpp"
#include "Player.h"

Handler::Handler(std::string gn, std::string pfn, std::string psn){
	gameName = gn;

	player1.Name = pfn;
	player2.Name = psn;

		pChessboard = new ChessBoard( &player1, &player2);

player1.Score = 0;
	player2.Score = 0;
	player1.NegativScore = 0;
	player2.NegativScore = 0;

	round = PlayersColor::White;

	numberOfWhiteConvertPawn = 0;
	numberOfBlackConvertPawn = 0;
}

Handler::~Handler(){
}

void Handler::set_gameName(std::string gn){
	gameName = gn;
}

std::string Handler::get_gameName(){ return gameName; }
void Handler::firstPlayerAppendScore(size_t number){
	player1.Score += number;
}
void Handler::firstPlayerAppendNegativScore(size_t number){
	player1.NegativScore += number;
}
void Handler::secondPlayerAppendScore(size_t number){
	player2.Score += number;
}
void Handler::secondPlayerAppendNegativScore(size_t number){
	player2.NegativScore += number;
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
