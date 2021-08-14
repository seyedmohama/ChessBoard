#ifndef PAWN
#define PAWN


#include "Chessman.h"

enum class PlayersColor;

class Pawn : public Chessman
{
public:
  bool FirstMove = true;
  Pawn(int, int, PlayersColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
  virtual void Move(std::pair<int, int>);
};
#endif