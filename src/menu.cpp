#include <iostream>
#include "include/utils.h"
#include "include/menu.h"
#include "include/game.h"
#include "include/shop.h"
#include "include/player.h"

void playerStats(Player *player) {
    std::cout << "############## STATS/INFO ##############\n";
    std::cout << "* Name: " << player->getName() << std::endl; 
    std::cout << "* Level: " << player->getLevel() << std::endl;
    std::cout << "* Rank: " << player->getRank() << std::endl;
    std::cout << "* Weapon: " << player->getWeaponName() << std::endl;
    std::cout << "* Shield: " << player->getShieldName() << std::endl;
    std::cout << "* Bag: " << player->getMoney() << " coins" << std::endl;
    std::cout << "########################################\n\n";
    menu(player);
}

void menu(Player *player) {
    int choice;

    std::cout << "What do you want to do next?\n1 - New game\n2 - Stats\n3 - Shop\n4 - Exit\nChoice: ";
    std::cin >> choice;
    clearScreen();

    Game game;
    
    switch(choice) {
        case 1:
            game.newGame(player);
            break;
        case 2:
            clearScreen();
            playerStats(player);
        case 3:
            clearScreen();
            shop(player);
        case 4:
            exit(0);
        default:
            clearScreen();
            std::cout << "Not an option.\n";
            menu(player);
    }
}