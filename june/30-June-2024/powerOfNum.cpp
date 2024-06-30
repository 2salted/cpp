#include <iostream>
using namespace std;

int main() {
  uint32_t base, exponent, res = 1;

  cout << "Enter the base: ";
  cin >> base;
  cout << "Enter the exponent: ";
  cin >> exponent;

  for (uint32_t i = 0; i < exponent; ++i) {
    res = res * base;
  }
  cout << res;
  return 0;
}
