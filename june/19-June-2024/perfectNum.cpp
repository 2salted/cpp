// Write a program to find the perfect numbers between 1 and 500.
#include <iostream>
using std::cout;

int main() {
  cout << "Perfect numbers between 1 and 500:\n";
  for (int i = 1; i <= 500; ++i) {
    int sum = 0;
    for (int j = 1; j < i; ++j) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (sum == i) {
      cout << i << "\n";
    }
  }
}
