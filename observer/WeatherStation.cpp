#include "Observer.hpp"
#include "Subject.hpp"
#include <list>

class WeatherStation : public Subject {
  int pressure, humidity, temperature;
  std::list<Observer *> observer_list;

public:
  WeatherStation() { this->observer_list = std::list<Observer *>(); }
  void add_observer(Observer *o) override { this->observer_list.push_back(o); }
  void remove_observer(Observer *o) override { this->observer_list.remove(o); }
  void notify_all_observers() override {
    for (auto o : this->observer_list) {
      o->update(this->pressure, this->temperature, this->humidity);
    }
  }
  void set_pressure(int pressure) {
    this->pressure = pressure;
    this->notify_all_observers();
  }

  void set_temperature(int temperature) {
    this->temperature = temperature;
    this->notify_all_observers();
  }

  void set_humidity(int humidity) {
    this->humidity = humidity;
    this->notify_all_observers();
  }
};
