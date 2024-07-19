#include <iostream>
using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;
};

class Solution {
public:
  void printList(ListNode *head) {
    if (head == nullptr) {
      return;
    }
    cout << head->val << " ";
    return printList(head->next);
  }

  ListNode *removeElements(ListNode *head, int val) {
    if (head != nullptr) {
      return head;
    }
    if (head->next->next == nullptr && head->next->val == val) {
      ListNode *nextElement = head->next;
      head->next = nullptr;
      delete nextElement;
    }
    if (head->next->val == val) {
      ListNode *nextElement = head->next;
      head->next = head->next->next;
      delete nextElement;
    }
    return removeElements(head->next, val);
  }
};

int main() {
  ListNode *list = new ListNode{1, new ListNode{2, new ListNode{3, nullptr}}};
  Solution listnode;
  listnode.removeElements(list, 2);
  listnode.printList(list);
}
