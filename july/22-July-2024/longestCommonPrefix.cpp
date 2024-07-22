#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string subStr = strs[0];
    for (uint32_t i = 1; i < strs.size(); ++i) {
      for (uint32_t j = 0; j < strs[i].size(); ++j) {
        if (subStr[j] != strs[i][j]) {
          subStr = strs[i].substr(0, j);
        }
      }
      cout << subStr << "\n";
    }
    return subStr;
  }
};

int main() {
  vector<string> str = {"flower", "flow", "flight"};
  Solution s;
  cout << s.longestCommonPrefix(str);
}
