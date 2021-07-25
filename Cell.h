#pragma once
#ifndef CELL_H
#define CELL

class Chessman;

class Cell
{
public:
  Chessman *ptr = nullptr;

  void SetPawn(Chessman* manptr);

  bool IsEmpty();
};

#endif
