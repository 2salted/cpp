#include <iostream>
using std::cin;
using std::cout;

int main() {
  unsigned int n;
  double sum = 0;
  cout << "enter n amount of numbers: ";
  cin >> n;

  for (unsigned int i = 0; i < n; ++i) {
    double temp;
    cout << "Enter a number to add: ";
    cin >> temp;
    sum += temp;
  }

  cout << "the sum of those " << n << " numbers = " << sum << std::endl;
}
