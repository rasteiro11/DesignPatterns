#pragma once
#include "Shape.hpp"
#include <iostream>

class Rectangle : public Shape {
  Rectangle(int width, int height) : Shape(width, height) {}

  void draw() override {
    std::cout << "Rectangle with width: " << width << " height " << height
              << std::endl;
  }

  Shape *cloneObject() override {
    // this is the prototype pattern
    return new Rectangle(width, height);
  }
};
