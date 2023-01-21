#ifndef FUEL_CARS_CPP
#define FUEL_CARS_CPP

#include "IVehicle.hpp"
#include <iostream>

class FuelFord : public IVehichle {
  void do_vrum_vrum() override {
    std::cout << "FUEL FORD CAR ASSEMBLING" << std::endl;
  }
};

class FuelNissan : public IVehichle {
  void do_vrum_vrum() override {
    std::cout << "FUEL NISSAN CAR ASSEMBLING" << std::endl;
  }
};
#endif
