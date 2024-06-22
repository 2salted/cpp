#include <iostream>
using namespace std;

int main() {
  int num, sum = 0, count = 0, max = 0, min = 0;
  double average;
  cout << "Average, Maximum and Minimum Calculator for positive integers: \n";
  while (num != 0 - 1) {
    cin >> num;
    if (count == 0) {
      min = num;
    }
    if (num != 0 - 1) {
      if (num > max) {
        max = num;
      }
      if (num < min) {
        min = num;
      }
      sum += num;
      ++count;
    }
  }
  average = sum / count;
  cout << "max: " << max << "\n";
  cout << "min: " << min << "\n";
  cout << "average: " << average << endl;
}
