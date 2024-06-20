// Write a program to find the Greatest Common Divisor (GCD) of two numbers.
#include <iostream>
using std::cin;
using std::cout;

// 12 6 3 2 1, 17
int main() {
  int firstNum, secondNum;
  cout << "Enter first number: ";
  cin >> firstNum;
  cout << "Enter second number: ";
  cin >> secondNum;
  if (firstNum > secondNum) {
    int temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;
  }
  for (int i = firstNum; 1 <= i; --i) {
    if (firstNum % i == 0 && secondNum % i == 0) {
      cout << i << " is the GCD";
      return 0;
    }
  }
  return 0;
}
