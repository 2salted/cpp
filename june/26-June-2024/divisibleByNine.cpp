#include <cstdint>
#include <iostream>
using namespace std;

int main() {
  cout << "Numbers between 100 and 200, divisible by 9:\n";
  for (uint32_t i = 100; i <= 200; ++i) {
    if (i % 9 == 0) {
      cout << i << " ";
    }
  }
  return 0;
}
