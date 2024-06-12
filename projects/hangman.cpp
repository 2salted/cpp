#include <iostream>
#include <string>

int main() {
  std::string pickedWord = "funny", FoundLetters = "";
  int attemptsLeft = 10;
  int wordLength = pickedWord.length();

  std::cout << "You have " << attemptsLeft << " attempts to guess a word with "
            << wordLength << " letters\n";

  std::string pickedLetter;
  std::cout << "\nPick a letter (a-z): ";
  std::cin >> pickedLetter;

  if (pickedLetter.length() > 1) {
    std::cout << "\nToo many characters, you fail!\n" << std::endl;
    return 0;
  }

  for (unsigned int i = 0; i < pickedWord.length(); ++i) {
    if (pickedLetter[0] == pickedWord[i]) {
      FoundLetters += pickedWord[i];
    } else {
      FoundLetters += " __ ";
    }
  }

  return 0;
}
