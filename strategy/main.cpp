#include "Add.hpp"
#include "OperationManager.hpp"
#include <iostream>

int main() {
  OperationManager *manager = new OperationManager();

  manager->set_strategy(new Add());
  manager->execute(420, 69);
};
