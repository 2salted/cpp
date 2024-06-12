#include <iostream>
#include <vector>

int main() {
  std::vector<int> array;
  unsigned int elementCount;
  std::cout << "Enter the amount of integer elements you want: ";
  std::cin >> elementCount;

  if (elementCount < 1) {
    return 0;
  }

  for (unsigned int i = 0; i < elementCount; ++i) {
    int temp;
    std::cout << "Enter number to add in the array:\n";
    std::cin >> temp;
    array.push_back(temp);
  }

  std::cout << "\nArray: ";

  for (unsigned int i = 0; i < elementCount; ++i) {
    std::cout << array[i];
  }
  return 0;
}
