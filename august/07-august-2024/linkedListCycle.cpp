class ListNode {
public:
  int val;
  ListNode *next;
};

class Solution {
public:
  bool hasCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
      return false;
    }
    ListNode *fast = head->next->next;
    ListNode *slow = head->next;

    while (fast == nullptr && fast->next != nullptr && fast != slow) {
      slow = slow->next;
      fast = fast->next->next;
    }
    return fast == slow;
  }
};
