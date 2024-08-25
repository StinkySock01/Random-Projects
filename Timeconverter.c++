#include <iostream>
#include <unistd.h>

int main(){
    std::string name;
    double time;
    char unit;

    std::cout << "*********WELCOME TO CHINGU TIME CONVERTER!*********\n";
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 20){
        std::cout << "Error: Your name should not be over 20 characters!\n";
        std::cout << "Closing program in 2 seconds...\n";
        usleep(2000000);
        exit(0);   
    }
    else if (name.empty()){
        std::cout << "Error: You did not enter your name! \n"; 
        std::cout << "Closing program in 2 seconds...\n";
        usleep(2000000);
        exit(0);           
    }   
    else{
        std::cout << "WELCOME TO CHINGU TIME CONVERTER " << name << "!\n";
    }
        std::cout << "Loading please wait...\n";
        usleep(2000000);

    std::cout << "*******************************************\n";
    std::cout << " S = Seconds \n ";
    std::cout << "M = Minutes \n ";
    std::cout << "H = Hour \n";
    std::cout << "What unit would you like to use chingu?:  ";
    std::cin >> unit;

    if (unit == 'S' || unit == 's' ){
        std::cout << "Enter the seconds in minutes (number only): ";
        std::cin >> time;
        time = (time/60);
        std::cout << "Calculating...\n";
        usleep(2000000);
        std::cout << "Conversion: " << time << " Minutes\n";
        std::cout << "Closing program in 2 seconds...\n";
        usleep(2000000);
        exit(0);
    }
    else if (unit == 'M' || unit == 'm')
    {
        std::cout << "Enter the minutes in hour (number only): ";
        std::cin >> time;
        time = (time/60);
        std::cout << "Calculating...\n";
        usleep(2000000);        
        std::cout << "Conversion: " << time << " Hours\n";
        std::cout << "Closing program in 2 seconds...\n";
        usleep(2000000);
        exit(0);
    }
    else if (unit == 'H' || unit == 'h'){
        std::cout << "Enter the hour to day (number only): ";
        std::cin >> time;
        time = (time/24);
        std::cout << "Calculating...\n";
        usleep(2000000);        
        std::cout << "Conversion: " << time << " Days \n";
        std::cout << "Closing program in 2 seconds...\n";
        usleep(2000000);
        exit(0);
    }
    else{
        std::cout << "Please enter a valid answer! \n";
        usleep(2000000);
        exit(0);      
    }
    
    return 0;
}
