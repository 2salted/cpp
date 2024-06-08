#include <cmath>
#include <iostream>

int main() {
  int number, i;
  std::cout << "Enter a number: ";
  std::cin >> number;
  i = number;

  while (i != 0) {
    if (number % i == 0) {
      int maxDivisor = sqrt(number);

      for (int i = 2; i <= maxDivisor; ++i) {
        if (number % i == 0) {
          std::cout << number << " is not a prime number";
          return 0;
        }
      }
      std::cout << i << '\n';
    }
    --i;
  }
}
