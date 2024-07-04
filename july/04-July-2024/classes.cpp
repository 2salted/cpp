class arrayList {
private:
  int *arr = new int[16];
  int size = 0;
  int capacity = 16;

public:
  void resize(const int newSize) {
    if (newSize <= capacity) {
      return;
    }
    capacity = newSize;
    int *newArr = new int[newSize];
    for (int i = 0; i < size; ++i) {
      newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
  }
};

int main() {
  arrayList a;
  a.resize(10);
  return 0;
}
