#pragma once
#include "Chessman.h"

enum class PlayersColor;

class Rook : public Chessman
{
public:
  Rook(int, int, PlayersColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
};
