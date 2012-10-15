#include <iostream>
#include <fstream>

using namespace std;

int main() {
  string line;
  ifstream myfile ("here.txt");
  if (myfile.is_open()){
    //while (myfile.good()) {
     while ( getline (myfile, line)){
      cout << line << endl;
      if (line == "6!")
        cout << "\tFound line 6!!\n";
      
      
    }
    myfile.close();
  }
  
  else cout << "File not found!";
  
  return 0;
}
