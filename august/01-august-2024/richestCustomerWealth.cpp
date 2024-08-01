#include <vector>
using namespace std;

class Solution {
public:
  int maximumWealth(vector<vector<int>> const &accounts) {
    int biggestNum = 0;
    for (int i = 0; i < accounts.size(); ++i) {
      int compare = 0;
      for (int j = 0; j < accounts[i].size(); ++j) {
        compare = compare + accounts[i][j];
      }
      if (compare > biggestNum) {
        biggestNum = compare;
      }
    }
    return biggestNum;
  }
};

int main() {
  Solution a;
  a.maximumWealth({{1, 2, 3}, {4, 8, 1}, {0, 2, 5}});
}
