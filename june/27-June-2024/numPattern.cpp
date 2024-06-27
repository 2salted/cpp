#include <iostream>
using namespace std;

int main() {
  uint32_t rows, count = 1;
  cout << "Enter number of rows: ";
  cin >> rows;
  for (uint32_t i = 1; i <= rows; ++i) {
    for (uint32_t j = 1; j <= count; ++j) {
      cout << j;
    }
    ++count;
    cout << "\n";
  }
  return 0;
}
