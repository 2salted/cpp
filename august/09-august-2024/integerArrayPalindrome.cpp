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
    int numRes = 0;
    int testNum = 0;
    for (int i = (arr.size() - 2) / 2; 0 <= i; --i) {
      testNum = arr[i];
      while (testNum != 0) {
        int takeLast = testNum % 10;
        numRes *= 10;
        numRes += takeLast;
        testNum /= 10;
      }
    }
    int finalResult = 0;
    while (numRes != 0) {
      int takeLast = numRes % 10;
      finalResult *= 10;
      finalResult += takeLast;
      numRes /= 10;
    }
    return finalResult;
  }

  bool isPalindrome(vector<int> const &arr) {
    int firstHalf = useFirstHalf(arr);
    int secondHalf = reverseSecondHalf(arr);
    if (firstHalf / 10 == secondHalf || secondHalf / 10 == firstHalf ||
        firstHalf == secondHalf) {
      return true;
    }
    return false;
  }
};

int main() {
  Solution s;
  cout << s.isPalindrome({41, 12, 1, 21, 41});
  return 0;
}
