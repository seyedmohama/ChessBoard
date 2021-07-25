#pragma once
#include "Chessman.h"

class Queen : public Chessman
{
  vector<pair<int, int>> GetXMovements(Cell** Board);
  vector<pair<int, int>> GetPlusMovements(Cell** Board);

public:
  Queen(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
};
