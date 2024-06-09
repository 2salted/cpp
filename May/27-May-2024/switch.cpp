#include <iostream>

int main() {
  uint16_t dayOfWeek;
  std::cout << "Pick the day of the week:";
  std::cin >> dayOfWeek;

  switch (dayOfWeek) {
  case 1:
    std::cout << "monday";
    break;
  case 2:
    std::cout << "tuesday";
    break;
  case 3:
    std::cout << "wednesday";
    break;
  case 4:
    std::cout << "thrusday";
    break;
  case 5:
    std::cout << "friday";
    break;
  case 6:
    std::cout << "saturday";
    break;
  case 7:
    std::cout << "sunday";
    break;
  default:
    std::cout << "There are only 7 days in a week dummy";
  }
}
