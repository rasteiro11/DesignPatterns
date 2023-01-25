#include "Chair.cpp"
#include "ShoppingCart.cpp"
#include "ShoppingItem.hpp"
#include "Table.cpp"
#include <iostream>
#include <vector>

int main() {
  std::vector<ShoppingItem *> items = std::vector<ShoppingItem *>();
  items.push_back(new Table("desk", 20));
  items.push_back(new Chair("chair1", 30));
  items.push_back(new Chair("desk2", 25));

  double sum = 0;

  ShoppingCartVisitor *visitor = new ShoppingCart();

  for (auto item : items) {
    sum += item->accept(visitor);
  }

  std::cout << sum << std::endl;
}
