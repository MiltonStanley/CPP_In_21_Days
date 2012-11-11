/*  USING VECTORS
 *  
 *  Declaring: vector<TYPE> NAME;
 *    optional: ...NAME(x,y) where x = # of elements, y is data to populate 'em
 *  Append: NAME.push_back(DATA);
 *  Create an iterator: vector<TYPE>::iterator INAME; 
 *  Using iterator: for(INAME = NAME.begin(); INAME<NAME.end(), INAME++)
 *  Accessing data with the iterator: *INAME (uses a pointer)
 *  Capacity: NAME.capacity()
 *  Actual size: NAME.size()
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> myVector;
  myVector.push_back(5);
  myVector.push_back(7);
  myVector.push_back(9);
  
  cout << "Size: " << myVector.size() << endl;
   
  for(int i=0; i<myVector.size(); i++){
    cout << "myVector[" << i << "]: " << myVector[i] << endl;
  } 

  cout << "First: " << myVector.front() << endl;
  cout << "Last: " << myVector.back() << endl;

  return 0;
}

//http://www.mochima.com/tutorials/vectors.html