#pragma once
#include "Beverage.hpp"
class BeverageDecorator : public Beverage {
protected:
  Beverage *beverage;

  BeverageDecorator(Beverage *beverage) { this->beverage = beverage; }

  int get_cost() override { return this->beverage->get_cost(); }

  std::string get_description() override {
    return this->beverage->get_description();
  }
};
