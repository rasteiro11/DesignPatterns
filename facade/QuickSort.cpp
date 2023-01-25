#include "Sorter.hpp"
#include <iostream>
class QuickSort : public Sorter {
  void sort() override { std::cout << "Quick Sort" << std::endl; }
};
