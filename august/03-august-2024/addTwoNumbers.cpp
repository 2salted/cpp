#include <iostream>
using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;
};

class Solution {
public:
  ListNode *helper(ListNode *l1, ListNode *l2, int carry) {
    if (l1 == nullptr && l2 == nullptr && carry == 1) {
      return new ListNode{carry, nullptr};
    }
    if (l1 == nullptr) {
      return l2;
    } else if (l2 == nullptr) {
      return l1;
    }
    int sum = l1->val + l2->val + carry;
    if (sum > 9) {
      carry = 1;
      sum -= 10;
    } else {
      carry = 0;
    }
    l1->val = sum;
    l2->val = sum;
    l1->next = helper(l1->next, l2->next, carry);
    return l1;
  }
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    return helper(l1, l2, 0);
  }
  void printList(ListNode *l1) {
    if (l1 == nullptr) {
      return;
    }
    cout << l1->val;
    printList(l1->next);
  }
};

int main() {
  Solution s;
  ListNode *list1 = new ListNode{2, new ListNode{4, new ListNode{3, nullptr}}};
  ListNode *list2 = new ListNode{5, new ListNode{6, new ListNode{4, nullptr}}};
  s.printList(s.addTwoNumbers(list1, list2));
}
