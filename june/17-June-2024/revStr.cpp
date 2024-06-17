#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void reverse(string &);

int main() {
  string s = "This is a string";
  reverse(s);
  cout << s << endl;
  return 0;
}

void reverse(string &s) {
  string rev = "";
  for (size_t i = 0; i < s.size(); ++i) {
    rev += s[i];
  }
  s = rev;
}
