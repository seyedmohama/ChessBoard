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
  char command;
  do
  {
    PrintBoard(cells);
    std::cin >> command;
    if (command == 'm')
    {
      int x, y, tox, toy;
      std::cout << "Which one: ";
      cin >> x >> y;
      std::cout << "To where: ";
      cin >> tox >> toy;

      a.Move({x, y}, {tox, toy});
    }
    else if (command == 'o')
    {
      int x, y;
      std::cout << "Which one: ";
      cin >> x >> y;

      auto movements = a.GetFreeMovements({x, y});

      for (auto i = movements.begin(); i < movements.end(); i++)
        std::cout << '(' << movements.first << ", " << i->second << ") ";
      std::cout << "\n";
    }
  } while (true);
}
