#include <iostream>
#include <string>

// Number of elements in an array
//template <typename T, int N> char (&array(T(&)[N]))[N];

// Old klunky way
#define length(a) (sizeof a / sizeof a[0])

int main()
{
  using namespace std;
  string a[19] = {"one", "two"};

  //std::cout << sizeof array(a) << '\n';
  std::cout << length(a) << '\n';
}