#pragma once
#include "Strategy.hpp"

class Mul : public Strategy {
  inline int execute(int a, int b) override { return a * b; }
};
