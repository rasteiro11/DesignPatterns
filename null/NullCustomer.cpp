#include "AbstractCustomer.hpp"
class NullCustomer : public AbstractCustomer {
  bool is_null() override { return true; }
  std::string get_customer() override {
    return "This customer does not exists";
  }
};
