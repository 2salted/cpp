#include <iostream> //std::cout, std::cin, std::endl
#include <math.h>

int main() {
  float radius;
  float pi = 3.14;
  std::cout << "Input the radius:";
  std::cin >> radius;

  float radius2 = pow(radius, 2);

  std::cout << "Area of a circle:" << pi * radius2 << std::endl;
}
