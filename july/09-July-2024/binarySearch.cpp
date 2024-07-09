#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int left, int right, const vector<int> &arr, int element) {
  int mid = left + (right - left) / 2;
  if (left == right) {
    return -1;
  }
  if (arr[mid] == element) {
    return mid;
  }
  if (arr[mid] > element) {
    right = mid;
  } else {
    left = mid + 1;
  }
  return binarySearch(left, right, arr, element);
}

int main() {
  vector<int> arr = {10, 20, 30, 40};
  int element, left = 0, right = arr.size();
  cout << "Enter the element you want to find: ";
  cin >> element;
  cout << binarySearch(left, right, arr, element);
}
