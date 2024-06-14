#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using uint = uint32_t;

int main() {
  std::string string, split;
  std::vector<std::string> splitArr;
  std::cout << "Enter a string: ";
  std::getline(std::cin, string);

  std::cout << "\nWhat character do you want to split your array by: ";
  std::getline(std::cin, split);

  for (uint i = 0; i < string.length(); ++i) {
  }
}
