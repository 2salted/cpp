#include <iostream>
using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;
};

void printList(ListNode *head) {
  if (head == nullptr) {
    return;
  }
  cout << head->val << " ";
  printList(head->next);
}

ListNode *deleteDuplicates(ListNode *head) {
  if (head == nullptr) {
    return nullptr;
  }
  if (head->next == nullptr) {
    return head;
  }
  deleteDuplicates(head->next);
  if (head->val == head->next->val) {
    head->next = head->next->next;
  }
  return head;
}

int main() {
  ListNode *list = new ListNode{
      1, new ListNode{1, new ListNode{2, new ListNode{2, nullptr}}}};
  printList(deleteDuplicates(list));
}
