#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  string line;
  ifstream myfile ("here.txt");
  if (myfile.is_open()){
    while (myfile.good()) {
      getline (myfile, line);
      cout << line << endl;
      if (line == "6!")
        cout << "\tFound line 6!!\n";
      
      
    }
    myfile.close();
  }
  
  else cout << "File not found!";
  
  return 0;
}