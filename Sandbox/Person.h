// Person.h

class Person{
  public: 
  Person(int age_){ age = age_; };
  ~Person(){};
  void SetAge(int new_age_){age = new_age_;};
  int GetAge() const {return age;};
 private:
  int age;
};