#include <iostream>

int main()
{
  short int small_number;
  small_number = 32767;
  std::cout << "small number: " << small_number << std::endl;
  small_number++;
  std::cout << "small number: " << small_number << std::endl;
  small_number++;
  std::cout << "small number: " << small_number << std::endl;
  
  return 0;
}