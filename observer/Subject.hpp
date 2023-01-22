#pragma once

#include "Observer.hpp"

class Subject {
public:
  virtual void add_observer(Observer *o) = 0;
  virtual void remove_observer(Observer *o) = 0;
  virtual void notify_all_observers();
};
