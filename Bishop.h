#ifndef BISHOP
#define BISHOP


#include "Chessman.h"


class Bishop : public Chessman
{
public:
  Bishop(int, int, ChessColor);
  virtual vector<pair<int, int>> GetMovements();
};

#endif
