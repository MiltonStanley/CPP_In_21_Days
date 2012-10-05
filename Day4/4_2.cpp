//  Listing 4.2 - demonstrates subtraction and 
//  integer overflow
#include <iostream>

int main()
{
  using namespace std;
  unsigned int difference;
  unsigned int big_number = 100;
  unsigned int small_number = 50;
  difference = big_number - small_number;
  cout << "Difference is: " << difference;
  difference = small_number - big_number;
  cout << "\nNow difference is: " << difference << endl;
  
  return 0;
}