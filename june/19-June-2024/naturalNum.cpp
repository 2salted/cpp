// Write a program to display n terms of natural numbers and their sum.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int nth, sum = 0;
  cout << "Enter a number of terms: ";
  cin >> nth;
  for (int i = 1; i <= nth; ++i) {
    cout << i << ", ";
    sum += i;
  }
  cout << "\nSum of " << nth << " terms is " << sum << endl;
  return 0;
}
