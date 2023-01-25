#pragma once
#include <string>
class Beverage {
public:
  virtual int get_cost() = 0;
  virtual std::string get_description() = 0;
};
