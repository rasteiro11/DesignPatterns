#include "Iterator.hpp"
#include "NameIterator.cpp"
#include "NameRepository.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
  NameRepository *repo = new NameRepository();
  Iterator<std::string> *iterator = repo->get_iterator();

  while (iterator->has_next()) {
    std::cout << iterator->next() << std::endl;
  }
}
