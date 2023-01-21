#ifndef ELETRIC_CARS_CPP
#define ELETRIC_CARS_CPP

#include "IVehicle.hpp"
#include <iostream>

class EletricFord : public IVehichle {
  void do_vrum_vrum() override {
    std::cout << "ELETRIC FORD CAR ASSEMBLING" << std::endl;
  }
};

class EletricNissan : public IVehichle {
  void do_vrum_vrum() override {
    std::cout << "ELETRIC NISSAN CAR ASSEMBLING" << std::endl;
  }
};
#endif
