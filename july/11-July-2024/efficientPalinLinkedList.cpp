#include <cstdint>
#include <iostream>
#include <ostream>
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

ListNode *reverse_helper(ListNode *prev, ListNode *curr) {
  if (curr == nullptr) {
    return prev;
  }

  ListNode *res = reverse_helper(curr, curr->next);
  curr->next = prev;
  return res;
}

ListNode *reverse(ListNode *list) { return reverse_helper(nullptr, list); }

bool is_equal(ListNode *l1, ListNode *l2) {
  return l1 == nullptr || l2 == nullptr ||
         l1->val == l2->val && is_equal(l1->next, l2->next);
}

bool is_palindrome(ListNode *list) {
  ListNode *par = middle(list, list);
  ListNode *second = reverse(par->next);
  par->next = nullptr;
  return is_equal(list, second);
}

int main() {
  ListNode *list = new ListNode{
      1, new ListNode{
             2, new ListNode{3, new ListNode{2, new ListNode{1, nullptr}}}}};
  std::cout << is_palindrome(list) << std::endl;
  return 0;
}
