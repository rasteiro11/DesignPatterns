#include "Algorithm.hpp"
#include <iostream>
#include <vector>
class BubbleSort : public Algorithm {
public:
  BubbleSort(std::vector<int> nums) : Algorithm(nums) {}

  void initialize() override {
    std::cout << "Bubble Sort Algorithm" << std::endl;
  }

  void sorting() override {
    for (int i = 0; i < nums.size() - 1; i++) {
      for (int j = 0; j < nums.size() - i - 1; j++) {
        if (nums[j] > nums[j + 1]) {
          swap(j, j + 1);
        }
      }
    }
  }

  void show_result() override {
    for (auto i : this->nums) {
      std::cout << i << std::endl;
    }
  }
};
