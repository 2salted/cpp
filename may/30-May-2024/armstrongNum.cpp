#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  uint32_t num, armNum = 0, InitialNum;
  cout << "Enter number to test: ";
  cin >> num;
  InitialNum = num;

  while (num != 0) {
    armNum += pow(num % 10, 3);
    num /= 10;
  }

  if (InitialNum == armNum) {
    cout << InitialNum << " is an armstrong number" << endl;
  } else {
    cout << InitialNum << " is not an armstrong number";
  }

  return 0;
}
