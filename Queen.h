#pragma once
#include "Chessman.h"
#include "Bishop.h"
#include "Rook.h"

class Queen : public Chessman
{
public:
  Queen(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
};
