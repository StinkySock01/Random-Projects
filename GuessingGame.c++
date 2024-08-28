#include <iostream>
#include <unistd.h>

int main(){

    std::string name;
    int num;
    int guess;
    int tries; 
    char choice;
    
    srand(time(NULL));
    num = (rand()% 100) + 1;

    std::cout << "**********WELCOME TO CHINGU'S GUESSING GAME!*********\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Annyeong " << name << " chingu! \n";
    std::cout << "Loading please wait...\n";
    usleep(2000000);
    
    std::cout << "Type Y if you want to enter to the game and type N if you want to exit \n";
    std::cin >> choice;
    if((choice == 'Y') || (choice == 'y')) {
        std::cout << "Entering the game...\n";
        usleep(2000000);
        std::cout << "**********WELCOME TO CHINGU'S GUESSING GAME!*********\n";
    }
    else if ((choice == 'N') || (choice == 'n')){
        std::cout << "Closing program...\n";
        usleep(2000000);
        exit(0);
    }
   do{
    std::cout << "Enter a guess between (1-100): ";
    std::cin >> guess;
    tries++;

        if (guess > num){
            std::cout << "Too high!\n";
        }
        else if (guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "CORRECT!\n" << " # of tries: " << tries << '\n';
        }
    } 
    while (guess != num);
    std::cout << "Closing program...\n";
    usleep(2000000);
    exit(0);


    return 0;    
}