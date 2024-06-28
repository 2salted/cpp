#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::pow;

using i32 = int32_t;

int main() {
  i32 n, x;

  cout << "Enter the number of terms: ";
  cin >> n;
  cout << "Enter the base number: ";
  cin >> x;

  // x - x^3 + x^5 - x^7 ...

  i32 acc = 0;

  for (i32 i = 1; i <= n; ++i) {
    acc += pow(-1, i - 1) * pow(x, 2 * i - 1);
  }

  cout << "The sum of series is: " << acc << endl;

  return 0;
}
