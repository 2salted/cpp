#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
  std::string userInput;
  std::cout << "Player A enter your attack (rock, paper, scissors): ";
  std::cin >> userInput;

  if (userInput != "rock" && userInput != "paper" && userInput != "scissors") {
    std::cout << "Not a valid input" << std::endl;
    return 0;
  }

  srand(time(0));
  int botAttack = rand() % 3;
  std::string botChoice;

  switch (botAttack) {
  case 0:
    botChoice = "rock";
    break;
  case 1:
    botChoice = "paper";
    break;
  case 2:
    botChoice = "scissors";
    break;
  }

  if (userInput == botChoice) {
    std::cout << "Tie!" << std::endl;
    return 0;
  } else if ((userInput == "rock" && botChoice == "scissors") ||
             (userInput == "paper" && botChoice == "rock") ||
             (userInput == "scissors" && botChoice == "paper")) {
    std::cout << "Player A wins!" << std::endl;
    return 0;
  } else {
    std::cout << "AI wins!" << std::endl;
    return 0;
  }
  return 0;
}
