#include "ShapeFactory.cpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>

static const int N_COLORS = 3;

class FlyweightSimulator {
  std::string colors[N_COLORS] = {"RED", "GREEN", "BLUE"};
  ShapeFactory *factory;

public:
  FlyweightSimulator() {
    srand(time(NULL));
    factory = new ShapeFactory();
  }

  void run() {
    std::cout << std::rand() % N_COLORS << std::endl;
    Shape *rect = factory->get_shape(colors[std::rand() % N_COLORS]);
    rect->setX(std::rand());
    rect->setY(std::rand());
    rect->draw();
  }
};
