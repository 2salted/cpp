#include <cstdint>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  uint32_t n;
  cout << "Enter a number: ";
  cin >> n;
  uint32_t faccy = 1;

  while (n != 0) {
    faccy *= n;
    --n;
  }

  cout << faccy << endl;
}
