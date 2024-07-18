#include <cstdint>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Deque {
private:
  vector<int32_t> dq;
  size_t front;
  size_t back;
  size_t size;

  void resize(size_t newSize) {
    vector<int32_t> newDq(newSize);

    for (size_t i = 0; i < size; i++) {
      newDq[i] = dq[(front + i) % size];
    }

    dq = newDq;
    front = newDq.size() - 1;
    back = size;
  }

public:
  Deque() {
    this->dq = vector<int32_t>(16, 0);
    this->front = 0;
    this->back = 0;
    this->size = 0;
  }

  void appendLeft(int32_t value) {
    if (dq.size() == size) {
      resize(dq.size() * 2);
    }

    dq[front] = value;

    if (front == back) {
      back = (back + 1) % dq.size();
    }

    front = (front - 1 + dq.size()) % dq.size();
    size++;
  }

  void appendRight(int32_t value) {
    if (dq.size() == size) {
      resize(dq.size() * 2);
    }

    dq[back] = value;

    if (back == front) {
      front = (front - 1 + dq.size()) % dq.size();
    }

    back = (back + 1) % dq.size();
    size++;
  }

  int32_t popLeft() {
    if (size == 0) {
      throw "deque is empty";
    }

    front = (front + 1) % dq.size();
    int32_t value = dq[front];
    size--;
    return value;
  }

  int32_t popRight() {
    if (size == 0) {
      throw "deque is empty";
    }

    back = (back - 1 + dq.size()) % dq.size();
    int32_t value = dq[back];
    size--;
    return value;
  }

  size_t getSize() const { return size; }
};

int main() {
  Deque dq;
  dq.appendLeft(1);
  dq.appendRight(2);
  dq.appendLeft(3);
  dq.appendRight(4);
  dq.appendLeft(5);
  dq.appendRight(6);

  while (dq.getSize() > 0) {
    cout << dq.popRight() << endl;
  }
}
