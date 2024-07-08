#include <iostream>
using std::cin;
using std::cout;

int sumOfNum(int term) {
  int sum = 0;
  if (term != 0) {
    sum = sum + term;
    sumOfNum(term - 1);
  }
  cout << "sum: " << sum;
  return sum;
}

int main() {
  int term;
  cout << "Enter nth term: ";
  cin >> term;
  sumOfNum(term);
  return 0;
}
