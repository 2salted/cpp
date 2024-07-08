#include <iostream>
using namespace std;

void naturalNum(int nth) {
  if (nth != 0) {
    naturalNum(nth - 1);
    cout << nth << " ";
  }
}

int main() {
  int term;
  cin >> term;
  naturalNum(term);
  return 0;
}
