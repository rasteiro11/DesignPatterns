#include "Vehicle.hpp"
#include <iostream>
class Car : public Vehicle {
  void accelerate() override {
    std::cout << "Car is accelerating" << std::endl;
  }
};
