#pragma once
#include <iostream>

// receiver
class Light {
public:
  inline void turn_on() { std::cout << "Lights are on..." << std::endl; }
  inline void turn_off() { std::cout << "Lights are off..." << std::endl; }
};
