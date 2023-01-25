#pragma once

class ShoppingItem;

class ShoppingCartVisitor {
public:
  virtual double visit(ShoppingItem *item) = 0;
};

class ShoppingItem {
protected:
  double price;

public:
  virtual double accept(ShoppingCartVisitor *visitor) = 0;
  double get_price() { return this->price; }
};
