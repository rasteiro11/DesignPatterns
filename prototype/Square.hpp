#pragma once

#include "Shape.hpp"
#include <iostream>

class Square : public Shape {
public:
  Square(int width, int height) : Shape(width, height) {}

  void draw() override {
    std::cout << "Square with width: " << width << " height " << height
              << std::endl;
  }

  Shape *cloneObject() override {
    // this is the prototype pattern
    return new Square(width, height);
  }
};
