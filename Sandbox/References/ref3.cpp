//ref3.cpp

#include <iostream>

void sum(int, int &);

int main() {
  int a = 5;
  std::cout << "A is " << a << std::endl;
  int b = 7;
  sum(b, a);
  std::cout << "A is now " << a << std::endl;
  return 0;
}

void sum(int a, int &b){
  b = a + b;
}