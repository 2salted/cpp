#include <cstdint>
#include <iostream>
using namespace std;

int main() {
  uint32_t terms, n1 = 0, n2 = 1, n3;
  cout << "Enter number of terms: ";
  cin >> terms;
  cout << n2 << " ";
  for (uint32_t i = 1; i <= terms; ++i) {
    n3 = n1 + n2;
    cout << n3 << " ";
    n1 = n2;
    n2 = n3;
  }
  return 0;
}
