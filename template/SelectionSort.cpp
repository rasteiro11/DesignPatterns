#include "Algorithm.hpp"
#include <iostream>
#include <vector>
class SelectionSort : public Algorithm {
public:
  SelectionSort(std::vector<int> nums) : Algorithm(nums) {}

  void initialize() override {
    std::cout << "Selection Sort Algorithm" << std::endl;
  }

  void sorting() override {
    for (int i = 0; i < nums.size(); i++) {
      int index = i;
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[j] > nums[index]) {
          index = j;
        }
      }
      if (index != i) {
        swap(i, index);
      }
    }
  }

  void show_result() override {
    for (auto i : this->nums) {
      std::cout << i << std::endl;
    }
  }
};
