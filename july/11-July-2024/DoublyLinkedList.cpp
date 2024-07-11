#include <cstdint>
#include <iostream>
#include <vector>
class DoublyLinkedList {
public:
  int32_t val;
  DoublyLinkedList *prev;
  DoublyLinkedList *next;

  DoublyLinkedList(int32_t val) { this->val = val; }

  ~DoublyLinkedList() {
    if (next != nullptr) {
      next->prev = nullptr;
      delete next;
    }
  }
};

DoublyLinkedList *make_doubly_linked_list(std::vector<int32_t> const &items) {
  DoublyLinkedList *prev = nullptr;
  DoublyLinkedList *curr;

  for (const int32_t item : items) {
    curr = new DoublyLinkedList(item);
    curr->prev = prev;
    if (prev != nullptr) {
      prev->next = curr;
    }
    prev = curr;
  }

  DoublyLinkedList *head = prev;
  while (head->prev != nullptr) {
    head = head->prev;
  }
  return head;
}

void printList(DoublyLinkedList *list) {
  while (list != nullptr) {
    std::cout << list->val << "<->";
    list = list->next;
  }
  std::cout << 'N' << std::endl;
}

int main() {
  DoublyLinkedList *list = make_doubly_linked_list({0, 1, 2, 3, 4, 5});
  printList(list);
  return 0;
}
