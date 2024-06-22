// Write a program to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth
// term
#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned int nth, xvalue, sum = 0, divisionNum = 2;
  cout << "enter X value: ";
  cin >> xvalue;
  cout << "enter nth term: ";
  cin >> nth;
  for (unsigned int i = 0; i < nth; ++i) {
    int div = divisionNum / divisionNum;
    sum += pow(xvalue, div);
  }
  cout << sum << endl;
}
