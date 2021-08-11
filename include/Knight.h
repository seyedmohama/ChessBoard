
#include "Chessman.h"

enum class PlayersColor;

class Knight : public Chessman
{
public:
  Knight(int, int, PlayersColor);
  virtual std::vector<std::pair<int, int>> GetMovements(Cell** Board);//
};
