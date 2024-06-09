#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  uint32_t n, currentNum = 2, iterationNum = 1;
  cout << "Enter the amount of prime numbers you want to print: ";
  cin >> n;

  while (n != 0) {
    uint32_t maxDivisor = sqrt(currentNum);
    bool isPrime = true;
    for (uint32_t j = 2; j <= maxDivisor; ++j) {
      if (currentNum % j == 0) {
        isPrime = false;
      }
    }
    if (isPrime == true) {
      cout << iterationNum << ". " << currentNum << "\n" << endl;
      --n;
      ++iterationNum;
    }
    ++currentNum;
  }
  return 0;
}
