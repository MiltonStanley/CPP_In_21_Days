//ref4.cpp

#include <iostream>

void Double(int &);

int main() {
  int a = 5;
  std::cout << "A = " << a << std::endl; 
  Double(a);
  std::cout << "A is now = " << a << std::endl;
  return 0;
}

void Double(int & x){
  x = x * 2;
}