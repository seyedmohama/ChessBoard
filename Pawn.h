

#include "Chessman.h"

class Pawn : public Chessman
{
public:
  bool FirstMove = true;
  Pawn(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
  virtual void Move(std::pair<int, int>);
};
