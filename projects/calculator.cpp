#include <iostream>
#include <string>

int main() {
  std::string operationType;
  double firstNum, secondNum;
  std::cout << "CLI Calculator v0.1.0\n";
  std::cout << "Input the first number in the calculation: ";
  std::cin >> firstNum;
  std::cin.ignore();
  std::cout << "\nEnter the calculation operator (+,-,*,/): ";
  std::cin >> operationType;
  std::cout << "\nInput the second number in the calculation: ";
  std::cin >> secondNum;

  if (operationType == "+") {
    std::cout << firstNum << " + " << secondNum << " = " << secondNum + firstNum
              << std::endl;
  }
  if (operationType == "-") {
    std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum
              << std::endl;
  }
  if (operationType == "*") {
    std::cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum
              << std::endl;
  }
  if (operationType == "/") {
    std::cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum
              << std::endl;
  }
}
