#include <iostream>

int main() {
  int bt = 10, side = 6;
  unsigned int sizeNum;
  std::cout << "Enter a number 1 to 5: ";
  std::cin >> sizeNum;

  if (sizeNum > 5) {
    std::cout << "fucking idiot that isn't a number between 1 and 5";
    return 0;
  }

  bt *= sizeNum;
  side *= sizeNum;

  for (int i = 0; i < bt; ++i) {
    std::cout << "*";
  }
  for (int j = 0; j < side; ++j) {
    std::cout << "*\n";
  }
  for (int k = 0; k < bt; ++k) {
    std::cout << "*";
  }
}
