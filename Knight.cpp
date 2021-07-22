#include "Knight.h"
#include <iostream>
Knight::Knight(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Knight;

}

std::vector<std::pair<int, int>> Knight::GetMovements()
{
  std::vector<std::pair<int, int>> movements;

  movements.push_back({ X + 1, Y + 2 });
  movements.push_back({ X - 1, Y + 2 });

  movements.push_back({ X + 2, Y + 1 });
  movements.push_back({ X - 2, Y + 1 });

  movements.push_back({ X + 2, Y - 1 });
  movements.push_back({ X - 2, Y - 1 });

  movements.push_back({ X + 1, Y - 2 });
  movements.push_back({ X - 1, Y - 2 });


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
