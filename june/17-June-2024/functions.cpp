#include <iostream>
#include <string>

bool isPalindrome(const std::string &strToCheck) {
  std::string revStr;
  bool isPalindrome = false;
  for (int i = strToCheck.length() - 1; 0 <= i; --i) {
    revStr += strToCheck[i];
  }
  if (revStr == strToCheck) {
    isPalindrome = true;
    std::cout << strToCheck << " is Palindrome" << std::endl;
  }
  std::cout << strToCheck << " is not a Palindrome" << std::endl;
  return isPalindrome;
}

int main() {
  isPalindrome("juhhu");
  return 0;
}
