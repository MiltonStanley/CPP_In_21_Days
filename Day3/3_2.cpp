// Demonstration of variables
#include <iostream>


int main()
{
  unsigned short int width = 5, length;
  length = 10;
  
  // create an unsigned short and initialize with result
  // of multiplying width by length
  unsigned short int area = width * length;

  std::cout << "Width: " << width << "\n";
  std::cout << "Length: " << length << std::endl;
  std::cout << "Area: " << area << std::endl;

  return 0;
}