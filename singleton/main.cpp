#include "singleton.hpp"

int main() {
  // int test;
  DatabaseConnector *conn = DatabaseConnector::get_instance();
  DatabaseConnector *conn_2 = DatabaseConnector::get_instance();

  std::cout << conn << std::endl;
  std::cout << conn_2 << std::endl;
}
