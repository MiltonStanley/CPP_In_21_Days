#include <iostream>

int main()
{
  unsigned short int small_number;
  small_number = 65535;
  std::cout << "small number: " << small_number << std::endl;
  small_number++;
  std::cout << "small number: " << small_number << std::endl;
  small_number++;
  std::cout << "small number: " << small_number << std::endl;
  
  return 0;
}