// 10.8
// Counter Class - true increment

typedef unsigned short USHORT;
#include <iostream>

class Counter {
 public:
  Counter();
  ~Counter() {}
  USHORT GetItsVal() const { return itsVal; }
  void SetItsVal(USHORT x) { itsVal = x; }
  void Increment() { ++itsVal ; }
  void operator++ () { ++itsVal; }

 private:
  USHORT itsVal;
};

Counter::Counter():
  itsVal(0)
  {};

int main() {
  Counter i;
  std::cout << "The value of i is " << i.GetItsVal() << std::endl;
  i.Increment();
  std::cout << "The value of i is " << i.GetItsVal() << std::endl;
  ++i;
  std::cout << "The value of i is " << i.GetItsVal() << std::endl;
  return 0;
}