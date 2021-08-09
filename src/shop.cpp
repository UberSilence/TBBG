#include <iostream>
#include "include/utils.h"
#include "include/menu.h"
#include "include/game.h"
#include "include/shop.h"
#include "include/player.h"

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
    
    std::cout << "##################### WEAPONS #####################\n";
    std::cout << "#\n# 1. Fists (Default) - 0 coins - 20-30 damage\n";
    std::cout << "# 2. Frying Pan - 40 coins - 30-35 damage\n";
    std::cout << "# 3. Knife - 70 coins - 50-55 damage\n";
    std::cout << "# 4. Bayonet - 100 coins - 70-75 damage\n";
    std::cout << "# 5. Machete - 130 coins - 90-100 damage\n";
    std::cout << "# 6. Axe - 160 coins - 120-125 damage\n";
    std::cout << "# 7. Nunchucks - 200 coins - 150-160 damage\n";
    std::cout << "# 8. Sword - 240 coins - 190-200 damage\n";
    std::cout << "# 9. Katana - 350 coins - 325-350 damage\n";
    std::cout << "# 10. *Trident - 500 coins - 500-1000 damage\n";
    std::cout << "#\n###################################################\n";

    std::cout << "\nWhat would you like to buy?\nWeapon's number: ";
    std::cin >> choice;
    switch(choice) {
        case 1:
            std::cout << "Error: You can't buy the default weapon!";
            buyWeapon(player);
            break;
        case 2:
            if (player->getMoney() >= 40) {
                player->setWeapon("Frying Pan");
                player->subMoney(40);
                player->setWeaponDamageLow(30);
                player->setWeaponDamageHigh(35);
                clearScreen();
                std::cout << "You bought a Frying Pan!\nYou now deal 30-35 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Frying Pan.\nYou need " << 40 - player->getMoney() << " more coins.\n";
                buyWeapon(player);}
            break;
        case 3:
            if (player->getMoney() >= 70) {
                player->setWeapon("Knife");
                player->subMoney(70);
                player->setWeaponDamageLow(50);
                player->setWeaponDamageHigh(55);
                clearScreen();
                std::cout << "You bought a Knife!\nYou now deal 50-55 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Knife.\nYou need " << 70 - player->getMoney() << " more coins.\n\n";
                buyWeapon(player);
            }
            break;
        case 4:
            if (player->getMoney() >= 100) {
                player->setWeapon("Bayonet");
                player->subMoney(100);
                player->setWeaponDamageLow(70);
                player->setWeaponDamageHigh(75);
                clearScreen();
                std::cout << "You bought a Bayonet!\nYou now deal 70-75 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Bayonet.\nYou need " << 100 - player->getMoney() << " more coins.\n";
                buyWeapon(player);
            }
            break;
        case 5:
            if (player->getMoney() >= 130) {
                player->setWeapon("Machete");
                player->subMoney(130);
                player->setWeaponDamageLow(90);
                player->setWeaponDamageHigh(100);
                clearScreen();
                std::cout << "You bought a Machete!\nYou now deal 90-100 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Machete.\nYou need " << 130 - player->getMoney() << " more coins.\n";
                buyWeapon(player);
            }
            break;
        case 6:
            if (player->getMoney() >= 160) {
                player->setWeapon("Axe");
                player->subMoney(160);
                player->setWeaponDamageLow(120);
                player->setWeaponDamageHigh(125);
                clearScreen();
                std::cout << "You bought an Axe!\nYou now deal 120-125 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy an Axe.\nYou need " << 160 - player->getMoney() << " more coins.\n";
                buyWeapon(player);
            }
            break;
        case 7:
            if (player->getMoney() >= 200) {
                player->setWeapon("Nunchucks");
                player->subMoney(200);
                player->setWeaponDamageLow(150);
                player->setWeaponDamageHigh(160);
                clearScreen();
                std::cout << "You bought a Nunchucks!\nYou now deal 150-160 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Nunchucks.\nYou need " << 200 - player->getMoney() << " more coins.\n";
                buyWeapon(player);
            }
            break;
        case 8:
            if (player->getMoney() >= 240) {
                player->setWeapon("Sword");
                player->subMoney(240);
                player->setWeaponDamageLow(190);
                player->setWeaponDamageHigh(200);
                clearScreen();
                std::cout << "You bought a Sword!\nYou now deal 190-200 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Sword.\nYou need " << 240 - player->getMoney() << " more coins.\n";
                buyWeapon(player);
            }
            break;
        case 9:
            if (player->getMoney() >= 350) {
                player->setWeapon("Katana");
                player->subMoney(350);
                player->setWeaponDamageLow(325);
                player->setWeaponDamageHigh(350);
                clearScreen();
                std::cout << "You bought a Katana!\nYou now deal 325-350 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Katana.\nYou need " << 350 - player->getMoney() << " more coins.\n";
                buyWeapon(player);
            }
            break;
        case 10:
            if (player->getMoney() >= 500) {
                player->setWeapon("Trident");
                player->subMoney(500);
                player->setWeaponDamageLow(500);
                player->setWeaponDamageHigh(1000);
                clearScreen();
                std::cout << "You bought a Trident!\nYou now deal 500-1000 damage.\nNew balance: " << player->getMoney() << " coins.\n";
                shop(player);
            } else {
                clearScreen();
                std::cout << "You don't have enough coins to buy a Trident.\nYou need " << 500 - player->getMoney() << " more coins.\n";
                buyWeapon(player);
            }
            break;
    }
}