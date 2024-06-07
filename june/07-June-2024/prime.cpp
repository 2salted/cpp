#include <cmath>
#include <iostream>
using std::cin;
using std::cout;

int main() {
  int num;
  cout << "Enter a number and check if it's a prime number:";
  cin >> num;
  int maxDivisor = sqrt(num);

  for (int i = 2; i <= maxDivisor; ++i) {
    if (num % i == 0) {
      cout << num << " is not a prime number";
      return 0;
    }
  }
  cout << num << " is a prime number";
  return 0;
}
