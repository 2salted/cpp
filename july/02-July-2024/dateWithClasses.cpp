#include <iostream>
using namespace std;

class Date {
public:
  int day = 0;
  int month = 0;
  int year = 0;
};

int printDate(const Date &dateVar) {
  cout << dateVar.day << "/" << dateVar.month << "/" << dateVar.year;
  return 0;
}

int main() {
  Date dateInit{2, 10, 24};
  printDate(dateInit);
}
