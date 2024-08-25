#include <iostream>

int main(){
    std::string name;
    double time;
    char unit;

    std::cout << "*********WELCOME TO CHINGU TIME CONVERTER!*********\n";

    std::cout << "ANNYEONG CHINGU! What's your name?: ";
    std::getline(std::cin, name);
    std::cout << "ANNYEONG " << name << " Chingu!!" << '\n';

    std::cout << "*******************************************\n";
    std::cout << " S = Seconds \n ";
    std::cout << "M = Minutes \n ";
    std::cout << "H = Hour \n";
    std::cout << "What unit would you like to use chingu?:  ";
    std::cin >> unit;

    if (unit == 'S' || unit == 's' ){
        std::cout << "Enter the seconds in minutes: ";
        std::cin >> time;
        time = (time/60);
        std::cout << "Conversion: " << time << " Minutes\n";
    }
    else if (unit == 'M' || unit == 'm')
    {
        std::cout << "Enter the minutes in hour: ";
        std::cin >> time;

        time = (time/60);
        std::cout << "Conversion: " << time << " Hours\n";
    }
    else if (unit == 'H' || unit == 'h'){
        std::cout << "Enter the hour to day: ";
        std::cin >> time;

        time = (time/24);
        std::cout << "Conversion: " << time << " Days \n";
    }
    

    else{
        std::cout << "Please enter a valid answer! \n";      
    }

    std::cout << "********************************************************";


    return 0;
}