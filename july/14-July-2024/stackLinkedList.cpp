class ListNode {
public:
  int val;
  ListNode *next;
};

class Stack {
private:
  ListNode *list;

public:
  void push(int val) {
    ListNode *newNode = new ListNode{val, list};
    list = newNode;
  }

  int pop() {
    ListNode *nextList = list->next;
    int currVal = list->val;
    delete list;
    list = nextList;
    return currVal;
  }
};
