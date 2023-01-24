#include "Comand.hpp"
#include "Light.hpp"

class TurnOffCommand : public Command {
private:
  Light *light;

public:
  TurnOffCommand(Light *light) { this->light = light; }
  void execute() override { this->light->turn_off(); }
};
