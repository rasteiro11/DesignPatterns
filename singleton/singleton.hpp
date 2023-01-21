#ifndef SINGLETON_HPP
#define SINGLETON_HPP
#include <iostream>
#include <mutex>

class DatabaseConnector {
private:
  static DatabaseConnector *INSTANCE;

public:
  static DatabaseConnector *get_instance();
};

#endif
