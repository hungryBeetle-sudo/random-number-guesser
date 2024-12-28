#include <chrono>
#include <random>
#include <functional>
#include <string>
#include <iostream>

//Random Number Generator
int rng(){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(1, 100);

    return distribution(generator);
}

int main(){
    int guess_number = rng();
    int user_number;
    std::string user_input;
    bool found = false;

    std::cout << "Guess the number:\n";

    while(!found){
        std::cin >> user_input;
        user_number = std::stoi(user_input);

        if(user_number == guess_number){
            found = true;
        }
        else if(user_number > guess_number){
            std::cout << "Try a lesser one.\n";
        }
        else if(user_number < guess_number){
            std::cout << "Try a greater one.\n";
        }
    }

    std::cout << "You found it!\n";

    return 0;
}