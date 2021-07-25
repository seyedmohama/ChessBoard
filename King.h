
#include "Chessman.h"

class King : public Chessman
{
public:
  King(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);

};
