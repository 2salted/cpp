#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int num, rev = 0;
  cout << "Enter a number to reverse:";
  cin >> num;

  while (num != 0) {
    rev *= 10;
    rev += num % 10;
    num /= 10;
  }

  cout << "reversed nummy: " << rev << endl;
}
