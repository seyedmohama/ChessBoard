#include "Cell.h"

void Cell::SetPawn(Chessman* manptr)
{
  ptr = manptr;
}

bool Cell::IsEmpty()
{
  return ptr == nullptr;
}
