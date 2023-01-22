#include "WeatherObserver.cpp"
#include "WeatherStation.cpp"
#include <iostream>
int main() {
  WeatherStation *station = new WeatherStation();
  WeatherObserver *observer = new WeatherObserver(station);

  station->set_humidity(420);
  station->set_temperature(6969);
  station->set_pressure(42069);
}
