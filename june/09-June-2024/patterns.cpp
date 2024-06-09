#include <iostream>

int main() {
  int rowNum;
  std::cout << "Enter number of rows: ";
  std::cin >> rowNum;

  for (int i = 1; i <= rowNum; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
}
