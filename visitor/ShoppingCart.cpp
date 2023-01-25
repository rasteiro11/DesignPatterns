#include "ShoppingItem.hpp"

class ShoppingCart : public ShoppingCartVisitor {
  double visit(ShoppingItem *item) override { return item->get_price(); }
};
