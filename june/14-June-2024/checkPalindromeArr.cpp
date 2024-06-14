#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> stringArr;
  bool isPalindrome = true;
  int amount;
  std::cout << "Enter the amount of strings you want to check: ";
  std::cin >> amount;

  for (int i = 0; i < amount; ++i) {
    std::string temp;
    std::cout << "enter string: ";
    std::cin >> temp;
    stringArr.push_back(temp);
  }

  for (int i = 0; i < stringArr.size(); ++i) {
    std::string temp;
    std::string first = stringArr[i];
    for (int j = stringArr[i].length() - 1; 0 <= j; --j) {
      temp += stringArr[i][j];
    }
    if (temp != first) {
      isPalindrome = false;
    }
  }

  if (isPalindrome) {
    std::cout << "array is palindrome!" << std::endl;
    return 0;
  } else {
    std::cout << "array is not a palindrome" << std::endl;
    return 0;
  }
  return 0;
}
