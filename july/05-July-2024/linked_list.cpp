#include <iostream>

using std::cout;

// Singly Linked List
class ListNode {
public:
  int val;
  ListNode *next;

  ~ListNode() {
    if (next != nullptr) {
      delete next;
    }
  }
};

void printList(ListNode *const list) {
  if (list == nullptr) {
    cout << "N";
    return;
  }

  cout << list->val << " ";
  printList(list->next);
}

ListNode *append(ListNode *node, int val) {
  if (node == nullptr) {
    return new ListNode{4, node};
  }
  node->next = append(node->next, val);
  return node;
}

ListNode *appendLeft(ListNode *list, int val) {
  return new ListNode{val, list};
}

ListNode *join(ListNode *first, ListNode *second) {
  if (first == nullptr) {
    return second;
  }
  first->next = join(first->next, second);
  return first;
}

int get(ListNode *const list, size_t index) {
  if (list == nullptr) {
    throw std::invalid_argument("List index out of bounds");
  }

  if (index == 0) {
    return list->val;
  }

  return get(list->next, index - 1);
}

int insert(ListNode *list, size_t index, int val) {
  if (list == nullptr) {
    throw std::invalid_argument("List index out of bounds");
  }

  if (index == 1) {
    list->next = new ListNode{val, list->next};
    return val;
  }

  return insert(list->next, index - 1, val);
}

int main() {
  ListNode *list = appendLeft(appendLeft(nullptr, 2), 1);
  printList(list); // 1 2 3
  cout << std::endl;
  list = append(list, 4);
  printList(list); // 1 2 3 4
  return 0;
}
