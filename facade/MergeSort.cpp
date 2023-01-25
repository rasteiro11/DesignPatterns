#include "Sorter.hpp"
#include <iostream>
class MergeSort : public Sorter {
  void sort() override { std::cout << "Merge Sort" << std::endl; }
};
