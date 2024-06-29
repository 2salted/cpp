#include <cstdint>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using u32 = uint32_t;
using usize = size_t;
using uint = uint32_t;

int main() {
  u32 rc, cc;

  cout << "Enter number of rows: ";
  cin >> rc;
  cout << "Enter number of columns: ";
  cin >> cc;

  vector<vector<u32>> arr(rc, vector<u32>(cc));

  for (usize i = 0; i < rc; ++i) {
    for (usize j = 0; j < cc; ++j) {
      cin >> arr[i][j];
    }
  }

  for (u32 i = 0; i < arr.size(); ++i) {
    bool isPalindrome = true;
    u32 left = 0, right = arr[i].size() - 1;
    while (left < right) {
      if (arr[i][left] != arr[i][right]) {
        isPalindrome = false;
      }
      ++left;
      --right;
    }
    if (isPalindrome) {
      cout << i << " R";
      return 0;
    }
  }

  for (u32 i = 0; i < arr[0].size(); ++i) {
    bool isPalindrome = true;
    u32 left = 0, right = arr.size() - 1;
    while (left < right) {
      if (arr[left][i] != arr[right][i]) {
        isPalindrome = false;
      }
      ++left;
      --right;
    }
    if (isPalindrome) {
      cout << i << " C";
      return 0;
    }
  }
  return 0;
}
