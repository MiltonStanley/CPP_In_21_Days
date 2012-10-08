#include <iostream>
using namespace std;

int power(unsigned short int, unsigned short int);

int main(){

  
  unsigned short int x, y, z;

  cout << "Base: ";
  cin >> x;
  cout << "\nExponent: ";
  cin >> y;
  z = power(x,y);
  cout << "\n answer is " << z << endl;
  return 0;
}

int power(unsigned short int x, unsigned short int y)
{
  if (y==1)
    return x;
  else
  return (x * power(x, y-1));
}