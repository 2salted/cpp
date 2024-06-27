#include <iostream>
using namespace std;

int main() {
  uint32_t terms, startingNum, commonRatio;
  cout << "Enter Starting number: ";
  cin >> startingNum;
  cout << "Enter number of terms: ";
  cin >> terms;
  cout << "Enter common ratio: ";
  cin >> commonRatio;
  uint32_t sum = 0;
  for (uint32_t i = 1; i <= terms; ++i) {
    sum += startingNum;
    startingNum *= 2;
  }
  cout << sum;
  return 0;
}
