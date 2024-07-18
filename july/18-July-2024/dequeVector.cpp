#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

class deque {
private:
  vector<int> arr;
  size_t front;
  size_t back;
  size_t size;

public:
  deque() {
    this->arr = vector<int>(16, 0);
    this->front = 0;
    this->back = 0;
    this->size = 0;
  }

  void printVector() {
    for (int i = 0; i < arr.size(); ++i) {
      cout << arr[i] << " ";
    }
  }

  void appendRight(int val) {
    if (back == arr.size() - 1) {
      resize();
    }
    arr[back] = val;
    ++back;
  }

  void appendLeft() {}

  void resize() {}
};

// 0 0 1 2 4 8 0 0 0 0 0 0 0 0 0 0
int main() {
  deque dq;
  dq.printVector();
}
