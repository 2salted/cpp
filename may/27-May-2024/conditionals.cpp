#include <iostream>
#include <string>

int main() {
  std::string name;
  uint16_t age;

  std::cout << "Enter your name:";
  std::getline(std::cin, name);

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 16) {
    std::cout << name << " is allowed to drive!";
  } else {
    std::cout << "Sorry " << name << " isn't old enough to drive." << std::endl;
  }
}
