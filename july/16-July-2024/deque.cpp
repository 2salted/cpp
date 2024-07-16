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

int popLeftHelper(ListNode *list, int val) {
  if (list == nullptr) {
    return -1;
  }
  int curryVal = list->val;
  ListNode *newList = list->next;
  delete list;
  list = newList;
  return curryVal;
}

class deque {
private:
  ListNode *list;

public:
  void appendRight(int val) { list = appendRightHelper(list, val); }
  void appendLeft(int val) { list = new ListNode{val, list}; }
  void popLeft() { popLeftHelper(list, list->val); }
};
