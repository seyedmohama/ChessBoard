#include "Rook.h"

Rook::Rook(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Rook;
}

std::vector<std::pair<int, int>> Rook::GetMovements()
{
  return std::vector<std::pair<int, int>> ();
}
