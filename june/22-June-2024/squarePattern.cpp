// Write a program in to print a square pattern with the # character
#include <iostream>
using namespace std;

int main() {
  int numberOfSides;
  cout << "Enter number of sides: ";
  cin >> numberOfSides;
  for (int i = 1; i <= numberOfSides; ++i) {
    for (int i = 1; i <= numberOfSides; ++i) {
      cout << "*";
    }
    cout << "\n";
  }
}
