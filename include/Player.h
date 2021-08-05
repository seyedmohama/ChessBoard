#include <iostream>

enum  PlayersColor { White , Black };

struct Player
{
  std::string Name;
  PlayersColor ColorOfPlayer;
  int Score = 0;
};
