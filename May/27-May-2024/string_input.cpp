#include <iostream>
#include <string>

int main() {
  std::string string, str2;
  std::cout << "Enter a string:";
  std::cin >> str2;
  std::cin.ignore();
  std::getline(std::cin, string);
  std::cout << "string 1: " << string << "string 2:" << str2 << std::endl;
}
