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
  // needs fixing
  if (head == nullptr) {
    return nullptr;
  }
  if (head->next == nullptr) {
    return head;
  }
  if (head->next->val > head->val) {
    printList(head);
  }
  return deleteDuplicates(head->next);
}

int main() {
  ListNode *list = new ListNode{
      1, new ListNode{
             1, new ListNode{2, new ListNode{3, new ListNode{3, nullptr}}}}};
  deleteDuplicates(list);
}
