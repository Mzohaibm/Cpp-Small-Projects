#include <iostream>
#include <cstdlib>
#include <ctime>

enum Choice { ROCK, PAPER, SCISSORS };

Choice getUserChoice() {
    std::cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    int choice;
    std::cin >> choice;
    return static_cast<Choice>(choice);
}

Choice getComputerChoice() {
    return static_cast<Choice>(std::rand() % 3);
}

void determineWinner(Choice user, Choice computer) {
    std::cout << "Your choice: ";
    switch (user) {
        case ROCK:
            std::cout << "Rock";
            break;
        case PAPER:
            std::cout << "Paper";
            break;
        case SCISSORS:
            std::cout << "Scissors";
            break;
    }

    std::cout << "\nComputer's choice: ";
    switch (computer) {
        case ROCK:
            std::cout << "Rock";
            break;
        case PAPER:
            std::cout << "Paper";
            break;
        case SCISSORS:
            std::cout << "Scissors";
            break;
    }

    std::cout << "\n";

    if (user == computer) {
        std::cout << "It's a tie!\n";
    } else if ((user == ROCK && computer == SCISSORS) ||
               (user == PAPER && computer == ROCK) ||
               (user == SCISSORS && computer == PAPER)) {
        std::cout << "You win!\n";
    } else {
        std::cout << "Computer wins!\n";
    }
}

int main() {
    std::srand(std::time(0));

    do {
        Choice userChoice = getUserChoice();
        Choice computerChoice = getComputerChoice();

        determineWinner(userChoice, computerChoice);

        char playAgain;
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }

    } while (true);

    std::cout << "Thanks for playing!\n";

    return 0;
}
