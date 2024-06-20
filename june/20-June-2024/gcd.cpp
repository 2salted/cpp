#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned int a, b;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  if (a > b) {
    unsigned int temp = a;
    a = b;
    b = temp;
  }

  while (a != 0) {
    b %= a;
    unsigned int temp = a;
    a = b;
    b = temp;
  }

  cout << b << " is the GCD." << endl;
  return 0;
}
