#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  uint32_t term;
  vector<int> numArr;

  cout << "Enter amount of numbers: ";
  cin >> term;

  for (uint32_t i = 1; i <= term; ++i) {
    int input;
    cout << "Enter number " << i << ". ";
    cin >> input;
    numArr.push_back(input);
  }

  cout << " \n";

  for (uint32_t i = 0; i < numArr.size(); ++i) {
    bool isSingleNum = true;
    for (uint32_t j = 0; j < numArr.size(); ++j) {
      if (numArr[i] == numArr[j] && i != j) {
        isSingleNum = false;
        break;
      }
    }
    if (isSingleNum) {
      cout << numArr[i];
      return 0;
    }
  }
  return 0;
}
