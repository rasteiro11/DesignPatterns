#ifndef FACTORY_PRODUCER_CPP
#define FACTORY_PRODUCER_CPP

#include "Factory.cpp"
#include "IFactory.hpp"
#include "IFactoryProducer.h"

class FactoryProducer : public IFactoryProducer {
  IFactory *get_factory(FactoryType type) override {
    switch (type) {
    case FactoryType::ELETRIC:
      return new EletricFactory();
    case FactoryType::FUEL:
      return new FuelFactory();
    default:
      return nullptr;
    }
  }
};

#endif
