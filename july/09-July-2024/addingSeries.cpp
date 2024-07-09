#include <iostream>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  } else {
    return (sum(n - 1) + n * (n + 1) / 2);
  }
}

int main() {
  int n;
  cout << "Enter number of terms: ";
  cin >> n;
  cout << sum(n);
}
