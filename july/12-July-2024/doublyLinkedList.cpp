class DoublyLinkedList {
public:
  int val;
  DoublyLinkedList *next;
  DoublyLinkedList *prev;
  ~DoublyLinkedList() {
    if (next != nullptr) {
      delete next;
    }
  }
};

int main() {}
