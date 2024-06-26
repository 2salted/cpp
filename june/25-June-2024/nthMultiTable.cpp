#include <iostream>
using namespace std;

int main() {
  unsigned int num;
  cout << "Enter the number upto: ";
  cin >> num;
  for (unsigned int i = 1; i <= num; ++i) {
    for (unsigned int j = 1; j <= 10; ++j) {
      cout << i << "x" << j << "=" << i * j << "\n";
    }
    cout << "\n";
  }
}
