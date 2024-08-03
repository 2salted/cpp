#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  string longestPalindrome(string s) {
    int longestCount = 0;
    string res;
    for (unsigned int i = 0; i < s.size(); ++i) {
      string str;
      for (int j = s.size() - i; 0 < j; --j) {
        string subStr = s.substr(i, j);
        string revStr(subStr.rbegin(), subStr.rend());
        if (subStr == revStr && j > longestCount) {
          longestCount = j;
          res = subStr;
        }
      }
    }
    return res;
  }
};

int main() {
  Solution palindrome;
  cout << palindrome.longestPalindrome("cbbd");
}
