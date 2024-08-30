#include <iostream>
#include <unistd.h>
#include <cstdlib>  
#include <ctime>    

int main() {
    std::string name;
    int num;
    int guess;
    int tries = 0;
    char choice;

    std::cout << "**********WELCOME TO CHINGU'S GUESSING GAME!*********\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Annyeong " << name << " chingu! \n";
    std::cout << "Loading please wait...\n";
    usleep(2000000);

    std::cout << "Choose difficulty chingu :> \n";
    std::cout << "Level 1 = type 1 \n";
    std::cout << "Level 2 = type 2 \n";
    std::cout << "Level 3 = type 3 \n";
    std::cin >> choice;
    std::cout << "Loading please wait...\n";
    usleep(2000000);
    srand(time(NULL));

    switch (choice) {
        case '1':
            num = (rand() % 100) + 1;
            std::cout << "Guess the number between 1 and 100.\n";
            break;
        case '2':
            num = (rand() % 300) + 1;
            std::cout << "Guess the number between 1 and 300.\n";
            break;
        case '3':
            num = (rand() % 500) + 1;
            std::cout << "Guess the number between 1 and 500.\n";
            break;
        default:
            std::cout << "Invalid choice! Exiting...\n";
            return 1; 
    }
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high!\n";
        } else if (guess < num) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "CORRECT!\n" << "# of tries: " << tries << '\n';
        }
    } while (guess != num);

    std::cout << "Closing program...\n";
    usleep(2000000);

    return 0;
}   
