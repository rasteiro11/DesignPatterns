#include "Factory.cpp"
#include "FactoryProducer.cpp"
#include "IFactory.hpp"
#include "IFactoryProducer.h"
#include "IVehicle.hpp"

int main() {
  IFactoryProducer *factory_producer = new FactoryProducer();
  IFactory *factory = factory_producer->get_factory(FactoryType::FUEL);

  IVehichle *car = factory->get_car(CarType::NISSAN);

  car->do_vrum_vrum();
}
