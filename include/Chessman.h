#pragma once
#include <string>
#include <vector>
#include "Cell.h"

using namespace std;
//enum class ChessColor { White = 0 , Black };
enum class PlayersColor;
enum class ChessType
{
    Bishop = 0,
    King,
    Knight,
    Pawn,
    Queen,
    Rook
};


class Chessman
{
public:
  ChessType Type;
  PlayersColor Color;
  int HitScore;
  int ThreatScore;
  int X, Y;
  void move(int x , int y);
  Chessman(int x, int y, PlayersColor color);
  Chessman();
  char TypeString();
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board) = 0;
  virtual void Move(pair<int, int> position);
};
