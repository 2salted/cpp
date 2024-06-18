#include <iostream>

bool isPalindrome(int &x) {
  bool isNumPali = false;
  int reversedNum = 0;
  int originalNum = x;
  if (0 > x) {
    return false;
  }
  while (x != 0) {
    int remainder = x % 10;
    reversedNum = reversedNum * 10 + remainder;
    x = x / 10;
  }
  if (reversedNum == originalNum) {
    isNumPali = true;
    std::cout << "is Palindrome";
  } else {
    std::cout << "is not Palindrome";
  }
  return isNumPali;
}

int main() {
  int userInput;
  std::cout << "Enter a number: ";
  std::cin >> userInput;
  isPalindrome(userInput);
  return 0;
}
