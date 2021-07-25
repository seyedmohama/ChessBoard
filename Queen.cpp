#include "Queen.h"

Queen::Queen(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Queen;

}

std::vector<std::pair<int, int>> Queen::GetMovements(Cell** Board)
{
  std::vector<std::pair<int, int>> crossmoves = ((Bishop*)this)->GetMovements(Board);
  //std::vector<std::pair<int, int>> plusmoves = ((Rook*)this)->GetMovements(Board);
  //crossmoves.insert(crossmoves.end(), plusmoves.begin(), plusmoves.end());
  //return crossmoves;
  return std::vector<std::pair<int, int>>();
}
