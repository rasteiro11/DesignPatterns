#pragma once
class Shape {

protected:
  int width, height;

public:
  Shape(int width, int height) {
    this->height = height;
    this->width = width;
  }

  virtual void draw() = 0;
  virtual Shape *cloneObject() = 0;
};
