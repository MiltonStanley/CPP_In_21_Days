#include <iostream>

int main()
{
  enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
  
  Days DayOff;
  int x;
  
  std::cout << "What day would you like off (0-6)? ";
  std::cin >> x;
  DayOff = Days(x);
  
  if (DayOff == Sunday || DayOff == Saturday)
    std::cout << "\nYou're already off on weekends!\n";
  else
    std::cout <<"\nOkay, I'll put in the vacation day.\n";
  
  return 0;
}