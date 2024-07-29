#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int strstr(string const &haystack, string const &needle) {
  if (haystack.size() < needle.size()) {
    return -1;
  }

  for (int i = 0; i <= haystack.size() - needle.size(); ++i) {
    if (haystack.substr(i, needle.size()) == needle) {
      return i;
    }
  }

  return -1;
}

int main() {
  string haystack, needle;
  cin >> haystack >> needle;
  cout << strstr(haystack, needle) << endl;
  return 0;
}
