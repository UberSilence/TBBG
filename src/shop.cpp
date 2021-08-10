#include <iostream>
#include "include/utils.h"
#include "include/menu.h"
#include "include/game.h"
#include "include/shop.h"
#include "include/player.h"
#include "include/weapon.h"

void shop(Player *player) {
    int choice;
    std::cout << "What do you want to buy?\n1 - Weapons\n2 - Shields\n3 - Exit Shop\nChoice: ";
    std::cin >> choice;
    
    switch(choice) {
        case 1:
            clearScreen();
            buyWeapon(player);
            break;
        case 3:
            clearScreen();
            menu(player);
    }
}

void buyWeapon(Player *player) {
    int choice;
    
    Weapon weapon;
    std::cout << "##################### WEAPONS #####################\n#\n";
    for(int i = 0; i < weapon.getWeaponCount(); i++) {
        std::cout << "# " << i+1 << ". " << weapon.getName(i) << " - " << weapon.getPrice(i) << " coins - " << weapon.getDamageLow(i) << "-" << weapon.getDamageHigh(i) << " damage\n";
    }
    std::cout << "#\n###################################################\n";

    std::cout << "\nWhat would you like to buy?\nWeapon's number: ";
    std::cin >> choice;

    if(choice > 0 && choice <= weapon.getWeaponCount()) {
        if (player->getMoney() >= weapon.getPrice(choice-1)) {
            player->setWeapon(weapon.getName(choice-1));
            player->setWeaponDamageLow(weapon.getDamageLow(choice-1));
            player->setWeaponDamageHigh(weapon.getDamageHigh(choice-1));
            player->subMoney(weapon.getPrice(choice-1));
            clearScreen();
            std::cout << "You bought " << weapon.getName(choice-1) << " for " << weapon.getPrice(choice-1) << " coins. (New balance: " << player->getMoney() << " coins)\nYou're now dealing " << player->getWeaponDamageLow() << "-" << player->getWeaponDamageHigh() << " damage.\n\n";
            shop(player);
        } else {
            clearScreen();
            std::cout << "You don't have enough coins. You need " << (weapon.getPrice(choice-1) - player->getMoney()) << " more coins.\n";
            buyWeapon(player);
        }
    } else {
        std::cout << "Invalid choice.\n";
        buyWeapon(player);
    }
}