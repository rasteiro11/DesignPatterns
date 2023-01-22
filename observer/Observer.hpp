#pragma once
class Observer {
public:
  virtual void update(int pressure, int temperature, int humidity) = 0;
};
