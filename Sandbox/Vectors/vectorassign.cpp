//vectorassign.cpp

#include <iostream>
#include <vector>
#define length(myArray) (sizeof myArray / sizeof myArray[0])


using namespace std;

int main(){
  int myArray[] = {
    1, 
    2, 
    3
  };
  
  cout << length(myArray) << endl;
  vector<int> dood;
  dood.assign(myArray,myArray+length(myArray));//length(myArray));
  for(int i=0; i<dood.size(); i++)
  cout << dood[i] << endl;

}