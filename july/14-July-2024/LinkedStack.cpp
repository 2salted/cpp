#include <cstdint>
using std::size_t;

class ListNode {
public:
  int32_t val;
  ListNode *next;
};

class Stack {
private:
  ListNode *head;

public:
  void push(int32_t val) {
    ListNode *newNode = new ListNode{val, head};
    head = newNode;
  }

  int32_t pop() {
    int32_t val = head->val;
    ListNode *newHead = head->next;
    delete head;
    head = newHead;
    return val;
  }

  int32_t top() const { return head->val; }

  size_t size() const {
    ListNode *cur = head;
    size_t size = 0;
    while (cur != nullptr) {
      ++size;
      cur = cur->next;
    }
    return size;
  }
};
