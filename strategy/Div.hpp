#pragma once
#include "Strategy.hpp"

class Div : public Strategy {
  inline int execute(int a, int b) override { return a / b; }
};
