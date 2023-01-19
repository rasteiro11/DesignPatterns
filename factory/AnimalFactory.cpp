#include "AnimalFactory.hpp"
#include "Cat.cpp"
#include "Dog.cpp"

Animal *AnimalFactory::get_animal(AnimalType type) {
  if (type == AnimalType::CAT) {
    return new Cat();
  } else {
    return new Dog();
  }
}
