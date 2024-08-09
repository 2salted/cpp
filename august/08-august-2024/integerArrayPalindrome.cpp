#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int digitNum(vector<int> const &arr) {
    int digitCount = 0;
    int testNum = 0;
    for (int i = arr.size() - 1; 0 <= i; --i) {
      testNum = arr[i];
      while (testNum != 0) {
        testNum /= 10;
        ++digitCount;
      }
    }
    return digitCount;
  }

  bool isPalindrome(vector<int> const &arr) {
    int firstNum = 0;
    int secondNum = 0;
    for (int i = 0; i < digitNum(arr) / 2; ++i) {
    }
    cout << firstNum;
    return false;
    // for (int i = arr.size() - 1; digitNum(arr) / 2 <= i; --i) {
    // }
  }
};

int main() {
  Solution s;
  s.isPalindrome({12, 23, 2, 21});
  return 0;
}
//
//
//
//
//
//
//
