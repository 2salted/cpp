#include <iostream>

int main() {
  int rows;
  std::cout << "Enter reverse number: ";
  std::cin >> rows;

  for (int i = rows; 0 < i; --i) {
    for (int j = rows; 0 < j; --j) {
      std::cout << '*';
    }
    std::cout << '\n';
  }
  return 0;
}
