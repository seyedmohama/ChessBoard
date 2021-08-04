#pragma once
#include <iostream>
#include <string>

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
  bool IsMated(ChessColor color);
  bool IsChecked(ChessColor color);
  bool IsCheckMated(ChessColor color);
  pair<int, int> FindKing(ChessColor color);
  vector<pair<int, int>> GetFreeMovements(pair<int, int> cell);
	bool verifyMove(std::string);
  virtual void Move(pair<int, int> position, pair<int, int> toPosition);
};
