//test.cpp

#include <iostream>
#include <sstream>

int main() {
  using namespace std;

  string id = "150";    

  stringstream id_toi(id);      // id_toi is a Stringstream initialized with id
  int a;
  id_toi >> a;                  // Stream id_toi into a;
  cout << a * 2 << endl;
  stringstream a_tos;           // Declare a new one named a_tos
  a_tos << a;                   // Stream int a into stringstream a_tos;
  string as = a_tos.str();      // Sting as = a_tos's string
  cout << as << endl;
  return 0;
}

