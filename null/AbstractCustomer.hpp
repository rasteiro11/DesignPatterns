#pragma once
#include <string>
class AbstractCustomer {
protected:
  std::string customer_name;

public:
  virtual bool is_null() = 0;
  virtual std::string get_customer() = 0;
};
