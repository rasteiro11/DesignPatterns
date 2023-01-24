#include "Comand.hpp"
#include <list>

// invoker
class Switcher {
public:
  std::list<Command *> commands;
  Switcher() { this->commands = std::list<Command *>(); }

  void add_command(Command *command) { this->commands.push_back(command); }
  void execute_commands() {
    for (auto c : commands) {
      c->execute();
    }
  }
};
