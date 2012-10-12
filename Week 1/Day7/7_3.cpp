// 7.3

#include <iostream>

int main() {
  unsigned short small;
  unsigned short large;
  const unsigned short MAXSMALL = 65535;

  std::cout << "Enter a small number: ";
  std::cin >> small;
  std::cout << "Enter a large number: ";
  std::cin >> large;

  std::cout << "small: " << small << "...";
  //std::cout << "large: " << large << std::endl;

  while (small < large && large > 0 && small < MAXSMALL){
    if (small % 5000 == 0)  // write a dot every 5000th line
      std::cout << ".";

    small++;

    large -= 2;
  }

  std::cout << "\nSmall: " << small << " Large: " << large << std::endl;
  return 0;

}