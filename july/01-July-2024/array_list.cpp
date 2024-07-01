#include "array_list.hpp"
using std::optional;
using std::size_t;
using std::string;

using i32 = int32_t;
using usize = size_t;

ArrayList::ArrayList() : data(new int[16]), size(0), capacity(16) {}
ArrayList::ArrayList(usize size)
    : data(new i32[size]), size(size), capacity(size) {}
ArrayList::ArrayList(usize size, i32 val)
    : data(new i32[size]), size(size), capacity(size) {
  for (usize i = 0; i < size; i++) {
    data[i] = val;
  }
}
ArrayList::ArrayList(const ArrayList &other)
    : data(new i32[other.size]), size(other.size), capacity(other.size) {
  for (usize i = 0; i < other.size; i++) {
    data[i] = other.data[i];
  }
}
ArrayList::~ArrayList() { delete[] data; }

void ArrayList::resize(usize new_size) {
  if (new_size > capacity) {
    this->capacity = new_size;
    i32 *new_data = new i32[new_size];

    for (usize i = 0; i < size; i++) {
      new_data[i] = data[i];
    }
    delete[] data;
    data = new_data;
  }
}

void ArrayList::add(i32 val) {
  if (size == capacity) {
    resize(capacity * 2);
  }
  data[size++] = val;
  {
    capacity *= 2;
    i32 *new_data = new i32[capacity];
    for (usize i = 0; i < size; i++) {
      new_data[i] = data[i];
    }
    delete[] data;
    data = new_data;
  }
}

void ArrayList::join(ArrayList const &other) {
  resize((size + other.size) * 2);
  for (usize i = 0; i < other.size; i++) {
    data[size + i] = other.data[i];
  }
  size += other.size;
}

inline i32 &ArrayList::operator[](usize pos) const {
  if (pos >= size) {
    throw "Index out of bounds";
  }
  return data[pos];
}

inline void ArrayList::reverse() {
  for (usize i = 0; i < size / 2; i++) {
    i32 tmp = data[i];
    data[i] = data[size - 1 - i];
    data[size - 1 - i] = tmp;
  }
}

void ArrayList::add(i32 ele, usize pos) {
  if (pos > size) {
    throw "Index out of bounds";
  }

  if (size == capacity) {
    resize(capacity * 2);
  }

  for (usize i = size; i > pos; i--) {
    data[i] = data[i - 1];
  }
  data[pos] = ele;
  size++;
}

inline optional<usize> ArrayList::find(i32 val) const {
  for (usize i = 0; i < size; i++) {
    if (data[i] == val) {
      return i;
    }
  }
  return {};
}

usize ArrayList::binary_search(i32 val) const {
  usize left = 0;
  usize right = size;

  while (left < right) {
    usize mid = (left + right) / 2;
    if (data[mid] < val) {
      left = mid + 1;
    } else if (data[mid] > val) {
      right = mid;
    } else {
      return mid;
    }
  }
  return ~left;
}

usize ArrayList::upper_bound(i32 val) const {
  usize left = 0;
  usize right = size;

  while (left < right) {
    usize mid = (left + right) / 2;
    if (data[mid] <= val) {
      left = mid + 1;
    } else if (data[mid] > val) {
      right = mid;
    }
  }

  return left;
}

usize ArrayList::lower_bound(i32 val) const {
  usize left = 0;
  usize right = size;

  while (left < right) {
    usize mid = (left + right) / 2;
    if (data[mid] < val) {
      left = mid + 1;
    } else if (data[mid] >= val) {
      right = mid;
    }
  }

  return left;
}

inline usize ArrayList::length() const { return size; }
inline bool ArrayList::is_empty() const { return size == 0; }

void ArrayList::sort() {
  for (usize i = 0; i < size; i++) {
    for (usize j = i + 1; j < size; j++) {
      if (data[i] > data[j]) {
        i32 tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }
}

void ArrayList::sort_descending() {
  for (usize i = 0; i < size; i++) {
    for (usize j = i + 1; j < size; j++) {
      if (data[i] < data[j]) {
        i32 tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }
}

inline bool ArrayList::contains(i32 val) const { return find(val).has_value(); }
inline usize ArrayList::cap() const { return capacity; }

void ArrayList::trim_to_size() {
  if (size < capacity) {
    i32 *new_data = new i32[size];
    for (usize i = 0; i < size; i++) {
      new_data[i] = data[i];
    }
    delete[] data;
    data = new_data;
  }
}

bool ArrayList::operator==(ArrayList const &other) const {
  if (size != other.size) {
    return false;
  }
  for (usize i = 0; i < size; i++) {
    if (data[i] != other.data[i]) {
      return false;
    }
  }
  return true;
}

bool ArrayList::is_sorted() const {
  for (usize i = 0; i < size - 1; i++) {
    if (data[i] > data[i + 1]) {
      return false;
    }
  }
  return true;
}

string ArrayList::to_string() const {
  string res = "[";
  for (usize i = 0; i < size; i++) {
    res += std::to_string(data[i]);
    if (i != size - 1) {
      res += ", ";
    }
  }
  res += "]";
  return res;
}

std::ostream &operator<<(std::ostream &os, ArrayList const &list) {
  return os << list.to_string();
}
