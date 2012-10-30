//r_2.cpp
/* 2. Using the class you created in Exercise 1, write the implementation
 * of the default constructor, initializing itsRadius with the value 5.
 */

class SimpleCircle{
 public:
  SimpleCircle();
  ~SimpleCircle();
  void SetRadius(int);
  int GetRadius();
 private:
  int radius;
};

SimpleCircle::SimpleCircle():
  radius(5)
  {}

