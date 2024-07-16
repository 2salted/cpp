class ListNode {
public:
  int val;
  ListNode *next;
};

ListNode *getTail(ListNode *list) {
  if (list->next == nullptr) {
    return list;
  }
  return getTail(list->next);
}

class queue {
private:
  ListNode *list;

public:
  void enqueue(int val) {
    if (list == nullptr) {
      list = new ListNode{val, nullptr};
    }
    ListNode *tail = getTail(list);
    tail->next = new ListNode{val, nullptr};
  }

  int deqeue(int val) {
    ListNode *nextList = list->next;
    int currentVal = list->val;
    delete list;
    list = nextList;
    return currentVal;
  }
};
