//reference.cpp

#include <iostream>

void add_to(int, int &);

int main() {
  using namespace std;
  int start = 5;
  int users;
  cout << "Input number to add to 5: ";
  cin >> users;
  add_to(users, start);
  cout << "\nYou made 5 become " << start << endl;
  return 0;
}

void add_to (int add, int &start){
  start += add;
}