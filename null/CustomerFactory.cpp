#include "AbstractCustomer.hpp"
#include "Database.cpp"
#include "NullCustomer.cpp"
#include "RealCustomer.cpp"

class CustomerFactory {
  Database *database;

public:
  CustomerFactory() { this->database = new Database(); }

  AbstractCustomer *get_customer(std::string name) {
    if (database->exist(name)) {
      return new RealCustomer(name);
    }
    return new NullCustomer();
  }
};
