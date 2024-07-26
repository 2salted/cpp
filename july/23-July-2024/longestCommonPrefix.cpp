#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string subStr = strs[0];
    for (uint32_t i = 0; i < strs.size(); ++i) {
      if (subStr.size() >= strs[i].size()) {
        subStr = strs[i];
      }
    }
    for (uint32_t i = 0; i < strs.size(); ++i) {
      for (uint32_t j = 0; j < min(strs[i].size(), subStr.size()); ++j) {
        if (subStr[j] != strs[i][j]) {
          subStr = strs[i].substr(0, j);
        }
      }
    }
    return subStr;
  }
};

int main() {
  vector<string> str = {"abc", "abf", "abcde", "abcdef", "ab"};
  Solution s;
  cout << s.longestCommonPrefix(str);
}
