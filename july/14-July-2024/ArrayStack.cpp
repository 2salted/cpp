#include <iostream>
#include <vector>

using std::vector;

class Stack {
private:
  vector<int32_t> st{0};
  size_t top = 0;

public:
  void push(int32_t x) {
    if (top == st.size()) {
      st.resize(st.size() * 2);
    }
    st[top] = x;
    ++top;
  }

  int32_t pop() {
    --top;
    return st[top];
  }

  int32_t peek() const { return st[top - 1]; }

  size_t size() const { return top; }
};
