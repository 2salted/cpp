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

ListNode *reverseHelper(ListNode *prev, ListNode *curr) {
  if (curr == nullptr) {
    return prev;
  }
  return reverseHelper(curr, curr->next);
  curr->next = prev;
}

ListNode *reverse(ListNode *list) { return reverseHelper(nullptr, list); }

bool is_palindrome(ListNode *list) {
  ListNode *par = middle(list, list);
  ListNode *second = par->next;
  par->next = nullptr;
  return false;
}

int main() {
  ListNode *list = new ListNode{1, new ListNode{2, new ListNode{3, nullptr}}};
  is_palindrome(list);
  return 0;
}
