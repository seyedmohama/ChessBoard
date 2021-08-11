#include "../include/Pawn.h"
#include "Player.h"
#include <iostream>
Pawn::Pawn(int x, int y, PlayersColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Pawn;
  HitScore = 3;
  ThreatScore = 1;

}

std::vector<std::pair<int, int>> Pawn::GetMovements(Cell** Board)
{
  std::vector<std::pair<int, int>> movements;
  if (Color == PlayersColor::Black && Y != 0)
  {
    movements.push_back({X, Y - 1});

    if (X != 0 && !Board[X - 1][Y - 1].IsEmpty() && Board[X - 1][Y - 1].ptr->Color != Color){
      movements.push_back({X - 1, Y - 1});
		}

    if (X != 7 && !Board[X + 1][Y - 1].IsEmpty() && Board[X + 1][Y - 1].ptr->Color != Color){
      movements.push_back({X + 1, Y - 1});
		}
  }
  else if (Color == PlayersColor::White && Y != 7)
  {
    movements.push_back({X, Y + 1});

    if (X != 0 && !Board[X - 1][Y + 1].IsEmpty() && Board[X - 1][Y + 1].ptr->Color != Color){
      movements.push_back({X - 1, Y + 1});
		}

    if (X != 7 && !Board[X + 1][Y + 1].IsEmpty() && Board[X + 1][Y + 1].ptr->Color != Color){
      movements.push_back({X + 1, Y + 1});
		}
  }

  if (FirstMove)
  {
    if (Color == PlayersColor::Black && Y != 7)
    {
      movements.push_back({X, Y - 2});
    }
    else if (Color == PlayersColor::White && Y != 0)
    {
      movements.push_back({X, Y + 2});
    }
  }


  return movements;
}

void Pawn::Move(pair<int, int> position)
{
  if (FirstMove)
    FirstMove = false;

  X = position.first;
  Y = position.second;
}
