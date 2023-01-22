#pragma once
#include "Strategy.hpp"
#include <iostream>

class OperationManager {
private:
  Strategy *strategy;

public:
  inline void set_strategy(Strategy *strategy) { this->strategy = strategy; }
  void execute(int n1, int n2) {
    if (this->strategy != nullptr) {
      std::cout << this->strategy->execute(n1, n2) << std::endl;
    }
  }
};
