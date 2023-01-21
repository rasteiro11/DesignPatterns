#ifndef FACTORY_CPP
#define FACTORY_CPP

#include "EletricCars.cpp"
#include "FuelCars.cpp"
#include "IFactory.hpp"
#include <iostream>

class EletricFactory : public IFactory {
  IVehichle *get_car(CarType type) override {
    switch (type) {
    case CarType::FORD:
      return new EletricFord();
    case CarType::NISSAN:
      return new EletricNissan();
    default:
      return nullptr;
    }
  }
};

class FuelFactory : public IFactory {
  IVehichle *get_car(CarType type) override {
    switch (type) {
    case CarType::FORD:
      return new FuelFord();
    case CarType::NISSAN:
      return new FuelNissan();
    default:
      return nullptr;
    }
  }
};

#endif
