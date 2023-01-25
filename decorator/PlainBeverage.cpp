#include "Beverage.hpp"

class PlainBeverage : public Beverage {
  int get_cost() override { return 5; }

  std::string get_description() override { return ""; }
};
