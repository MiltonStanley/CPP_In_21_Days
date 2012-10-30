// references.cpp

#include <iostream>

void change(int, int &);

int main() {
  int a = 5;
  std::cout << "A = " << a << std::endl;
  change(7, a);
  std::cout << "A is now = " << a << std::endl;
}

void change(int second, int & first){
  first = first + second;
}