#include <iostream>

class Person {

public:
  // they are public just for demonstration
  std::string name;
  int age;

  Person(std::string name, int age) {
    this->name = name;
    this->age = age;
  }
};
