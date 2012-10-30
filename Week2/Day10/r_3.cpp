//r_3.cpp
/* 3. Using the same class, add a second constructor that takes a value as its
 * parameter and assigns that value to itsRadius.
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

SimpleCircle::SimpleCircle(int radius_):
  radius(radius_)
  {}

