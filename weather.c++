#include <iostream>

int main(){
   
    int kmh;
    int temp;
    bool sunny = true;
    std::string name;

    std::cout << "*********Welcome to WEATHER CHINGU!*********\n";
    std::cout << " What's your name?: ";
    std::getline(std::cin, name);

    std::cout << " Hi " << name << " Chingu! Welcome to Weather Chingu!\n";


    std::cout << " Enter temperature: ";
    std::cin >> temp;

    if (temp <=0 || temp >= 30) {
        std::cout << " The temperature is bad!\n";
    }
    else{
        std::cout << " The temperature is good!\n";
    }

    if (sunny){
        std::cout << " It is sunny outside!\n" << " Stay hydrated " << name << " chingu!\n";
    }
    else{
        std::cout << " It is cloudy outside!\n " << " Remember to bring umbrella " << name << "chingu!\n";
    }
    
    std::cout << " Enter the speed (example: 40kmh): ";
    std::cin >> kmh;

    if (kmh <= 60 || kmh >= 1000 ){
        std::cout <<  kmh << "kmh" << " speed is moderate for a vehicle chingu! ^^ \n";
        std::cout << " Drive safe chingu!";
    } 
    else{
        std::cout << kmh << "kmh" << " speed is fast! slow down chingu!\n";
        std::cout << " Drive safe chingu!";
    }


    return 0;
}