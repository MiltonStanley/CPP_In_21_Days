// 8.9
typedef unsigned short int USHORT;

#include <iostream>

int main() {
  using namespace std;
  USHORT * pInt = new USHORT;
  *pInt = 1;
  cout << "*pInt: " << *pInt << endl;
  delete pInt;
  pInt = 0;
  long * pLong = new long;
  *pLong = 90000;
  cout << "*pLong: " << *pLong << endl;

  *pInt = 20; // We deleted this - onoz!

  cout << "*pInt: " << *pInt << endl;
  cout << "*pLong: " << *pLong << endl;
  delete pLong;

  return 0;
}