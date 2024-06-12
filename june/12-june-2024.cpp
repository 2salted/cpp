#include <array>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int arr[100]; // creating array of 100 integers
  memset(arr, 0, 100 * sizeof(int));

  int *arr1 = new int[100]; // pseudo - array of 100 integers
  memset(arr1, 0, 100 * sizeof(int));

  std::array<std::string, 5> arr2;
  arr2.fill("hello, world!");

  std::vector<int> vec;
  int temp;
  std::cin >> temp;
  vec.push_back(temp);

  delete[] arr1;
  return 0;
}
