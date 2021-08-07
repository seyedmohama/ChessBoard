#include "../include/ChessBoard.h"
#include "../include/handler.hpp"

ChessBoard :: ChessBoard()
{
  std::cout << "Please enter the name of the white Player" << '\n';
  std::cin >> plr1->Name;
  plr1->ColorOfPlayer = PlayersColor::White;
  std::cout << "Please enter the name of the Black Player" << '\n';
  std::cin >> plr2->Name;
  plr2->ColorOfPlayer = PlayersColor::Black;
}

ChessBoard::ChessBoard( Player *player1, Player *player2, StackPage *pStack){
	plr1 = player1;
	plr2 = player2;

	this->pStack = pStack;

	initBoard();
}

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
  auto movements = c.ptr->GetMovements(Board);

  for (auto i = movements.begin(); i != movements.end(); i++)
  {
    if (!Board[i->first][i->second].IsEmpty() && Board[i->first][i->second].ptr->Type == ChessType::King)
    {
      i = movements.erase(i);
      i--;
		}
  }

  return movements;
}

pair<int, int> ChessBoard::FindKing(ChessColor color)
{
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        if (!Board[i][j].IsEmpty() && Board[i][j].ptr->Type == ChessType::King && Board[i][j].ptr->Color == color)
          return {i, j};
      }
    }

    return {0, 0};
}

bool ChessBoard::IsCheckMated(ChessColor color)
{
  return IsChecked(color) && IsMated(color);
}

bool ChessBoard::IsChecked(ChessColor color)
{
  auto king = FindKing(color);
  ChessColor targetcolor = (color == ChessColor::Black) ? ChessColor::White : ChessColor::Black;

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (!Board[i][j].IsEmpty()
      && Board[i][j].ptr->Color == targetcolor)
      {
        auto moves = Board[i][j].ptr->GetMovements(Board);
        for (auto k = moves.begin(); k != moves.end(); k++)
        {
          if (k->first == king.first && k->second == king.second)
            return true;
        }
      }
    }
  }

  return false;
}

bool ChessBoard::IsMated(ChessColor color)
{
  auto king = FindKing(color);

  auto kingmoves = Board[king.first][king.second].ptr->GetMovements(Board);



  ChessColor targetcolor = (color == ChessColor::Black) ? ChessColor::White : ChessColor::Black;


  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (!Board[i][j].IsEmpty()
      && Board[i][j].ptr->Color == targetcolor)
      {
        auto moves = Board[i][j].ptr->GetMovements(Board);
        for (auto k = moves.begin(); k != moves.end(); k++)
        {
          auto it = kingmoves.end();
          for (auto f = kingmoves.begin(); f != kingmoves.end(); f++)
          {
            if (k->first == f->first && k->second == f->second)
            {
              it = f;
            }
          }

          if (it != kingmoves.end())
            kingmoves.erase(it);
        }
      }
    }
  }

  return (kingmoves.size() == 0);
}

void ChessBoard::HitScoring(struct Player *p , pair<int, int> position)
{
  p->Score += Board[position.first][position.second].ptr -> HitScore;

}

void ChessBoard::ThreatScoring(struct Player *p , pair<int, int> position)
{
  p->Score += Board[position.first][position.second].ptr -> ThreatScore;

}

void ChessBoard::UndoScoring(struct Player *p)
{
  p->Score -= 5;
}

vector<pair<int, int>> ChessBoard::Threat(pair<int, int> cell)
{
  vector<pair<int, int>> ans;
  vector<pair<int, int>> FinallThreat;
  ans = GetFreeMovements(cell);

  for (auto i = ans.begin(); i != ans.end(); i++)
  {
    if (!Board[i -> first][i -> second].IsEmpty())
    {
     	FinallThreat.push_back(*i);
			if(pStack-> handler-> get_round() == PlayersColor::White){
     		ThreatScoring(plr1 , *i);
			}
			if(pStack-> handler-> get_round() == PlayersColor::Black){
     		ThreatScoring(plr2 , *i);
			}
    }
  }
  return FinallThreat;
}

void ChessBoard::Move(pair<int, int> position, pair<int, int> toPosition)
{
  Board[position.first][position.second].ptr->Move(toPosition);
  if (!Board[toPosition.first][toPosition.second].IsEmpty())
  {
    TrashingList.push_back(Board[toPosition.first][toPosition.second].ptr);
  }
  Board[toPosition.first][toPosition.second].ptr = Board[position.first][position.second].ptr;
  Board[position.first][position.second].ptr = nullptr;
}

Cell** ChessBoard::GetBoard()
{
  return Board;
}

bool ChessBoard::verifyMove( std::string move){
	char x1 = move[1];
	x1 -= 49; // convert to {0, 1, 2, 3, 4, 5, 6, 7}
	char y1 = move[2];
	std::string xstr1, ystr1;
	xstr1 += x1;
	ystr1 += y1;
	int n1 = stoi(xstr1);
	int m1 = stoi(ystr1);
	m1--;
	std::pair< int, int> origin (n1,m1);

	char x2 = move[3];
	x2 -= 49; // convert to {0, 1, 2, 3, 4, 5, 6, 7}
	char y2 = move[4];
	std::string xstr2, ystr2;
	xstr2 += x2;
	ystr2 += y2;
	int n2 = stoi(xstr2);
	int m2 = stoi(ystr2);
	m2--;
	std::pair< int, int> destination (n2,m2);

	std::cout << "origin : " << origin.first << "," << origin.second << "\tdest : " << destination.first << "," << destination.second << std::endl;
	auto freeDestinations = (*this).GetFreeMovements( origin);
	std::cout << "after get free movements" << std::endl;
	for( auto it = freeDestinations.cbegin(); it != freeDestinations.cend(); it++){
		if( *it == destination ){
			return true;
		}
	}
	return false;
}
