
#include "Chessman.h"

class Queen : public Chessman
{
public:
  Queen(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements();
};
