#pragma once
#include <iostream>

#include "Player.h"
#include "Cell.h"
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"

#include "StackPage.hpp"


class ChessBoard
{
private:
  Cell** Board;
	StackPage *pStack;

public:
	Player *plr1;
  Player *plr2;
  vector<Chessman*> TrashingList;
  Cell** GetBoard();

  ChessBoard();
	ChessBoard( Player*, Player*, StackPage*);

  void HitScoring(struct Player *p , pair<int, int> position);
  void ThreatScoring(struct Player *p , pair<int, int> position);
  void initBoard();
  void UndoScoring(struct Player *p);

  bool IsMated(ChessColor color);
  bool IsChecked(ChessColor color);
  bool IsCheckMated(ChessColor color);
  pair<int, int> FindKing(ChessColor color);
  vector<pair<int, int>> Threat(pair<int, int> cell);
  vector<pair<int, int>> GetFreeMovements(pair<int, int> cell);
  virtual void Move(pair<int, int> position, pair<int, int> toPosition);
	bool verifyMove( std::string move);
};
