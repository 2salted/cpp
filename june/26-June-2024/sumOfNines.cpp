#include <iostream>
using namespace std;

int main() {
  unsigned long long int sum = 0;
  unsigned int terms, n = 9;
  cout << "Enter number of terms: ";
  cin >> terms;
  for (unsigned int i = 1; i <= terms; ++i) {
    sum += n;
    n = n * 10 + 9;
  }
  cout << sum;
  return 0;
}
