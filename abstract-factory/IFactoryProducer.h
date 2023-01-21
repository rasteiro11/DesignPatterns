#ifndef FACTORY_PRODUCER_H
#define FACTORY_PRODUCER_H

#include "IFactory.hpp"

enum FactoryType { ELETRIC, FUEL };

class IFactoryProducer {
public:
  virtual IFactory *get_factory(FactoryType type) = 0;
};

#endif
