#include <vector>
using namespace std;

class Solution {
public:
  vector<int> luckyNumbers(vector<vector<int>> const &matrix) {
    vector<int> res;
    for (int i = 0; i < matrix.size(); ++i) {
      int smallestN = matrix[i][0];
      int columnN = 0;
      for (int j = 1; j < matrix[i].size(); ++j) {
        if (matrix[i][j] < smallestN) {
          smallestN = matrix[i][j];
          columnN = j;
        }
      }
      int largestN = matrix[0][columnN];
      for (int k = 1; k < matrix.size(); ++k) {
        if (largestN < matrix[k][columnN]) {
          largestN = matrix[k][columnN];
        }
      }
      if (smallestN == largestN) {
        res.push_back(smallestN);
      }
    }
    return res;
  }
};

int main() {
  Solution a;
  a.luckyNumbers({{3, 7, 8}, {9, 11, 13}, {15, 16, 17}});
}

// { 3, 7, 8 }
// { 9, 11, 13 }
// { 15, 16, 17 }
