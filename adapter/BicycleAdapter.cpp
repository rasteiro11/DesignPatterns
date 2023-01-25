#include "Bicycle.cpp"
#include "Vehicle.hpp"
#include <iostream>
class BicycleAdapter : public Vehicle {
  Bicycle *bicycle;

public:
  BicycleAdapter(Bicycle *bicycle) { this->bicycle = bicycle; }

  void accelerate() override { this->bicycle->go(); }
};
