#include <iostream> //std::cout, std::cin, std::endl

int main() {
  int n1, n2;

  std::cout << "Input 2 numbers for calculations:";
  std::cin >> n1 >> n2;

  std::cout << "Addition: " << n1 << " + " << n2 << " = " << n1 + n2 << '\n';
  std::cout << "Subtraction: " << n1 << " - " << n2 << " = " << n1 - n2 << '\n';
  std::cout << "Multiplication: " << n1 << " * " << n2 << " = " << n1 * n2
            << '\n';
  std::cout << "Division: " << n1 << " / " << n2 << " = " << n1 / n2 << '\n'
            << std::endl;
}
