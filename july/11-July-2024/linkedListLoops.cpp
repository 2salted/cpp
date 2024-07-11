#include <iostream>
using namespace std;

class LinkedList {
public:
  int val;
  LinkedList *next;
  ~LinkedList() {
    if (next != nullptr) {
      delete next;
    }
  }
};

void printList(LinkedList *list) {
  for (LinkedList *ptr = list; ptr != nullptr; ptr = ptr->next) {
    cout << ptr->val << "->";
  }
  cout << "N" << endl;
}

void printListWhile(LinkedList *list) {
  while (list != nullptr) {
    cout << list->val << "->";
    list = list->next;
  }
  cout << "N" << endl;
}

void appendRight(LinkedList *list, int num) {
  while (list->next != nullptr) {
    list = list->next;
  }
  list->next = new LinkedList{num, nullptr};
}

void insert(LinkedList *&list, int num, int pos) {
  int currentIndex = 0;
  while (list != nullptr && currentIndex < pos) {
    list = list->next;
  }
  list = new LinkedList{num, list};
}

int main() {
  int num = 4, pos = 0;
  LinkedList *list =
      new LinkedList{1, new LinkedList{2, new LinkedList{3, nullptr}}};
  printList(list);
  insert(list, num, pos);
  printList(list);
  return 0;
}
