#include <iostream> //std::cout, std::cin, std::endl

int main() {
  float base;
  float height;
  std::cout << "input base:";
  std::cin >> base;

  std::cout << "input height:";
  std::cin >> height;

  std::cout << "area of a triangle:" << (base * height) / 2 << std::endl;
}
