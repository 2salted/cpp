// Write a program to list non-prime numbers from 1 to an upperbound
#include <iostream>
using namespace std;

bool isNotPrime(const int x) {
  for (int i = 2; i < x; ++i) {
    if (x % i == 0) {
      return true;
    }
  }
  return false;
}

int main() {
  unsigned int num;
  cout << "Enter number limit: ";
  cin >> num;
  for (unsigned int i = 2; i <= num; ++i) {
    if (isNotPrime(i)) {
      cout << i << " ";
    }
  }
  return 0;
}
