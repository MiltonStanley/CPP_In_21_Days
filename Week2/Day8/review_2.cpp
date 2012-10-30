//review2.cpp

#include <iostream>

int main()
{
   int varOne;
   const int * const pVar = &varOne;
   *pVar = 7;
   int varTwo;
   pVar = &varTwo;
return 0;
}