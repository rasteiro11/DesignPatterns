#ifndef IFACTORY_HPP
#define IFACTORY_HPP

#include "IVehicle.hpp"

enum CarType { FORD, NISSAN };

class IFactory {
public:
  virtual IVehichle *get_car(CarType type) = 0;
};

#endif
