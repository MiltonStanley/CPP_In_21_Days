//testvarlenarray.cpp

#include <iostream>
#include <string>

int main() {
  using namespace std;
  //string file[5] = { "d_zero", d_one", "d_two", "d_three", "d_four"};

  //string one[1] = {"one"};
  //string * two[1] = {"two"};
  //string * three[1] = new string[1];


  int alpha = 5;          // Declare integer alpha and assign it 5
  int * palpha = &alpha;  // Declare a pointer to an integer named palpha and assign it the memory address of alpha

  cout << alpha << endl;  // Prints 5 (the value of alpha)
  cout << &alpha << endl; // Prints 0x___ (memory location of alpha)
  
  cout << palpha << endl; // Prints 0x____ (memory location) - the address of alpha (the value of palpha)
  cout << *palpha << endl;  // Prints 5 (* dereferences palpha, so it returns the VALUE of the data stored at alpha)
  cout << &palpha << endl;  // Prints 0x____ (same as just alpha) - & is memory location, * is data AT that location 

  return 0;
}