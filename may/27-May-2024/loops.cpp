#include <cstdint>
#include <iostream>

int main() {
  uint32_t count, num;

  std::cout << "Enter your iterator count:";
  std::cin >> count;
  std::cout << "Enter the number you want to multiply:";
  std::cin >> num;

  for (uint32_t i = 0; i <= count; ++i) {
    std::cout << num << " x " << i << " = " << num * i << std::endl;
  }
}
