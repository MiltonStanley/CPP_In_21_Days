//10_5.cpp

#include <iostream>

class CAT {
 public:
  CAT();              // Default constructor
  CAT(const cat &);   // Copy constructor
  ~CAT();
  int GetAge() const { return *itsAge; }
  
}