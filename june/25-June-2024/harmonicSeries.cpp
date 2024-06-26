#include <iostream>
using namespace std;

int main() {
  double nthTerm, sum = 0;
  cout << "Input harmonic terms: ";
  cin >> nthTerm;
  for (unsigned int i = 1; i <= nthTerm; ++i) {
    sum += 1.0 / i;
  }
  cout << sum << endl;
  return 0;
}
