#include <iostream>

enum class PlayersColor { White , Black };

struct Player
{
  std::string Name;
  PlayersColor ColorOfPlayer;
  int Score = 0;
};
