#ifndef KING
#define KING

#include "Chessman.h"

enum class PlayersColor;

class King : public Chessman
{
public:
  King(int, int, PlayersColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);
	~King() = default;
};
#endif
