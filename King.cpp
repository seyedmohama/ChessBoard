#include "King.h"

King::King(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::King;

}

std::vector<std::pair<int, int>> King::GetMovements()
{
  std::vector<std::pair<int, int>> movements;

  if (X > 0)
    movements.push_back({ X - 1, Y });

  if (X < 7)
    movements.push_back({ X + 1, Y });

  if (Y > 0)
    movements.push_back({ X, Y - 1 });

  if (Y < 7)
    movements.push_back({ X, Y + 1 });

  return movements;
}
