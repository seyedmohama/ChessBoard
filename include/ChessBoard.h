#pragma once
#ifndef CHESSBOARD
#define CHESSBOARD

#include <iostream>
#include <time.h>
#include <random>

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

  pair< pair<int, int>, pair< int, int>> RandomMove(struct Player *p); // حرکت رندوم که یک پوینتر از بازیکن میگیرد
  void HitScoring(struct Player *p , pair<int, int> position);
  void ThreatScoring(struct Player *p , pair<int, int> position);
  void initBoard();
  void UndoScoring(struct Player *p);

  bool IsMated(PlayersColor color);
  bool IsChecked(PlayersColor color);
  bool IsCheckMated(PlayersColor color);
  pair<int, int> FindKing(PlayersColor color);
  vector<pair<int, int>> Threat(pair<int, int> cell);
  void ThreatPlus();
  vector<pair<int, int>> GetFreeMovements(pair<int, int> cell);
  virtual void Move(pair<int, int> position, pair<int, int> toPosition);
	bool verifyMove( std::string move);

	virtual ~ChessBoard() = default;
};
 #endif
