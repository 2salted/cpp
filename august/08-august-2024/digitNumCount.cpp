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
};

int main() {
  Solution s;
  s.digitNum({12, 23, 2, 21});
  return 0;
}
//
//
//
//
//
//
//
