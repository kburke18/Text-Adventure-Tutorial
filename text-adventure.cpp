#include <iostream>

int main() {
  int choice1 = 0;
  int choice2 = 0;
  int choice3 = 0;
  int maxTries = 3;
  int tries = 0;

  std::cout << "Hello! Welcome to Earth!\n";
  std::cout << "----=========================----\n";
  std::cout << "Before you, you see three different stones. A red, a blue and a green. Please pick one.\n";
  std::cout << "    1) Red stone - glows with a strange hotness.\n";
  std::cout << "    2) Blue stone - strangely smooth and feels wet to the touch.\n";
  std::cout << "    3) Green stone - it smeshs like fresh cut grass.\n";
  std::cout << "=========================\n";
  std::cout << "Your choice (1-3): ";
  std::cin >> choice1;

  // Account for invalid inputs
  if (choice1 >= 1 || choice1 <= 3) {
    std::cout << "Added the magical stone to your inventory.\n";
    std::cout << "----=========================----\n";
  } else {
    std::cout << "Your refusal to choose a stone compels you to pick up a random stone.\n";
  }

  std::cout << "You leave the area and see two figures standing at the exit for the clearing.\n";
  std::cout << "    1) The woman on the right wears a dark cape and with a hood that covers her face. She beckons you closer with a slender finger.\n";
  std::cout << "    2) The woman on the left covered in a thick wooly coat. Her pale afro covers her eyes. She waves a hand in greeting.\n";
  std::cout << "=========================\n";
  std::cout << "Which woman do you approach? (1-2): ";
  std::cin >> choice2;

  if (choice2 == 1) {
    std::cout << "You decide to follow the woman in the black cloak. She leads you through a path shrouded by trees where no sunlight touches the ground...\n";
  } else if (choice2 == 2) {
    std::cout << "You decide to follow the woman in the white coat. She guides you to a strange platform that lifts you up into the sky, bright with sunlight...\n";
  } else {
    // Account for invalid inputs
    choice2 = 0;
    std::cout << "A man in a grey bodysuit grabs your arm and drags you away from both figures. You and him run through a maze of bushes...\n";
  }
  std::cout << "----=========================----\n";
}
