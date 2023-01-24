#include "Algorithm.hpp"
#include "BubbleSort.cpp"
#include <vector>

int main() {
  std::vector<int> nums = {1, 5, 4, 3, 12, 7};
  Algorithm *sorting = new BubbleSort(nums);
  sorting->sort();
}
