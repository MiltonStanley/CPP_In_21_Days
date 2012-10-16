#include <iostream>

int FuncOne();
int main()
{
   int localVar = FuncOne();
   std::cout << "the value of localVar is: " << localVar;
return 0;
}

int FuncOne()
{
   int * pVar = new int (5);
   return *pVar;
}