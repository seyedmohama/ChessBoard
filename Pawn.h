

#include "Chessman.h"

class Pawn : public Chessman
{
public:
  Pawn(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements();
};
