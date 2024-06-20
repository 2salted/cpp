#include <iostream>
using std::cin;
using std::cout;

int main() {
  unsigned int num, sum = 0;
  cout << "Enter a number: ";
  cin >> num;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  cout << sum;
}
