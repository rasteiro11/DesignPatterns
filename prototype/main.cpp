#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Square.hpp"
int main() {
  Shape *square = new Square(10, 5);
  square->draw();

  Shape *sqare_clone = square->cloneObject();
  sqare_clone->draw();
};
