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
      
  for(vector<int>::iterator i = myVector.begin(); i<myVector.end(); i++){ // Set up iterator
    int * start = myVector.begin();     // start is a pointer to the beginning of the vector
    int currentIndex = i - start;       // currentIndex is the difference between i (iterator pointer) and start (beginning of vector)
    cout << "Element " << currentIndex << ": " << *i << endl;
  }
    
  return 0;
}