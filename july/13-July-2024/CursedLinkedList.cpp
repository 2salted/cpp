#include <cstdint>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class CursedLinkedList {
public:
  vector<int32_t> nexts;
  vector<int32_t> vals;
  int32_t head = -1;
};

void append(CursedLinkedList &list, int32_t val) {
  if (list.head == -1) {
    list.head = 0;
    list.vals.push_back(val);
    list.nexts.push_back(-1);
    return;
  }
  list.vals.push_back(val);
  list.nexts.push_back(-1);

  int32_t ptr = list.head;

  while (list.nexts[ptr] != -1) {
    ptr = list.nexts[ptr];
  }

  list.nexts[ptr] = list.vals.size() - 1;
}

void print_list(CursedLinkedList &list) {
  int32_t ptr = list.head;

  while (ptr != -1) {
    cout << list.vals[ptr] << "->";
    ptr = list.nexts[ptr];
  }

  cout << 'N' << endl;
}

int main() {
  CursedLinkedList list;
  append(list, 1);
  append(list, 2);
  append(list, 3);
  append(list, 4);
  append(list, 5);
  print_list(list);
  return 0;
}
