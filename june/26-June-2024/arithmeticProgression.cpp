#include <cstdint>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using u32 = uint32_t;

// a, a + d, a + 2d, a + 3d ... a + (n - 1)d
// na + (0 + 1 + 2 ... (n - 1))d
// 1 to n, n(n + 1) / 2
// 0 to n - 1
// 1 to n - 1, (n - 1) (n - 1 + 1) / 2 = (n - 1)(n + 0) / 2 = (n - 1)n/2
// S_n = na + n(n - 1)d/2

int main() {
  u32 a, n, d;
  cout << "Enter a, n, d";
  cin >> a >> n >> d;

  u32 s_n = n * a + n * (n - 1) * d / 2;
  cout << "Sum of " << n << " terms of the AP is " << s_n << endl;
  return 0;
}
