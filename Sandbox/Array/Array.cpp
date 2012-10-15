//Array.cpp

#include <iostream>


int main() {
  using namespace std;
  string test[2];
  string line;
  cout << "Input your first name: ";
  cin >> line;
  test[0] = line;
  cout << "\nInput another name: ";
  cin >> line;
  test [1] = line;
  cout << "First: " << test[0] << " Second: " << test[1] << endl;
  return 0;

}