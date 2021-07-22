#pragma once
#include "Chessman.h"

class Rook : public Chessman
{
public:
  Rook(int, int, ChessColor);
  virtual std::vector<std::pair<int, int>> GetMovements();
};
