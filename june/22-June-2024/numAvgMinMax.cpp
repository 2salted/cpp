// Write a program that asks the user to enter positive integers in order to
// process count, maximum, minimum, and average or terminate the process with -1
#include <iostream>
#include <vector>
using namespace std;

int average(const vector<int> &x) {
  int sum = 0, averageNum;
  for (unsigned int i = 0; i < x.size(); ++i) {
    sum += x[i];
  }
  averageNum = sum / x.size();
  return averageNum;
}

int maximum(const vector<int> &x) {
  int biggestNum = x[0];
  for (unsigned int i = 0; i < x.size(); ++i) {
    if (x[i] > biggestNum) {
      biggestNum = x[i];
    }
  }
  return biggestNum;
}

int minimum(const vector<int> &x) {
  int smallestNum = x[0];
  for (unsigned int i = 0; i < x.size(); ++i) {
    if (x[i] < smallestNum) {
      smallestNum = x[i];
    }
  }
  return smallestNum;
}

int main() {
  int num;
  vector<int> numArr;
  cout << "Enter numbers to calculate average, maximum and minimum terminate "
          "the process with -1:\n";
  while (num != 0 - 1) {
    cin >> num;
    if (num != 0 - 1) {
      numArr.push_back(num);
    }
  }
  int averageResult = average(numArr);
  cout << "The average is " << averageResult << "\n";
  int maxResult = maximum(numArr);
  cout << "The biggest number is " << maxResult << "\n";
  int minResult = minimum(numArr);
  cout << "The smallest number is " << minResult << "\n";
  return 0;
}
