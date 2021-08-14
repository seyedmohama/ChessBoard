#include "../include/King.h"
#include "Player.h"

King::King(int x, int y, PlayersColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::King;
//  HitScore = 50;
//  ThreatScore = 10;

}

std::vector<std::pair<int, int>> King::GetMovements(Cell** Board)
{
  std::vector<std::pair<int, int>> movements;

  if (X > 0 && !Board[X - 1][Y].IsEmpty() && (Board[X - 1][Y].ptr-> Color != Board[X][Y].ptr-> Color)){
    movements.push_back({ X - 1, Y });
	}
  if (X > 0 && Board[X - 1][Y].IsEmpty())
    movements.push_back({ X - 1, Y });

  if (X < 7 && !Board[X + 1][Y].IsEmpty() && (Board[X + 1][Y].ptr-> Color != Board[X][Y].ptr-> Color)){
    movements.push_back({ X + 1, Y });
	}
  if (X < 7 && Board[X + 1][Y].IsEmpty())
    movements.push_back({ X + 1, Y });

  if (Y > 0 && !Board[X][Y - 1].IsEmpty() && (Board[X][Y - 1].ptr-> Color != Board[X][Y].ptr-> Color)){
    movements.push_back({ X, Y - 1 });
	}
  if (Y > 0 && Board[X][Y - 1].IsEmpty())
    movements.push_back({ X, Y - 1 });

  if (Y < 7 && !Board[X][Y + 1].IsEmpty() && (Board[X][Y + 1].ptr-> Color != Board[X][Y].ptr-> Color)){
    movements.push_back({ X, Y + 1});
	}
  if (Y < 7 && Board[X][Y + 1].IsEmpty())
    movements.push_back({ X, Y + 1 });

  if (X > 0 && Y > 0 && Board[X - 1][Y - 1].IsEmpty())
    movements.push_back({ X - 1, Y - 1});

  if (X > 0 && Y < 7 && Board[X - 1][Y + 1].IsEmpty())
    movements.push_back({ X - 1, Y + 1});

  if (X < 7 && Y < 7 && Board[X + 1][Y + 1].IsEmpty())
    movements.push_back({ X + 1, Y + 1});

  if (X < 7 && Y > 0 && Board[X + 1][Y - 1].IsEmpty())
    movements.push_back({ X + 1, Y - 1});


  return movements;
}
