#include <cstdint>
#include <iostream>
using namespace std;

int main() {
  uint32_t rows, terms, count, pyraNum = 1, numCount = 1;
  cout << "Enter number of terms: ";
  cin >> terms;
  count = terms;
  for (uint32_t i = terms; 0 < i; --i) {
    for (uint32_t j = count; 0 < j; --j) {
      cout << " ";
    }
    for (uint32_t k = 1; k <= pyraNum; ++k) {
      cout << numCount << " ";
      ++numCount;
    }
    ++pyraNum;
    --count;
    cout << "\n";
  }
}
