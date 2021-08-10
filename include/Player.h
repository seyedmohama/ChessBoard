#ifndef INC_PLAYER
#define INC_PLAYER

#include <iostream>

enum class PlayersColor { White = 0 , Black };

struct Player
{
  std::string Name;
  PlayersColor ColorOfPlayer;
  int Score = 0;
	int NegativScore = 0;

	bool doualMove = false;
};

#endif
