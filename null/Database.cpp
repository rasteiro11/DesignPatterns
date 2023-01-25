#include <list>
#include <string>
#include <vector>

class Database {
  std::vector<std::string> customerNames;

public:
  Database() {
    this->customerNames = std::vector<std::string>();
    this->customerNames.push_back("Adam");
    this->customerNames.push_back("Adam 2");
    this->customerNames.push_back("Adam 3");
    this->customerNames.push_back("Adam 4");
    this->customerNames.push_back("Adam 5");
  }

  bool exist(std::string name) {
    for (auto n : this->customerNames) {
      if (n == name) {
        return true;
      }
    }
    return false;
  }
};
