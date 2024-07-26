#include <cstdint>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    bool nextIteration = false;
    for (uint32_t i = digits.size(); 0 <= i; --i) {
      if (nextIteration) {
        nextIteration = false;
        digits[i] = digits[i] + 1;
      }
      if (digits[i] == 9) {
        digits[i] = 0;
        nextIteration = true;
      } else {
        digits[i] = digits[i] + 1;
      }
    }
    return digits;
  }
};

int main() {
  vector<int> arr = {1, 2, 8};
  Solution a;
  a.plusOne(arr);
}
