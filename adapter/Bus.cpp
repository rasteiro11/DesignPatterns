#include "Vehicle.hpp"
#include <iostream>
class Bus : public Vehicle {
  void accelerate() override {
    std::cout << "Bus is accelerating" << std::endl;
  }
};
