#include <iostream>

int main() {
  float fahrenheit;
  std::cout << "Convert fahrenheit to celsius:";
  std::cin >> fahrenheit;

  std::cout << fahrenheit << " F = " << (fahrenheit - 32) * 5 / 9 << " C"
            << std::endl;
}
