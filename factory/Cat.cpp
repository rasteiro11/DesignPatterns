#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
  void eat() override { std::cout << "Cat is eating" << std::endl; }
};
