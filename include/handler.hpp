#ifndef INC_HANDLER
#define INC_HANDLER

#include <iostream>
#include <string>
#include "Player.h"

class Handler{
	public:
		Handler(std::string, std::string, std::string);
		void set_gameName(std::string);
		void set_playerFirstName(std::string);
		void set_playerSecondName(std::string);
		void firstPlayerAppendScore(size_t);
		void firstPlayerAppendNegativScore(size_t);
		void secondPlayerAppendScore(size_t);
		void secondPlayerAppendNegativScore(size_t);
		std::string get_gameName();
		void changeRound();
		PlayersColor get_round();
		virtual ~Handler();

		struct Player firstPlayer;
		struct Player secondPlayer;

		int get_numberOfWhiteConvertPawn();
		int get_numberOfBlackConvertPawn();
		int numberOfWhiteConvertPawn;
		int numberOfBlackConvertPawn;
	private:
		std::string playerFirstName;
		std::string playerSecondName;
		std::string gameName;
		int firstPlayerScore;
		int secondPlayerScore;
		int firstPlayerNegativScore;
		int secondPlayerNegativScore;
		PlayersColor round;
};

#endif
