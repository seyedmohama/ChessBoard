#pragma once
#include <iostream>

#include "Cell.h"
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"


class ChessBoard
{
private:
  Cell** Board;

public:
  void initBoard();
  Cell** GetBoard();
  vector<pair<int, int>> GetFreeMovements(pair<int, int> cell);
  virtual void Move(pair<int, int> position, pair<int, int> toPosition);
  // int checkmat(int x , int y);// int king.x king.y
};
