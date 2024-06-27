#include <cstdint>
#include <iostream>
using namespace std;

int main() {
  uint32_t terms, startingNum, commonDif;
  cout << "Enter Starting number: ";
  cin >> startingNum;
  cout << "Enter number of terms: ";
  cin >> terms;
  cout << "Enter common difference: ";
  cin >> commonDif;
  uint32_t sum = 0;

  // x = 1, x = 6
  // sum = 7

  for (uint32_t i = 1; i <= terms; ++i) {
    sum += startingNum;
    startingNum += commonDif;
  }
  cout << sum;
  return 0;
}
