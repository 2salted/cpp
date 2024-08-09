#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int reverseSecondHalf(vector<int> const &arr) {
    int res = 0;
    int testNum = 0;
    for (unsigned int i = arr.size() - 1; arr.size() / 2 <= i; --i) {
      testNum = arr[i];
      while (testNum != 0) {
        int takeLast = testNum % 10;
        res *= 10;
        res += takeLast;
        testNum /= 10;
      }
    }
    return res;
  }

  int useFirstHalf(vector<int> const &arr) {
    int res = 0;
    int testNum = 0;
    for (int i = arr.size() / 2;) {
    }
  }

  bool isPalindrome(vector<int> const &arr) {}
};

int main() {
  Solution s;
  cout << s.reverseSecondHalf({412, 23, 2, 21, 4});
  return 0;
}
//
//
//
//
//
//
//
