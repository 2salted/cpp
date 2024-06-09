#include <iostream>
#include <random>
#include <string>

int main() {
  std::string userAttack;
  std::cout << "Enter your input (rock, paper or scissors): ";
  std::cin >> userAttack;

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distrib(1, 3);
  int AIAttack = distrib(gen);
  std::cout << AIAttack;

  return 0;
}
