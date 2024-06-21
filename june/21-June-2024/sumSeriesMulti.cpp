// Write a program to calculate the sum of the series (1*1) + (2*2) + (3*3) +
// (4*4) + (5*5) + ... + (n*n).
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned int nth, sum = 0;
  cout << "Enter the value for nth term: ";
  cin >> nth;
  int originalNum = nth;
  while (nth != 0) {
    sum += nth * nth;
    --nth;
  }
  cout << "the sum of " << originalNum << " series is " << sum << endl;
}
