// r_1.cpp
/* 1. Write a SimpleCircle class declaration (only) with one member variable: 
 *  itsRadius. Include a default constructor, a destructor, and accessor methods 
 * for itsRadius.
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
