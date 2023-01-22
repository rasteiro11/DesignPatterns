#pragma once
#include "Strategy.hpp"

class Add : public Strategy {
  inline int execute(int a, int b) override { return a + b; }
};
