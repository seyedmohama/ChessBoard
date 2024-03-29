#ifndef INC_HANDLER
#define INC_HANDLER

#include <iostream>
#include <string>
#include "Player.h"
#include "ChessBoard.h"

class Handler
{
public:
	Handler(std::string, std::string, std::string, StackPage *);
	void set_gameName(std::string);

	void firstPlayerAppendScore(size_t);
	void firstPlayerAppendNegativScore(size_t);
	void secondPlayerAppendScore(size_t);
	void secondPlayerAppendNegativScore(size_t);

	std::string get_gameName();

	void changeRound();
	PlayersColor get_round();
	Player *get_round_player();

	virtual ~Handler();

	int numberOfWhiteConvertPawn;
	int numberOfBlackConvertPawn;

	ChessBoard *pChessboard;

	Player player1, player2;

	bool dastBeMohre = false;

private:
	std::string gameName;
	PlayersColor round;

	StackPage *pStack;
};

#endif
