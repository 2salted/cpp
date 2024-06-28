#include <cstdint>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using u32 = uint32_t;
using usize = size_t;

int main() {
  usize rc, cc;

  cout << "Enter number of rows: ";
  cin >> rc;
  cout << "Enter number of columns: ";
  cin >> cc;

  vector<vector<u32>> mat(rc, vector<u32>(cc));

  for (usize i = 0; i < rc; ++i) {
    for (usize j = 0; j < cc; ++j) {
      cin >> mat[i][j];
    }
  }
}
