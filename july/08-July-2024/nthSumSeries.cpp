#include <iostream>
using std::cin;
using std::cout;

int sumSeries(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n * n + sumSeries(n - 1);
  }
}

int main() {
  int n, sum = 0;
  cout << "Enter nth term: ";
  cin >> n;
  cout << sumSeries(n);
}
