#include <iostream>
using namespace std;

int main() {
  unsigned int nth;
  cout << "Enter nth term of odd numbers to sum up: ";
  cin >> nth;
  for (unsigned int i = 1; i <= nth; ++i) {
    for (unsigned int j = 1; j <= nth; ++j) {
      if (j % 2 != 0) {
        cout << j << " ";
      }
    }
  }
}
