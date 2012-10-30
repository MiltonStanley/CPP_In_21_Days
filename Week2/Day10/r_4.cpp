//r_4.cpp
/* 4. Create a prefix and postfix increment operator for your SimpleCircle 
 * class that increments itsRadius.
 */

class SimpleCircle{
 public:
  SimpleCircle();
  ~SimpleCircle();
  void SetRadius(int);
  int GetRadius();
  void operator++ { return ++radius; }
  void operator++ (int) { return radius++ ;}
 private:
  int radius;
};

SimpleCircle::SimpleCircle():
  radius(5)
  {}

SimpleCircle::SimpleCircle(int radius_):
  radius(radius_)
  {}

