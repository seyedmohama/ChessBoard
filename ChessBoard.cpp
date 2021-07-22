#include "ChessBoard.h"

// int ChessBoard::checkmat ( int x , int y)
// {
//   bool condition = (cell[x][y] == true) && (cell[x+1][y] == true) && (cell[x][y+1] == true) &&(cell[x+1][y+1] == true) && (cell[x-1][y-1] == true) && (cell[x-1][y] == true) && (cell[x][y-1] == true) && (cell[x+1][y-1] == true) &&  (cell[x-1][y+1] == true);
//   if (condition) {
//     return 1;
//
//   }
//   return 0;
// }


void ChessBoard::initBoard()
{
  Board = new Cell*[8];
  for (int i = 0; i < 8; i++)
    Board[i] = new Cell[8];

  //Setting white pawns
  Board[0][0].SetPawn(new Rook(0, 0, ChessColor::White));
  Board[7][0].SetPawn(new Rook(7, 0, ChessColor::White));

  Board[1][0].SetPawn(new Knight(1, 0, ChessColor::White));
  Board[6][0].SetPawn(new Knight(6, 0, ChessColor::White));

  Board[2][0].SetPawn(new Bishop(2, 0, ChessColor::White));
  Board[5][0].SetPawn(new Bishop(5, 0, ChessColor::White));

  Board[3][0].SetPawn(new Queen(3, 0, ChessColor::White));
  Board[4][0].SetPawn(new King(4, 0, ChessColor::White));

  for (int i = 0; i < 8; i++)
  {
    Board[i][1].SetPawn(new Pawn(i, 1, ChessColor::White));
  }

  //Setting black pawns
  Board[0][7].SetPawn(new Rook(0, 7, ChessColor::Black));
  Board[7][7].SetPawn(new Rook(7, 7, ChessColor::Black));

  Board[1][7].SetPawn(new Knight(1, 7, ChessColor::Black));
  Board[6][7].SetPawn(new Knight(6, 7, ChessColor::Black));

  Board[2][7].SetPawn(new Bishop(2, 7, ChessColor::Black));
  Board[5][7].SetPawn(new Bishop(5, 7, ChessColor::Black));

  Board[3][7].SetPawn(new Queen(3, 7, ChessColor::Black));
  Board[4][7].SetPawn(new King(4, 7, ChessColor::Black));


  for (int i = 0; i < 8; i++)
  {
    Board[i][6].SetPawn(new Pawn(i, 6, ChessColor::Black));
  }
}

vector<pair<int, int>> ChessBoard::GetFreeMovements(pair<int, int> cell)
{
  Cell c = Board[cell.first][cell.second];
  auto movements = c.ptr->GetMovements();

  for (auto i = movements.begin(); i != movements.end(); i++)
  {
    if (Board[i->first][i->second].ptr && Board[i->first][i->second].ptr->Color == c.ptr->Color)
    {
      i = movements.erase(i);
      i--;
    }
  }

  return movements;
}

void ChessBoard::Move(pair<int, int> position, pair<int, int> toPosition)
{
  Board[position.first][position.second].ptr->Move(toPosition);
  Board[toPosition.first][toPosition.second].ptr = Board[position.first][position.second].ptr;
  Board[position.first][position.second].ptr = nullptr;
}

Cell** ChessBoard::GetBoard()
{
  return Board;
}
