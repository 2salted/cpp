#include <iostream>
#include <random>
#include <string>

int main() {
  std::string userAttack;
  std::cout << "Enter your input (rock, paper or scissor): ";
  std::cin >> userAttack;

  if (userAttack != "rock" || "paper" || "scissor") {
    std::cout << "learn how to spell idiot!" << std::endl;
    return 0;
  }

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distrib(1, 3);
  int AIAttack = distrib(gen);

  if (AIAttack == 1) {
  }

  return 0;
}
