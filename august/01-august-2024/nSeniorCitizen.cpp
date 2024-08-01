#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int countSeniors(vector<string> const &details) {
    int count = 0;
    for (int i = 0; i < details.size(); ++i) {
      if ("60" < details[i].substr(11, 2)) {
        ++count;
      }
    }
    return count;
  }
};

int main() {
  Solution a;
  cout << a.countSeniors(
      {"7868190130M7522", "5303914400F9211", "9273338290F4010"});
  return 0;
}
