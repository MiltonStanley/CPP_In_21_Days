#include <iostream>
#include "Person.h"

int main(){
  int user_age;

  std::cout << "What is your age? ";
  std::cin >> user_age;
  Person user(user_age);
  std::cout << "\nYour age is " << user.GetAge() << std::endl;
  return 0;

}

