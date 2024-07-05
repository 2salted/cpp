#include <iostream>
using std::cout;

class listNode {
public:
  int val;
  listNode *next;

  ~listNode() {
    if (next != nullptr) {
      delete next;
    }
  }
};

void printList(listNode *const list) {
  if (list == nullptr) {
    return;
  }
  cout << list->val << " ";
  printList(list->next);
}

listNode *append(listNode *list, int val) {
  if (list == nullptr) {
    return new listNode{val, nullptr};
  }
  list->next = append(list->next, val);
  return list;
}

void insert(listNode *list, size_t index, int val) {
  if (list == nullptr) {
    cout << "returned 0";
    return;
  }
  if (index == 0) {
    return;
  }
  if (index == 1) {
    list->next = new listNode{val, list->next};
    return;
  }
  insert(list->next, index - 1, val);
}

int length(listNode *list) {
  if (list == nullptr) {
    return 0;
  }
  return length(list->next) + 1;
}

int search(listNode *list, int element) {
  if (list == nullptr) {
    return -1;
  }
  if (list->val != element) {
    int searching = search(list->next, element);
    return searching == -1 ? -1 : searching + 1;
  } else {
    return 0;
  }
}

int main() {
  listNode *list = new listNode{1, new listNode{2, new listNode{3, nullptr}}};
  cout << search(list, 10);
}
