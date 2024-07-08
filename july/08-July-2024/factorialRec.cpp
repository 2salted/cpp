#include <iostream>
using std::cin;
using std::cout;

int factorial(int num) {
  if (num > 1) {
    return num * factorial(num - 1);
  }
  return num;
}

int main() {
  int num;
  cout << "Enter a number to get it's factorial:";
  cin >> num;
  cout << factorial(num);
  return 0;
}
