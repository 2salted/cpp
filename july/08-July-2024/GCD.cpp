#include <iostream>
using std::cin;
using std::cout;

int gcd(int num1, int num2, int i) {
  if (num1 % i == 0 && num2 % i == 0) {
    return i;
  }
  return gcd(num1, num2, i - 1);
}

int main() {
  int num1, num2, i;
  cout << "Enter number 1: ";
  cin >> num1;
  cout << "Enter number 2: ";
  cin >> num2;
  if (num1 > num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }
  i = num1;
  cout << gcd(num1, num2, i);
}
