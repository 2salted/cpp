#include <cstdint>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
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

  for (uint32_t i = 0; i < arr.size() - 1; ++i) {
    for (uint32_t j = 0; j < arr[0].size() - 1; ++j) {
      if (arr[i][j] != arr[i + 1][j + 1]) {
        cout << "This is not a toeplitz";
        return 0;
      }
    }
  }
  cout << "This is a toeplitz" << endl;
  return 0;
}
