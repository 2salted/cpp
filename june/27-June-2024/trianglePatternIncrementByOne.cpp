#include <cstdint>
#include <iostream>
using namespace std;

int main() {
  uint32_t terms, count = 1, numCount = 1;
  cout << "Enter the amount of terms: ";
  cin >> terms;
  for (uint32_t i = 1; i <= terms; ++i) {
    for (uint32_t j = 1; j <= count; ++j) {
      cout << numCount << " ";
      ++numCount;
    }
    ++count;
    cout << "\n";
  }
}
