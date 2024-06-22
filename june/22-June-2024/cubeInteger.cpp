// Write a program to display the cube of the number up to an integer
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int terms;
  cout << "Input the number of terms: ";
  cin >> terms;
  for (int i = 1; i <= terms; ++i) {
    int cubed = pow(i, 3);
    cout << cubed << "\n";
  }
  return 0;
}
