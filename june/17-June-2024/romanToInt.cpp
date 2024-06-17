#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

// example: XII
int romanToInt(const string &romanNum) {
  int integer = 0;
  for (int i = 1; i < romanNum.size(); ++i) {
    if (romanNum[i] == 'V' && romanNum[i - 1] == 'I') {
      integer += 3;
    } else if (romanNum[i] == 'X' && romanNum[i - 1] == 'I') {
      integer += 8;
    } else if (romanNum[i] == 'L' && romanNum[i - 1] == 'X') {
      integer += 30;
    } else if (romanNum[i] == 'C' && romanNum[i - 1] == 'X') {
      integer += 80;
    } else if (romanNum[i] == 'D' && romanNum[i - 1] == 'C') {
      integer += 300;
    } else if (romanNum[i] == 'M' && romanNum[i - 1] == 'C') {
      integer += 800;
    } else {
      switch (romanNum[i]) {
      case 'I':
        integer += 1;
        break;
      case 'V':
        integer += 5;
        break;
      case 'X':
        integer += 10;
        break;
      case 'L':
        integer += 50;
        break;
      case 'C':
        integer += 100;
        break;
      case 'D':
        integer += 500;
        break;
      case 'M':
        integer += 1000;
        break;
      }
    }
  }
  std::cout << integer << std::endl;
  return 0;
}

int main() {
  string userInput;
  cout << "Enter Roman number to convert to an integer: ";
  cin >> userInput;
  userInput = " " + userInput;
  romanToInt(userInput);
  return 0;
}
