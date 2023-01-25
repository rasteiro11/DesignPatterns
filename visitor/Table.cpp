#include "ShoppingItem.hpp"
#include <iostream>

class Table : public ShoppingItem {

public:
  std::string type;

  Table(std::string type, double price) {
    this->type = type;
    this->price = price;
  }

  double accept(ShoppingCartVisitor *visitor) override {
    return visitor->visit(this);
  }
};
