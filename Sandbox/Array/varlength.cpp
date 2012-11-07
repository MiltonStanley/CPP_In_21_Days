#include <iostream>
#include <string>

// Number of elements in an array
//template <typename T, int N> char (&array(T(&)[N]))[N];

// Old klunky way
#define length(_temp) (sizeof _temp / sizeof _temp[0])
#define len(ptest) (sizeof ptest / sizeof ptest[0])

using namespace std;

void puts(int, string);
//void puts(int, int);

int main()
{
  string _temp[4] = {"one", "two", "three", "four"};
  string * ptest = new string[1];
//  int a = 5;
//  int * ptest = &a;

  cout << "Length of base array: " << length(_temp) << '\n';
  cout << "Length of growing array: " << len(ptest) << endl;

  puts(4, *ptest); 

  return 0;
}

void puts (int length, string arr[]){
//void puts (int length, int arr){
  for(int i=0; i<length; i++)
  cout << i << endl;
}
