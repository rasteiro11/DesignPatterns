#include "AbstractCustomer.hpp"
#include <string>

class RealCustomer : public AbstractCustomer {
  std::string customer_name;

public:
  RealCustomer(std::string name) { this->customer_name = name; }

  bool is_null() override { return false; }

  std::string get_customer() override { return this->customer_name; }
};
