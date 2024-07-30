#include <vector>
using namespace std;

class Solution {
public:
  int numIdenticalPairs(vector<int> &nums) {
    int pairCount = 0;
    for (int i = 0; i < nums.size(); ++i) {
      for (int j = i; j < nums.size(); ++j) {
        if (nums[i] == nums[j] && i < j) {
          ++pairCount;
        }
      }
    }
    return pairCount;
  }
};
