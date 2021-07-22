#pragma once
#include <string>
#include <vector>
using namespace std;
enum class ChessColor { White , Black };

enum class ChessType
{
    Bishop,
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
  ChessColor Color;
  int X, Y;
  void move(int x , int y);
  Chessman(int x, int y, ChessColor color);
  Chessman();
  char TypeString();
  virtual std::vector<std::pair<int, int>> GetMovements() = 0;
  void Move(pair<int, int> position);
};
