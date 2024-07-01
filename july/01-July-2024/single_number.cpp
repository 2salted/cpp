#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

using i32 = int32_t;
using usize = size_t;

int main() {
  vector<i32> v;
  usize len;

  cout << "Enter the length of the vector: ";
  cin >> len;

  while (len-- > 0) {
    i32 temp;
    cin >> temp;
    v.push_back(temp);
  }

  i32 res = 0;

  for (i32 ele : v) {
    res ^= ele;
  }

  cout << res << " is the single element in the vector" << endl;
  return 0;
}
