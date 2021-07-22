#pragma once
#include <iostream>

#include "Cell.h"


class ChessBoard
{
private:
  Cell** Board;

public:
  void initBoard();
  Cell** GetBoard();
  vector<pair<int, int>> GetFreeMovements(pair<int, int> cell);
  void Move(pair<int, int> position, pair<int, int> toPosition);
  // int checkmat(int x , int y);// int king.x king.y
};
