#include "Beverage.hpp"
#include "BeverageDecorator.cpp"

class Milk : public BeverageDecorator {
public:
  Milk(Beverage *beverage) : BeverageDecorator(beverage) {}
  int get_cost() override { return beverage->get_cost() + 3; }
  std::string get_description() override {
    return BeverageDecorator::get_description() + "milk";
  }
};
