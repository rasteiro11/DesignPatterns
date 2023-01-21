#include <iostream>

class Person {

public:
  // they are public just for demonstration
  std::string name, email, address, university;
  int age;

  Person(std::string name, std::string email, std::string address,
         std::string university, int age) {
    this->name = name;
    this->email = email;
    this->address = address;
    this->university = university;
    this->age = age;
  }
};
