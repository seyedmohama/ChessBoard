#include "Knight.h"
#include <iostream>
Knight::Knight(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Knight;

}

std::vector<std::pair<int, int>> Knight::GetMovements(Cell** Board)
{
  std::vector<std::pair<int, int>> movements;
  Cell tmp;


  if (X < 7 && Y < 6)
  {
    tmp = Board[X + 1][Y + 2];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X + 1, Y + 2 });
  }
  if (X > 0 && Y < 6)
  {
    tmp = Board[X - 1][Y + 2];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X - 1, Y + 2 });
  }
  if (X < 6 && Y < 7)
  {
    tmp = Board[X + 2][Y + 1];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X + 2, Y + 1 });
  }
  if (X > 1 && Y < 7)
  {
    tmp = Board[X - 2][Y + 1];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X - 2, Y + 1 });
  }
  if (X < 6 && Y > 0)
  {
    tmp = Board[X + 2][Y - 1];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X + 2, Y - 1 });
  }
  if (X > 1 && Y > 0)
  {
    tmp = Board[X - 2][Y - 1];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X - 2, Y - 1 });
  }
  if (X < 7 && Y > 1)
  {
    tmp = Board[X + 1][Y - 2];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X + 1, Y - 2 });
  }
  if (X > 0 && Y > 1)
  {
    tmp = Board[X - 1][Y - 2];
    if (!(!tmp.IsEmpty() && tmp.ptr->Color == Color))
      movements.push_back({ X - 1, Y - 2 });
  }

  for (auto i = movements.begin(); i != movements.end(); i++)
  {
    if (i->first < 0 || i->first > 7 || i->second < 0 || i->second > 7)
    {
      i = movements.erase(i);
      i--;
    }
  }

  return movements;
}
