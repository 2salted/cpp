#include <iostream>
using namespace std;

void linePrint(const int n) {
  if (n > 0) {
    cout << "*";
    linePrint(n - 1);
  }
}

void printPattern(const int n, const int i) {
  if (i > 0) {
    linePrint(n);
    cout << "\n";
    printPattern(n, i - 1);
  }
}

int main() {
  int terms, i;
  cout << "Enter number of terms: ";
  cin >> terms;
  i = terms;
  printPattern(terms, i);
}
