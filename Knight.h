
#include "Chessman.h"

class Knight : public Chessman
{
public:
  Knight(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
};
