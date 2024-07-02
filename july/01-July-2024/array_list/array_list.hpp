#include <cstdint>
#include <optional>
#include <ostream>
#include <string>

using std::optional;
using std::size_t;
using std::string;

using int32 = int32_t;
using usize = size_t;

class ArrayList {
private:
  int32 *data;
  usize size;
  usize capacity;

public:
  ArrayList();
  ArrayList(usize size);
  ArrayList(usize size, int32 val);
  ArrayList(const ArrayList &other);
  ~ArrayList();

  void resize(usize new_size);
  void add(int32 val);
  void join(ArrayList const &other);
  inline int32 &operator[](usize pos) const;
  inline void reverse();
  void add(int32 ele, usize pos);
  inline optional<usize> find(int32 val) const;
  /* returns bitwise not of the index where element can be placed if it is
       not found in the list  */
  usize binary_search(int32 val) const;
  usize upper_bound(int32 val) const;
  usize lower_bound(int32 val) const;
  inline usize length() const;
  inline bool is_empty() const;
  void sort();
  void sort_descending();
  inline bool contains(int32 val) const;
  inline usize cap() const;
  void trim_to_size();
  bool operator==(ArrayList const &other) const;
  bool is_sorted() const;
  string to_string() const;
  friend std::ostream &operator<<(std::ostream &os, ArrayList const &a);
};
