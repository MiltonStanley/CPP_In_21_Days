// Counter Class

typedef unsigned short USHORT;
#include <iostream>

class Counter {
 public:
  Counter();
  ~Counter() {}
  USHORT GetItsVal() const { return itsVal; }
  void SetItsVal(USHORT x) { itsVal = x; }

 private:
  USHORT itsVal;
};

Counter::Counter():
  itsVal(0)
  {};

int main() {
  Counter i;
  std::cout << "The value of i is " << i.GetItsVal() << std::endl;
  return 0;
}