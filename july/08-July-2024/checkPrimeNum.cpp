#include <iostream>
using std::cin;
using std::cout;

bool isPrime(int num, int i) {
  if (i == 1) {
    return true;
  }
  if (num % i == 0) {
    return false;
  }
  return isPrime(num, i - 1);
}

int main() {
  uint32_t num, i;
  cout << "Enter a number to check wether it is prime or not: ";
  cin >> num;
  i = num - 1;
  if (isPrime(num, i)) {
    cout << num << " is a prime number!";
  } else {
    cout << num << " is not a prime number";
  }
  return 0;
}
