#include "PersonBuilder.cpp"
#include <iostream>
#include <string>

int main() {
  PersonBuilder *b = new PersonBuilder("Titico03", "titico0306@gmail.com");
  Person *p = b->with_address("Av Gamer 420")
                  ->with_university("University Gamer")
                  ->with_age(42069)
                  ->build();

  std::cout << p->name << std::endl;
  std::cout << p->email << std::endl;
  std::cout << p->address << std::endl;
  std::cout << p->university << std::endl;
  std::cout << p->age << std::endl;
};
