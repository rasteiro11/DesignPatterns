#include "Iterator.hpp"
#include <iostream>
#include <string>
#include <vector>

class NameIterator : public Iterator<std::string> {
  int index;
  std::vector<std::string> names;

public:
  NameIterator(std::vector<std::string> names) {
    this->index = 0;
    this->names = names;
  }

  bool has_next() override { return index < names.size(); }

  std::string next() {
    if (has_next()) {
      return this->names[index++];
    }
    return nullptr;
  }
};
