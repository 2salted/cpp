// Write a program to find the last prime number before the entered number
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isPrime(const int num) {
  for (int i = 2; i < num; ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  unsigned int num;
  cout << "Enter a number to find it's closest previous prime number: ";
  cin >> num;
  for (unsigned int i = num; 2 <= i; --i) {
    if (isPrime(i)) {
      cout << i << " is the nearest prime number" << endl;
      return 0;
    }
  }
  return 0;
}
