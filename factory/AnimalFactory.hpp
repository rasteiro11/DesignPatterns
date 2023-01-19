#ifndef ANIMAL_FACTORY_HPP
#define ANIMAL_FACTORY_HPP
#include "Animal.hpp"

enum AnimalType {
  CAT,
  DOG,
};

class AnimalFactory {
public:
  static Animal *get_animal(AnimalType type);
};

#endif
