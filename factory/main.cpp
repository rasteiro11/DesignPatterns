#include "Animal.hpp"
#include "AnimalFactory.hpp"
int main() {
  Animal *animal = AnimalFactory::get_animal(AnimalType::DOG);
  animal->eat();
}
