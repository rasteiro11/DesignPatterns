#include "Rectangle.cpp"
#include "Shape.hpp"
#include <map>
#include <string>
#include <unordered_map>

class ShapeFactory {
  std::unordered_map<std::string, Shape *> shapes;

public:
  ShapeFactory() { shapes = std::unordered_map<std::string, Shape *>(); }

  Shape *get_shape(std::string color) {
    if (shapes.count(color) != 0) {
      return shapes[color];
    }
    Shape *shape = new Rectangle(color);
    shapes[color] = shape;
    return shape;
  }
};
