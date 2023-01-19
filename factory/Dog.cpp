#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
  void eat() override { std::cout << "Dog is eating" << std::endl; }
};
