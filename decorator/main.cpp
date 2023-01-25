#include "Beverage.hpp"
#include "Milk.cpp"
#include "PlainBeverage.cpp"
#include "Sugar.cpp"
#include <iostream>

int main() {
  Beverage *beverage = new Sugar(new Milk(new PlainBeverage()));
  std::cout << "COST: " << beverage->get_cost() << std::endl;
  std::cout << "DESCRIPTION: " << beverage->get_description() << std::endl;
}
