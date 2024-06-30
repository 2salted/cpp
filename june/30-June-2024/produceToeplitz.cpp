#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int rows;

  cout << "Enter number of rows: ";
  cin >> rows;

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < rows; ++j) {
      cout << abs(i - j) << " ";
    }
    cout << "\n";
  }
  return 0;
}
