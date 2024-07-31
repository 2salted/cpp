#include <iostream>
using namespace std;

class Solution {
public:
  bool isBadVersion(int n) { return n >= 10; }

  int firstBadVersion(int n) {
    int left = 1;
    int right = n;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (isBadVersion(mid) && (!isBadVersion(mid - 1) || mid == 1)) {
        return mid;
      }
      if (!isBadVersion(mid)) {
        left = mid + 1;
      }
      if (isBadVersion(mid)) {
        right = mid - 1;
      }
    }
    return left;
  }
};

int main() {
  Solution a;
  cout << a.firstBadVersion(22);
}
