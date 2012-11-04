#include <iostream>
#include <string>

// Number of elements in an array
//template <typename T, int N> char (&array(T(&)[N]))[N];

// Old klunky way
#define length(_temp) (sizeof _temp / sizeof _temp[0])

int main()
{
  using namespace std;
  

  string _temp[19] = {"one", "two"};

  //std::cout << sizeof array(_temp) << '\n';
  std::cout << length(_temp) << '\n';


  return 0;
}