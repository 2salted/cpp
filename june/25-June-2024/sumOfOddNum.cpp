#include <iostream>
using namespace std;

int main() {
  unsigned int nth, count = 1, i = 1, sum = 0;
  cout << "Enter nth term of odd numbers to sum up: ";
  cin >> nth;
  while (count <= nth) {
    if (i % 2 != 0) {
      cout << i << " ";
      sum += i;
      ++count;
    }
    ++i;
  }
  return 0;
}
