#include <iostream> //std::cout, std::cin, std::endl

int main() {
  int length;
  int width;
  std::cout << "Input Length:";
  std::cin >> length;

  std::cout << "Input Width:";
  std::cin >> width;

  std::cout << "Area of rectangle: " << length * width << std::endl;
  return 0;
}
