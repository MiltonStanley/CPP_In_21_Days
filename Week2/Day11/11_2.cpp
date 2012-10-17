//11_2.cpp

// Array out of bounds fun

#include <iostream>

int main() {

  //sentinels
  long sentinelOne[3];
  long TargetArray[25]; //one to fill
  long sentinelTwo[3];

  int i;
  for (i=0; i<3; i++)
    sentinelOne[i] = sentinelTwo[i] = 0;
  for (i=0; i<25; i++)
    TargetArray[i] = 0;

  using namespace std;

  cout << "Test 1: \n"; // test all values - should be 0
  cout << "TargetArray[0]: " << TargetArray[0] << endl;
  cout << "TargetArray[24]: " << TargetArray[24] << endl;

  for (i=0; i<3; i++){
    cout << "sentinelOne[" << i << "]: ";
    cout << sentinelOne[i] << endl;
    cout << "sentinelTwo[" << i << "]: ";
    cout << sentinelTwo[i] << endl;
  }

  cout << "\nAssigning...";
  for (i=0; i<=25; i++)
    TargetArray[i] = 20;

  cout << "Test 2: \n";
  cout << "TargetArray[0]: " << TargetArray[0] << endl;
  cout << "TargetArray[24]: " << TargetArray[24] << endl;
  cout << "TargetArray[25]: " << TargetArray[25] << endl;

  for (i=0; i<3; i++){
    cout << "sentinelOne[" << i << "]: ";
    cout << sentinelOne[i] << endl;
    cout << "sentinelTwo[" << i << "]: ";
    cout << sentinelTwo[i] << endl;
  }

  return 0;
}