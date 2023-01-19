#include "singleton.hpp"
#include <iostream>
#include <mutex>

DatabaseConnector *DatabaseConnector::INSTANCE = nullptr;

DatabaseConnector *DatabaseConnector::get_instance() {
  if (!INSTANCE) {
    std::cout << "THIS INSTANCE WAS EMPTY" << std::endl;
    INSTANCE = new DatabaseConnector();
  }
  return INSTANCE;
}
