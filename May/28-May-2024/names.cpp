#include <iostream>
using std::cin;
using std::cout;
using std::getline;
using std::string;

int main() {
  unsigned int n;
  string listOfNames;
  cout << "Enter the amount of names you want to print \n";
  cin >> n;
  cin.ignore();

  for (unsigned int i = 0; i < n; ++i) {
    string name;
    cout << "\nEnter a name to print:\n";
    getline(cin, name);
    listOfNames += name + " ";
    cout << name << " ";
  }

  cout << "\nthe list of names: " << listOfNames << std::endl;
  return 0;
}
