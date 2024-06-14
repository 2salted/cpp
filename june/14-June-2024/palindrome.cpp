#include <cstdint>
#include <iostream>
#include <string>

using uint = uint32_t;

int main() {
  std::string userInput, revStr;
  std::cout << "check for palindrome: ";
  std::cin >> userInput;

  for (int i = userInput.length() - 1; 0 <= i; --i) {
    revStr += userInput[i];
  }

  std::cout << userInput << " " << revStr << "\n";

  if (revStr == userInput) {
    std::cout << "Palindrome!" << std::endl;
    return 0;
  } else {
    std::cout << "not a palindrome!" << std::endl;
    return 0;
  }
}
