#include "../include/Queen.h"
#include "Player.h"
#include <iostream>

Queen::Queen(int x, int y, PlayersColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Queen;
  HitScore = 5;
  ThreatScore = 15;
}

std::vector<std::pair<int, int>> Queen::GetPlusMovements(Cell** Board)
{
  std::vector<pair<int, int>> movements;

  //Going buttom
  for (int i = Y - 1; i >= 0; i--)
  {
		if ( !Board[X][i].IsEmpty() && (Board[X][i].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({X, i});
			break;
		}
    if (!Board[X][i].IsEmpty())
      break;
    movements.push_back({X, i});
  }

  //Going top
  for (int i = Y + 1; i <= 7; i++)
  {
		if ( !Board[X][i].IsEmpty() && (Board[X][i].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({X, i});
			break;
		}
    if (!Board[X][i].IsEmpty())
      break;
    movements.push_back({X, i});
  }


  //Going left
  for (int i = X - 1; i >= 0; i--)
  {
		if ( !Board[i][Y].IsEmpty() && (Board[i][Y].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({i, Y});
			break;
		}
    if (!Board[i][Y].IsEmpty())
      break;
    movements.push_back({i, Y});
  }

  //Going Right
  for (int i = X + 1; i <= 7; i++)
  {
		if ( !Board[i][Y].IsEmpty() && (Board[i][Y].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({i, Y});
			break;
		}
    if (!Board[i][Y].IsEmpty())
      break;
    movements.push_back({i, Y});
  }

  return movements;
}


vector<pair<int, int>> Queen::GetXMovements(Cell** Board)
{
  vector<pair<int, int>> movements;
  int currx = X, curry = Y;

  while (currx++ < 7 && curry++ < 7)
  {
		if ( !Board[currx][curry].IsEmpty() && (Board[currx][curry].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({currx, curry});
			break;
		}
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry-- > 0)
  {
		if ( !Board[currx][curry].IsEmpty() && (Board[currx][curry].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({currx, curry});
			break;
		}
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry++ < 7)
  {
		if ( !Board[currx][curry].IsEmpty() && (Board[currx][curry].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({currx, curry});
			break;
		}
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }


  currx = X;
  curry = Y;
  while (currx++ < 7 && curry-- > 0)
  {
		if ( !Board[currx][curry].IsEmpty() && (Board[currx][curry].ptr-> Color != Board[X][Y].ptr-> Color)){
    	movements.push_back({currx, curry});
			break;
		}
    if (!Board[currx][curry].IsEmpty())
        break;
    movements.push_back({currx, curry});
  }

  return movements;
}

std::vector<std::pair<int, int>> Queen::GetMovements(Cell** Board)
{
  auto plusmoves = GetPlusMovements(Board);
  auto crossmoves = GetXMovements(Board);
  for (auto i = plusmoves.begin(); i != plusmoves.end(); i++)
    crossmoves.push_back(*i);

  return crossmoves;
}
