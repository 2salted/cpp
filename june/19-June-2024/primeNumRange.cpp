// Write a program in C++ to find a prime number within a range.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isPrime(const int num) {
  if (num < 2) {
    return false;
  }
  for (int i = 2; i < num; ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  unsigned int startingNum, endingNum, counter = 0;
  cout << "Enter a starting number: ";
  cin >> startingNum;
  cout << "Enter an ending number: ";
  cin >> endingNum;
  for (unsigned int i = startingNum; i < endingNum; ++i) {
    if (isPrime(i)) {
      cout << i << ", ";
      ++counter;
    };
  }
  cout << "\n";
  cout << "total number of prime numbers between " << startingNum << " and "
       << endingNum << " is: " << counter << endl;
  return 0;
}
