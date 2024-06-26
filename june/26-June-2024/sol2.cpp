#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using i32 = int32_t;

int main() {
  i32 n, x;

  cout << "Enter the number of terms: ";
  cin >> n;
  cout << "Enter the base number: ";
  cin >> x;

  // t1, t2, t3, t4
  // x, -x^3, x^5, -x^7
  // t2 / t1,
  //  -x^2, -x^2, -x^2

  i32 acc = 0, mul = -x * x;

  for (i32 i = 1; i <= n; ++i) {
    acc += x;
    x *= mul;
  }

  cout << "The sum of series is: " << acc << endl;

  return 0;
}
