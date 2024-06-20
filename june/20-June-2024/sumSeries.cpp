#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  double term, sum = 0;
  cout << "Enter nth term: ";
  cin >> term;
  for (unsigned int i = 1; i <= term; ++i) {
    double temp = pow(i, i);
    sum += 1 / temp;
  }
  cout << sum << endl;
}
