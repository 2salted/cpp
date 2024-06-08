#include <iostream>

int main() {
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  int i = number;

  while (i != 0) {
    if (number % i == 0) {
      std::cout << i << '\n';
    }
    --i;
  }
}
