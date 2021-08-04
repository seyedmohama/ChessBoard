#include "Queen.h"
#include <iostream>
Queen::Queen(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Queen;

}

std::vector<std::pair<int, int>> Queen::GetPlusMovements(Cell** Board)
{
  std::vector<pair<int, int>> movements;

  //Going top
  for (int i = Y; i > 0; i--)
  {
    if (!Board[X][i].IsEmpty() && i != Y)
      break;
    movements.push_back({X, i});
  }

  //Going Bottom
  for (int i = Y; i < 8; i++)
  {
    if (!Board[X][i].IsEmpty() && i != Y)
      break;
    movements.push_back({X, i});
  }


  //Going Right
  for (int i = X; i > 0; i--)
  {
    if (!Board[i][Y].IsEmpty() && i != X)
      break;
    movements.push_back({i, Y});
  }

  //Going Right
  for (int i = X; i < 8; i++)
  {
    if (!Board[i][Y].IsEmpty() && i != X)
      break;
    movements.push_back({i, Y});
  }

  return movements;
}


vector<pair<int, int>> Queen::GetXMovements(Cell** Board)
{
  vector<pair<int, int>> movements;
  int currx = X, curry = Y;

  while (currx++ < 7 && curry++ < 7)
  {
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry-- > 0)
  {
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry++ < 7)
  {
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }


  currx = X;
  curry = Y;
  while (currx++ < 7 && curry-- > 0)
  {
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }

  return movements;
}

std::vector<std::pair<int, int>> Queen::GetMovements(Cell** Board)
{
  auto plusmoves = GetPlusMovements(Board);
  auto crossmoves = GetXMovements(Board);
  for (auto i = plusmoves.begin(); i != plusmoves.end(); i++)
    crossmoves.push_back(*i);

  return crossmoves;
}
