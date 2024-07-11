#include <cstdint>
class ListNode {
public:
  int32_t val;
  ListNode *next;
};

ListNode *middle(ListNode *slow, ListNode *fast) {
  if (fast == nullptr || fast->next == nullptr) {
    return slow;
  }

  return middle(slow->next, fast->next->next);
}

ListNode *reverseHelper(ListNode *prev, ListNode *curr) {}

ListNode *reverse(ListNode *list) {}

bool is_palindrome(ListNode *list) {
  ListNode *par = middle(list, list);
  ListNode *second = par->next;
  par->next = nullptr;
  return false;
}
