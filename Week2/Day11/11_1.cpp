// 11_1.cpp
// Arrays

#include <iostream>

int main() {
  int myArray[5];
  int i;
  for (i=0; i<5; i++) {
    std::cout << "Value for MyArray[" << i << "]: ";
    std::cin >> myArray[i];
  }
  for (i=0; i<5; i++){
    std::cout << i << ": " << myArray[i] << "\n";
  }
  return 0;
}