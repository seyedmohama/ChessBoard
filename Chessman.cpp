#include "Chessman.h"

Chessman::Chessman(int x, int y, ChessColor color)
{
  X = x;
  Y = y;
  Color = color;
}

Chessman::Chessman()
{

}

char Chessman::TypeString()
{
  char types[] = {"BKkPQR"};

  return types[(int)Type];
}

void Chessman::Move(pair<int, int> position)
{
  X = position.first;
  Y = position.second;
}
