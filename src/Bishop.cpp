#include "../include/Bishop.h"
#include "Player.h"
#include <iostream>

Bishop::Bishop(int x, int y, PlayersColor color)
{
  X = x;
  Y = y;
  Color = color;
  Type = ChessType::Bishop;
  HitScore = 2;
  ThreatScore = 8;
}

vector<pair<int, int>> Bishop::GetMovements(Cell** Board)
{
  vector<pair<int, int>> movements;
  int currx = X, curry = Y;

  while (currx++ < 7 && curry++ < 7)
  {
    if (!Board[currx][curry].IsEmpty() && (Board[currx][curry]. ptr-> Color != Board[X][Y]. ptr-> Color)){
    	movements.push_back({currx, curry});
      break;
		}
    if (!Board[currx][curry].IsEmpty()){
			break;
		}
    movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry-- > 0)
  {
    if (!Board[currx][curry].IsEmpty() && (Board[currx][curry]. ptr-> Color != Board[X][Y]. ptr-> Color)){
    	movements.push_back({currx, curry});
      break;
		}
    if (!Board[currx][curry].IsEmpty()){
    	break;
		}
		movements.push_back({currx, curry});
  }

  currx = X;
  curry = Y;
  while (currx-- > 0 && curry++ < 7)
  {
    if (!Board[currx][curry].IsEmpty() && (Board[currx][curry]. ptr-> Color != Board[X][Y]. ptr-> Color)){
    	movements.push_back({currx, curry});
      break;
		}
    if (!Board[currx][curry].IsEmpty()){
			break;
		}
    movements.push_back({currx, curry});
  }


  currx = X;
  curry = Y;
  while (currx++ < 7 && curry-- > 0)
  {
    if (!Board[currx][curry].IsEmpty() && (Board[currx][curry]. ptr-> Color != Board[X][Y]. ptr-> Color)){
    	movements.push_back({currx, curry});
      break;
		}
    if (!Board[currx][curry].IsEmpty()){
			break;
		}
    movements.push_back({currx, curry});
  }

  return movements;
}
