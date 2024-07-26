#include <cstdint>
#include <vector>
std::vector<int32_t> plusOne(std::vector<int32_t> v) {
  int32_t carry = 1;
  for (size_t i = v.size() - 1; i < v.size(); --i) {
    v[i] += carry;
    carry = v[i] / 10;
    v[i] %= 10;
  }

  if (carry > 0) {
    v.insert(v.begin(), carry);
  }

  return v;
}
