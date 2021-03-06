// Listing 4.3 - demonstrates use of
// prefix and postfix increment and
// decrement operators

#include <iostream>

int main() {
  using namespace std;
  int my_age = 39;
  int your_age = 39;
  cout << "I am: " << my_age << " years old.\n";
  cout << "You are: " << your_age << " years old\n";
  my_age++;
  ++your_age;
  cout << "One year passes...\n";
  cout << "I am: " << my_age  << " years old.\n";
  cout << "You are: " << your_age << " years old\n";
  cout << "Another  year passes\n";
  cout << "I am: " << my_age++  << " years old.\n";
  cout << "You are: " << ++your_age << " years old\n";
  cout << "Let's print it again.\n";
  cout << "I am: " << my_age  << " years old.\n";
  cout << "You are: " << your_age << " years old\n";
  
  return 0;
}