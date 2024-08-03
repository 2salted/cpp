#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  int findTheLongestBalancedSubstring(string s) {
    int zeroCount = 0;
    int oneCount = 0;
    int res = 0;
    for (unsigned int i = 0; i < s.size(); ++i) {
      if ((i == 0 || s[i - 1] == '1') && s[i] == '0') {
        zeroCount = 0;
        oneCount = 0;
      }
      if (s[i] == '0') {
        ++zeroCount;
      }
      if (s[i] == '1') {
        ++oneCount;
      }
      res = max(res, 2 * min(zeroCount, oneCount));
    }
    return res;
  }
};

int main() {
  Solution str;
  cout << str.findTheLongestBalancedSubstring("01000111");
}
