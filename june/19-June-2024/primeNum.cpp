// Write a program to check whether a number is prime or not.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int num;
  cout << "Enter a number to check wether it is prime: ";
  cin >> num;
  if (num < 2) {
    cout << "not a valid input" << endl;
    return 0;
  }
  for (int i = 2; i < num; ++i) {
    if (num % i == 0) {
      cout << num << " is not prime" << endl;
      return 0;
    }
  }
  cout << num << " is prime" << endl;
  return 0;
}
