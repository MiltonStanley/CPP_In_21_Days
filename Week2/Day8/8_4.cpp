//8_4.cpp

#include <iostream>
int main(){
  using namespace std;
  int localVariable = 5;
  int * pLocal = &localVariable;
  int * pHeap = new int;
  if (pHeap == NULL) {
    cout << "Error! No memory for pHeap!!" << endl;
    return 0;
  }
  *pHeap = 7;
  cout << "localVariable: " << localVariable << endl;
  cout << "*pLocal: " << *pLocal << endl;
  cout << "*pHeap: " << *pHeap << endl;
  delete pHeap;
  pHeap = new int;
  if (pHeap == NULL) {
    cout << "Error! No memory for pHeap!!" << endl;
  return 0;
  }
  *pHeap = 9;
  cout << "*pHeap: " << *pHeap << endl;
  delete pHeap;
  return 0;
}