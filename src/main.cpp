#include <iostream>
#include "include/utils.h"
#include "include/menu.h"
#include "include/player.h"

int main() {
    std::string name;
    
    std::cout << "####################################\n";
    std::cout << "###### TURN BASED BATTLE GAME ######\n";
    std::cout << "######     BY UBERSILENCE     ######\n";
    std::cout << "####################################\n";

    do {
        std::cout << "* Please enter your name (max. 20 characters): ";
        std::cin >> name;
    } while (name.length() > 20);

    clearScreen();
    std::cout << "Welcome to my game, " << name << "!\n";

    Player player(name);
    menu(&player);
    return 0;
}