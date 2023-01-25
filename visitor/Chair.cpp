#include "ShoppingItem.hpp"
#include <iostream>

class Chair : public ShoppingItem {

public:
  std::string type;

  Chair(std::string type, double price) {
    this->type = type;
    this->price = price;
  }

  double accept(ShoppingCartVisitor *visitor) override {
    return visitor->visit(this);
  }
};
