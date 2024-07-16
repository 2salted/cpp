class ListNode {
public:
  int val;
  ListNode *next;
};

ListNode *appendRightHelper(ListNode *list, int val) {
  if (list == nullptr) {
    return new ListNode{val, nullptr};
  }
  list->next = appendRightHelper(list->next, val);
  return list;
}

int popRightHelper(ListNode *&list, int val) {
  while (list->next != nullptr) {
    list = list->next;
  }
  int value = list->val;
  ListNode *newList = list->next;
  delete list;
  list = newList;
  return value;
}

int popLeftHelper(ListNode *&list, int val) {
  if (list == nullptr) {
    return -1;
  }
  int currVal = list->val;
  ListNode *newList = list->next;
  delete list;
  list = newList;
  return currVal;
}

class deque {
private:
  ListNode *list;

public:
  void appendRight(int val) { list = appendRightHelper(list, val); }
  void appendLeft(int val) { list = new ListNode{val, list}; }
  int popLeft() { return popLeftHelper(list, list->val); }
  int popRight() { return popRightHelper(list, list->val); }
};
