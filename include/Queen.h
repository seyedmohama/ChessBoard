#pragma once
#ifndef QUEEN
#define QUEEN

#include "Chessman.h"

enum class PlayersColor;

class Queen : public Chessman
{
  vector<pair<int, int>> GetXMovements(Cell** Board);
  vector<pair<int, int>> GetPlusMovements(Cell** Board);

public:
  Queen(int, int, PlayersColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
	~Queen() = default;
};

#endif
