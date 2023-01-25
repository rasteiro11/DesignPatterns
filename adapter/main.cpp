#include "BicycleAdapter.cpp"
#include "Bus.cpp"
#include "Car.cpp"
#include "Vehicle.hpp"
int main() {
  Vehicle *bus = new Bus();
  Vehicle *car = new Car();
  Vehicle *bike = new BicycleAdapter(new Bicycle());
  bus->accelerate();
  car->accelerate();
  bike->accelerate();
}
