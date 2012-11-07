#include <iostream>
#include <string>

//template <typename T, int N> char (&array(T(&)[N]))[N];

#define length(_temp) (sizeof _temp / sizeof _temp[0])
#define length(parray) (sizeof parray / sizeof parray[0])
#define aaa(parray) (sizeof parray)
#define bbb(parray) (sizeof parray[0])

using namespace std;

void puts (int length, string * arr){
  for(int i=0; i<length; i++){
    cout << "Arr[" << i << "] = " << arr[i] << endl;
  }
}

int main()
{
  cout << endl;
  string _temp[4] = {"one", "two", "three", "four"};

  string *parray = new string[1];
  parray[0] = "hello goodbye this is a very long string maybe overloaded?";
  cout << *parray << endl;
  cout << parray[0] << endl;
  cout << endl;

  cout << "Size of parray: " << aaa(parray) << endl;
  cout << "Size of parray[0]: " << bbb(parray) << endl;
  cout << "Full size of parray: " << length(parray) << endl;

  cout << "Length of base array: " << length(_temp) << '\n';

  cout << "---------------------" << endl;
  puts(length(_temp), _temp);

  return 0;
}



