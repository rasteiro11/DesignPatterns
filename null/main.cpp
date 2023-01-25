#include "CustomerFactory.cpp"
#include <iostream>
int main() {
  CustomerFactory *factory = new CustomerFactory();
  std::cout << factory->get_customer("Adam 312")->get_customer() << std::endl;
}
