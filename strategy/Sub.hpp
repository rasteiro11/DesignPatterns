#pragma once
#include "Strategy.hpp"

class Sub : public Strategy {
  inline int execute(int a, int b) override { return a - b; }
};
