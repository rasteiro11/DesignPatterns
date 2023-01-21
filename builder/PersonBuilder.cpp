#include "Person.cpp"
#include <iostream>

class PersonBuilder {
  std::string name, email, address, university;
  int age;

public:
  PersonBuilder(std::string name, std::string email) {
    this->name = name;
    this->email = email;
  }

  PersonBuilder *with_age(int age) {
    this->age = age;
    return this;
  }

  PersonBuilder *with_address(std::string address) {
    this->address = address;
    return this;
  }

  PersonBuilder *with_university(std::string university) {
    this->university = university;
    return this;
  }

  Person *build() { return new Person(name, email, address, university, age); }
};
