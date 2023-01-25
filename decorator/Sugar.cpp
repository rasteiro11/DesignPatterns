#include "Beverage.hpp"
#include "BeverageDecorator.cpp"

class Sugar : public BeverageDecorator {
public:
  Sugar(Beverage *beverage) : BeverageDecorator(beverage) {}
  int get_cost() override { return beverage->get_cost() + 3; }
  std::string get_description() override {
    return BeverageDecorator::get_description() + "sugar";
  }
};
