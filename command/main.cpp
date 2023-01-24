#include "Light.hpp"
#include "Switcher.cpp"
#include "TurnOffCommand.cpp"
#include "TurnOnCommand.cpp"
int main() {
  Switcher *switcher = new Switcher();
  Light *light = new Light();

  TurnOffCommand *offCommand = new TurnOffCommand(light);
  TurnOnCommand *onCommand = new TurnOnCommand(light);

  switcher->add_command(onCommand);
  switcher->add_command(offCommand);

  switcher->execute_commands();
}
