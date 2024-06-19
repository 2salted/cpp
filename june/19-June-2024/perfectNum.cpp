// Write a program to find the perfect numbers between 1 and 500.
#include <iostream>
using std::cout;

int main() {
  cout << "Perfect numbers between 1 and 500:\n";
  int sumOfDivisors = 0;
  for (int i = 1; i <= 500; ++i) {
    for (int j = 1; j <= i; ++j) {
    }
    if (sumOfDivisors == i) {
      cout << sumOfDivisors;
    }
  }
  return 0;
}
