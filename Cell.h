#pragma once
#include "King.h"
#include "Knight.h"
#include "Bishop.h"
#include "Pawn.h"
#include "Rook.h"
#include "Queen.h"

class Cell
{
public:
  Chessman *ptr = nullptr;

    void SetPawn(Chessman* manptr);

    bool IsEmpty()
    {
      return ptr == nullptr;
    }
};
