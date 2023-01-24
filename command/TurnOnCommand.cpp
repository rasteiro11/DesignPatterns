#include "Comand.hpp"
#include "Light.hpp"

class TurnOnCommand : public Command {
private:
  Light *light;

public:
  TurnOnCommand(Light *light) { this->light = light; }
  void execute() override { this->light->turn_on(); }
};
