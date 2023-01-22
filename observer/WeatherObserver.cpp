#include "Observer.hpp"
#include "Subject.hpp"
#include <iostream>
class WeatherObserver : public Observer {
  int pressure, temperature, humidity;
  Subject *subject;

public:
  WeatherObserver(Subject *subject) {
    this->subject = subject;
    this->subject->add_observer(this);
  }

  void update(int pressure, int temperature, int humidity) override {
    this->pressure = pressure;
    this->temperature = temperature;
    this->humidity = humidity;
    std::cout << "Pressure: " << pressure << " Temperature " << temperature
              << " Humidity: " << humidity;
  }
};
