#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned int num;
  cout << "Enter a number to find a factorial: ";
  cin >> num;
  unsigned int factorial = 1;
  for (unsigned int i = 1; i <= num; ++i) {
    factorial *= i;
  }
  cout << "factorial of " << num << " is: " << factorial << endl;
  return 0;
}
