#include "Rook.h"
#include <iostream>
Rook::Rook(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Rook;
}

std::vector<std::pair<int, int>> Rook::GetMovements(Cell** Board)
{
  std::vector<pair<int, int>> movements;

  //Going top
  for (int i = Y; i > 0; i--)
  {
    if (!Board[X][i].IsEmpty())
      break;
    movements.push_back({X, i});
  }

  //Going Bottom
  for (int i = Y; i < 8; i++)
  {
    if (!Board[X][i].IsEmpty())
      break;
    movements.push_back({X, i});
  }


  //Going Right
  for (int i = X; i > 0; i--)
  {
    if (!Board[i][Y].IsEmpty())
      break;
    movements.push_back({i, Y});
  }

  //Going Right
  for (int i = X; i < 8; i++)
  {
    if (!Board[i][Y].IsEmpty())
      break;
    movements.push_back({i, Y});
  }

  return movements;
}
