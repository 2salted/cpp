#include <cstdint>
#include <iostream>
#include <vector>

class ListNode {
public:
  int32_t val;
  ListNode *next;
};

std::vector<int32_t> helper(ListNode *list) {
  if (list == nullptr) {
    return {};
  }

  std::vector<int32_t> res = helper(list->next);
  res.push_back(list->val);
  return res;
}

bool _is_palindrome(ListNode *const list, std::vector<int32_t> const &vec,
                    size_t pos) {
  if (list == nullptr) {
    return true;
  }

  if (list->val != vec[pos]) {
    return false;
  }

  return _is_palindrome(list->next, vec, pos + 1);
}

bool is_palindrome(ListNode *list) {
  return _is_palindrome(list, helper(list), 0);
}

int main() {
  ListNode *list = new ListNode{1, new ListNode{2, new ListNode{1, nullptr}}};
  if (is_palindrome(list)) {
    std::cout << "The list is a palindrome" << std::endl;
  } else {
    std::cout << "The list is not a palindrome" << std::endl;
  }
}
