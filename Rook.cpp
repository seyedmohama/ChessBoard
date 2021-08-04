#include "Rook.h"
Rook::Rook(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Rook;
  HitScore = 2;
  ThreatScore = 8;
}

std::vector<std::pair<int, int>> Rook::GetMovements(Cell** Board)
{
  std::vector<pair<int, int>> movements;

  //Going top
  for (int i = Y - 1; i > 0; i--)
  {
    if (!Board[X][i].IsEmpty() && i != Y)
      break;
    movements.push_back({X, i});
  }

  //Going Bottom
  for (int i = Y + 1; i < 8; i++)
  {
    if (!Board[X][i].IsEmpty() && i != Y)
      break;
    movements.push_back({X, i});
  }


  //Going Right
  for (int i = X - 1; i > 0; i--)
  {
    if (!Board[i][Y].IsEmpty() && i != X)
      break;
    movements.push_back({i, Y});
  }

  //Going Right
  for (int i = X + 1; i < 8; i++)
  {
    if (!Board[i][Y].IsEmpty() && i != X)
      break;
    movements.push_back({i, Y});
  }

  return movements;
}
