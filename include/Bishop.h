#ifndef BISHOP
#define BISHOP

#include "Chessman.h"

enum class PlayersColoe;

class Bishop : public Chessman
{
public:
  Bishop(int, int, PlayersColor);
  virtual vector<pair<int, int>> GetMovements(Cell **Board);
};

#endif
