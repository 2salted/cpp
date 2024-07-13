// Singly Linked Cyclic Linked List
// 1 -> 2 -> 3 -> 4 -> 5 -+
//           ^    Cycle   |
//           +------------+
//
// Doubly Linked Cyclic Linked List
// 1 <-> 2 <-> 3 <-> 4 <-> 5
// ^                       ^
// +-----------------------+
//
// Circular Linked List
// 1 -> 2 -> 3 -> 4 -> 5
// ^                   |
// +-------------------+

#include <cstdint>
class ListNode {
public:
  int32_t val;
  ListNode *next;
};

bool has_cycle(ListNode *list) {
  ListNode *slow = list;
  ListNode *fast = list;

  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) {
      return true;
    }
  }

  return false;
}

ListNode *get_cycle(ListNode *list) {
  ListNode *slow = list;
  ListNode *fast = list;

  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast) {
      break;
    }
  }

  if (fast == nullptr || fast->next == nullptr) {
    return nullptr;
  }

  slow = list;
  while (slow != fast) {
    slow = slow->next;
    fast = fast->next;
  }

  return slow;
}

void create_cycle(ListNode *list, int32_t pos) {
  if (list == nullptr) {
    return;
  }

  ListNode *end = list;

  while (end->next != nullptr) {
    end = end->next;
  }

  while (pos-- > 0) {
    list = list->next;
    end->next = list;
  }
}

int main() {
  ListNode *list = new ListNode{
      0,
      new ListNode{
          1,
          new ListNode{
              2, new ListNode{3, new ListNode{4, new ListNode{5, nullptr}}}}}};

  create_cycle(list, 3);
};
