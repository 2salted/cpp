class ListNode {
public:
  int val;
  ListNode *next;
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
  if (list1 == nullptr) {
    return nullptr;
  }
  if (list2 == nullptr) {
    mergeTwoLists(list1->next, list2);
  }
  if (list1->val >= list2->val) {
  }
  return mergeTwoLists(list1, list2->next);
}
