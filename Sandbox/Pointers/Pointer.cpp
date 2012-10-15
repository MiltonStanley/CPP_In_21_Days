//Pointer.cpp

#include <iostream>

void SetThing(int *, int);
//void ShowThing(int);

int main() {
  using namespace std;
  int age, new_age;
  int * pint;
  pint = new int;

  cout << "What's your age?";
  cin >> *pint;
  cout << "\nYou put: " << *pint << endl;
  cout << "New thing";
  cin >> new_age;
  SetThing(*pint, new_age);

  return 0;
}


void SetThing(int * old_age, int new_age){
  old_age = new_age;
}

/*
void ShowThing(int age){
  std::cout << "Age changed to " << age << std::endl;
}
*/
