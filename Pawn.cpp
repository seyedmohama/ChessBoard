#include "Pawn.h"

Pawn::Pawn(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Pawn;

}

std::vector<std::pair<int, int>> Pawn::GetMovements()
{
  return std::vector<std::pair<int, int>> ();
}
