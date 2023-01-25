#include "Sorter.hpp"
#include <iostream>
class BubbleSort : public Sorter {
  void sort() override { std::cout << "Bubble Sort" << std::endl; }
};
