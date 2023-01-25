#include "BubbleSort.cpp"
#include "MergeSort.cpp"
#include "QuickSort.cpp"
#include "Sorter.hpp"

class SortingManager {
  Sorter *bubble_sort, *quick_sort, *merge_sort;

public:
  SortingManager() {
    this->bubble_sort = new BubbleSort();
    this->bubble_sort = new QuickSort();
    this->bubble_sort = new MergeSort();
  }

  void do_bubble_sort() { this->bubble_sort->sort(); }
  void do_merge_sort() { this->merge_sort->sort(); }
  void do_quick_sort() { this->quick_sort->sort(); }
};
