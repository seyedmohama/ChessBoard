#include "Bishop.h"

Bishop::Bishop(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Bishop;
}

vector<pair<int, int>> Bishop::GetMovements()
{
  vector<pair<int, int>> movements;
  int currx = X, curry = Y;

  while (currx++ < 7 && curry++ < 7)
  {
    movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry-- > 0)
  {
    movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry++ < 7)
  {
    movements.push_back({currx, curry});
  }


  currx = X;
  curry = Y;
  while (currx++ < 7 && curry-- > 0)
  {
    movements.push_back({currx, curry});
  }

  return movements;
}
