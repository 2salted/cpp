#include <cstddef>
#include <iostream>
#include <string>

int main() {
  std::string str = "Hello, World!";
  size_t len = 0;

  for (char c : str) {
    ++len;
  }

  std::cout << "Length of " << str << " is " << len;
  return 0;
}
