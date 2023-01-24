#pragma once
#include "Iterator.hpp"
#include "NameIterator.cpp"
#include <iostream>
#include <vector>

class NameRepository {
  std::vector<std::string> repo = std::vector<std::string>({"Gamer", "Wesley"});

public:
  Iterator<std::string> *get_iterator() { return new NameIterator(this->repo); }
};
