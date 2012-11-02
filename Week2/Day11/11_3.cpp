//11_3.cpp

#include <iostream>

int main() {
  enum WeekDays {Sun, Mon, Tue, Wed, Thu, Fri, Sat, DaysInWeek };
  int ArrayWeek[DaysInWeek] = { 10, 20, 30, 40, 50, 60, 70 };

  std::cout << "The value at Tuesday is: " << ArrayWeek[Tue];
  return 0;
}