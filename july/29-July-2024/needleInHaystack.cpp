#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  int strStr(string haystack, string needle) {
    for (uint32_t i = 0; i < haystack.size(); ++i) {
      if (needle == haystack.substr(i, needle.size())) {
        return i;
      }
    }
    return -1;
  }
};

int main() {
  Solution a;
  cout << a.strStr("friedfriendlyfiend", "friend");
}
