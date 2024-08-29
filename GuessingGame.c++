#include <iostream>
#include <unistd.h>

int main(){

    std::string name;
    int num;
    int guess;
    int tries; 
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

    if(choice == '1'){
    do{
    srand(time(NULL));
    num = (rand()% 100) + 1;    
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
            std::cout << "CORRECT!\n" << "# of tries: " << tries << '\n';
        }
    } 
    while (guess != num);
    std::cout << "Closing program...\n";
    usleep(2000000);
    exit(0);
}
    if(choice == '2'){
    do{
    srand(time(NULL));
    num = (rand()% 300) + 1;
    std::cout << "Enter a guess between (1-300): ";
    std::cin >> guess;
    tries++;

        if (guess > num){
            std::cout << "Too high!\n";
        }
        else if (guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "CORRECT!\n" << "# of tries: " << tries << '\n';
        }
    } 
    while (guess != num);
    std::cout << "Closing program...\n";
    usleep(2000000);
    exit(0);
}
    if(choice == '3'){
    do{
    srand(time(NULL));
    num = (rand()% 500) + 1;
    std::cout << "Enter a guess between (1-500): ";
    std::cin >> guess;
    tries++;

        if (guess > num){
            std::cout << "Too high!\n";
        }
        else if (guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "CORRECT!\n" << "# of tries: " << tries << '\n';
        }
    } 
    while (guess != num);
    std::cout << "Closing program...\n";
    usleep(2000000);
    exit(0);
}
 return 0;    
    
}
