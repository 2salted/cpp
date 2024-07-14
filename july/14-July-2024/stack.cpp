#include <vector>
using std::vector;

class Stack {
private:
  vector<int> arr = {1, 2, 3};
  int top = 0;

public:
  void push(int x) {
    if (arr.size() == 0) {
      arr.resize(2);
    }
    if (arr.size() == top) {
      arr.resize(arr.size() * 2);
    }
    arr[top] = x;
    ++top;
  }

  int pop() {
    --top;
    return arr[top];
  }
};
