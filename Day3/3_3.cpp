// *********************
// Demonstrates typedef keyword
#include <iostream>

typedef unsigned short int USHORT;    //typedef defined

void main()
{
  USHORT width = 5;
  USHORT length;
  length = 10;
  USHORT area = width * length;
  std::cout << "Width: " << width << "\n";
  std::cout << "Length: " << length << std::endl;
  std::cout << "Area: " << area << std::endl;
}
  