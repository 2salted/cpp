#include <iostream>
#include <regex>
#include <string>
using namespace std;

class Solution {
public:
  int lengthOfLastWord(string s) {
    s = std::regex_replace(s, regex("\\s*$"), "");
    int count = 0;
    for (int i = s.size() - 1; 0 <= i; --i) {
      if (s[i] == ' ') {
        return count;
      }
      ++count;
    }
    return count;
  }
};

int main() {
  Solution a;
  cout << a.lengthOfLastWord(
      "  i  living enough this  blunt im  taking  a  puff  ");
  return 0;
}
