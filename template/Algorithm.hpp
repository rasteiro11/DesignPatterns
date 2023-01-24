#pragma once
#include <iostream>
#include <vector>
class Algorithm {
protected:
  std::vector<int> nums;

  void swap(int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
  }

public:
  Algorithm(std::vector<int> nums) { this->nums = nums; }

  virtual void initialize() = 0;
  virtual void sorting() = 0;
  virtual void show_result() = 0;

  void sort() {
    initialize();
    sorting();
    show_result();
  }
};
