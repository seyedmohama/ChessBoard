#include "Queen.h"

Queen::Queen(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Queen;

}

 std::vector<std::pair<int, int>> Queen::GetMovements()
{
  return std::vector<std::pair<int, int>> ();
}
