#include <iostream> // std::cout std::cin

using std::cin;
using std::cout;

int main() {
  int n;
  cout << "Enter the dimension of character: ";
  cin >> n;

  for (int row = n; row > 0; --row) {
    for (int col = 1; col < 2 * n; ++col) {
      if (row == col || row == 2 * n - col ||
          (row == n / 2 && (n / 2 <= col && col <= 3 * n / 2))) {
        cout << '*';
      } else {
        cout << ' ';
      }
    }

    cout << '\n';
  }

  return 0;
}
