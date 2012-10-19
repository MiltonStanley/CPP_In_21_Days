//replace.cpp

#include <iostream>

int main() {
  using namespace std;

  string a = "hello!";
  cout << a << endl;

  a.replace(5,5, " world!");
  cout << a << endl;

  return 0;
}