#pragma once

class Strategy {
public:
  inline virtual int execute(int a, int b) = 0;
};
