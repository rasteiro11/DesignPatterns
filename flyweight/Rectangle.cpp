#include "Shape.hpp"
#include <iostream>
class Rectangle : public Shape {
  std::string color;

public:
  Rectangle(std::string color) { this->color = color; }

  void draw() override {
    std::cout << "Drawing a Rectangle " << color << " x=" << x << " y=" << y
              << std::endl;
  }
};
