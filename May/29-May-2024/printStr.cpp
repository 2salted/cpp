#include <cstdint>
#include <iostream>
using std::cin;
using std::cout;
using std::getline;
using std::string;

int main() {
  string sentence;
  cout << "Enter a sentence:";
  getline(cin, sentence);
  for (uint32_t i = 0; i < sentence.length(); ++i) {
    if (sentence[i] == ' ') {
      cout << "\n";
    } else {
      cout << sentence[i];
    }
  }
}
