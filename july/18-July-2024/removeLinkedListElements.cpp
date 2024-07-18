#include <iostream>
using std::cout;
using std::endl;

class ListNode {
public:
  int val;
  ListNode *next;
};

ListNode *removeElements(ListNode *list, int val) {
  if (list == nullptr) {
    return nullptr;
  }

  if (list->val == val) {
    return removeElements(list->next, val);
  } else {
    list->next = removeElements(list->next, val);
    return list;
  }
}

void printList(ListNode *list) {
  while (list != nullptr) {
    cout << list->val << " ";
    list = list->next;
  }
  cout << endl;
}

int main() {
  ListNode *list = new ListNode{
      1,
      new ListNode{
          2,
          new ListNode{
              6, new ListNode{
                     3, new ListNode{
                            4, new ListNode{5, new ListNode{6, nullptr}}}}}}};

  removeElements(list, 6);
  printList(list);
};
