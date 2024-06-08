#include <cmath>
#include <iostream>

int main() {
  int num, i;
  std::cout << "Enter a number: ";
  std::cin >> num;
  i = num;

  while (i != 0) {
    if (num % i == 0) {
      int maxDivisor = sqrt(i);
      bool isPrime = true;

      for (int j = 2; j <= maxDivisor; ++j) {
        if (i % j == 0) {
          isPrime = false;
        }
      }
      if (isPrime) {
        std::cout << i << std::endl;
      }
    }
    --i;
  }
  return 0;
}
