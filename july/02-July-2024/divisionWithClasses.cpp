#include <cstdint>
#include <iostream>
using namespace std;

class Fraction {
public:
  uint32_t numerator = 0;
  uint32_t denominator = 0;
};

void fraction(const Fraction &fraction) {
  cout << fraction.numerator / fraction.denominator << endl;
}

int main() {
  fraction(Fraction{10, 2});
  return 0;
}
