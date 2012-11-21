//inherit.cpp

#include <iostream>
#include <vector>

using namespace std;

template<class T>

class Vector2 : public vector<T>{
 public:
  int mySize;
  Vector2(int _size){mySize = _size;}
  ~Vector2(){};
  int GetSize(){return mySize;}
};


int main(){
  Vector2<string> mike(23);
  cout << mike.GetSize() << endl;
  return 0;
}