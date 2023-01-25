#pragma once

class Shape {
protected:
  int x, y;

public:
  virtual void draw() = 0;
  void setX(int x) { this->x = x; }
  void setY(int y) { this->y = y; }
};
