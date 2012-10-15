// Scoping.cpp

#include <iostream>

void SetThing(int);
void ShowThing(int);

int main(){
  int thing = 5;

  SetThing(thing);
  ShowThing(thing);

  return 0;
}

void SetThing(int new_thing){       // this DOES NOT change the value of param passed in
  new_thing = 10;
}

void ShowThing(int shower){
  std::cout << "thing is " << shower << std::endl;
}

