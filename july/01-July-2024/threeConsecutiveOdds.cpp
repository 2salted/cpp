#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  uint32_t terms, count = 0;
  vector<int> numArr;
  vector<int> consecutiveNums;

  cout << "Enter amount of numbers: ";
  cin >> terms;

  for (uint32_t i = 0; i < terms; ++i) {
    int input;
    cin >> input;
    numArr.push_back(input);
  }

  for (uint32_t i = 0; i < numArr.size(); ++i) {
    if (numArr[i] % 2 != 0) {
      consecutiveNums.push_back(numArr[i]);
      ++count;
    } else {
      consecutiveNums.clear();
      count = 0;
    }
    if (count == 3) {
      cout << "Three consecutive odd numbers \n";
      for (int k = 0; k < consecutiveNums.size(); ++k) {
        cout << consecutiveNums[k];
      }
      return 0;
    }
  }
  cout << "No consecutive odd numbers!" << endl;
  return 0;
}
