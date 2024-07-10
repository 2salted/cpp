#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

bool palindrome(const vector<int> &arr, int left, int right) {
  if (left == right) {
    return true;
  }
  if (arr[left] != arr[right]) {
    return false;
  }
  return palindrome(arr, left + 1, right - 1);
}

int main() {
  vector<int> arr = {1, 2, 3, 3, 2, 1};
  unsigned int left = 0, right = arr.size();
  if (palindrome(arr, left, right)) {
    cout << "is a palindrome" << endl;
  } else {
    cout << "is not a palindrome" << endl;
  }
  return 0;
}
