#include <iostream>

int main() {
  double sum = 0;
  int n;
  std::cout << "Enter the amount of n:";
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    double temp;
    std::cout << "Enter a number to average:";
    std::cin >> temp;
    sum += temp;
  }

  std::cout << "the average is: " << " = " << sum / n << std::endl;
}
