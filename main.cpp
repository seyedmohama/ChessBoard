#include "ChessBoard.h"

using namespace std;

void PrintBoard(Cell** cells)
{
  cout << "    ";

  for (int j = 0; j < 8; j++)
    cout << j << ' ';

  cout << "\n\n";

  for (int i = 0; i < 8; i++)
  {
    cout << i << "   ";

    for (int j = 0; j < 8; j++)
    {
      if (cells[j][i].ptr)
        cout << cells[j][i].ptr->TypeString();
      else
       cout << ' ';
      cout << ' ';
    }

    cout << '\n';
  }
}

int main()
{
  ChessBoard a;
  a.initBoard();
  Cell** cells = a.GetBoard();
  PrintBoard(cells);
  a.Move({0, 0}, {0, 2});
  PrintBoard(cells);
  a.Move({3, 0}, {5, 2});
  PrintBoard(cells);
}
