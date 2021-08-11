#include <iostream>
#include <thread>
#include <chrono>
#include "include/utils.h"
#include "include/menu.h"
#include "include/game.h"
#include "include/shop.h"
#include "include/player.h"

Game::Game() = default;

void Game::health() {
    if (playerHealth < 0) 
        playerHealth = 0;
    else if (monsterHealth < 0)
        monsterHealth = 0;
    std::cout << "\nYour HP: " << playerHealth << "\n";
    std::cout << "Monster's HP: " << monsterHealth << "\n";
}

void Game::end(Player *player) {
    if ((playerHealth > 0) && (monsterHealth == 0)) {
        player->addLevel();
        player->levelPassed();
        if ((player->getLevelsLeft() % 5) == 0) {
            player->setRank(player->getLevel());
            player->resetLevelsLeft();
        }
        moneyWon = random_number(20,30);
        player->addMoney(moneyWon);
        std::cout << "\n###################### VICTORY ######################\n";
        std::cout << "#\n# + 1 Level (" << "Level " << player->getLevel() << ")\n# + " << moneyWon << " coins (Bag: " << player->getMoney() << " coins)\n";
        if (player->getLevelsLeft() == 5)
            std::cout << "# You ranked up: " << player->getRank();
        else
            std::cout << "# You have " << player->getLevelsLeft() << " levels left to rankup.";
        std::cout << "\n#\n#####################################################\n";
        std::cout << "\nWhat do you want to do next?\n1 - Next Level\n2 - Menu\n3 - Exit\nChoice: ";
    } else if ((monsterHealth > 0) && (playerHealth == 0)) {
        if (surrendered == false)
            moneyWon = random_number(10,15);
        else 
            moneyWon = 0;
        player->addMoney(moneyWon);
        std::cout << "\n###################### DEFEAT ######################\n";
        std::cout << "#\n# + " << moneyWon << " coins (Bag: " << player->getMoney() << " coins)\n";
        std::cout << "# You have " << player->getLevelsLeft() << " levels left to rankup.";
        std::cout << "\n#\n####################################################\n";
        std::cout << "\nWhat do you want to do next?\n1 - Try Again\n2 - Menu\n3 - Exit\nChoice: ";
    }
        std::cin >> choice;
        switch(choice) {
            case 1:
                clearScreen();
                newGame(player);
                break;
            case 2:
                clearScreen();
                menu(player);
                break;
            case 3:
                exit(0);
                break;
            default:
                end(player);
                break;
        }
}

void Game::newGame(Player *player) {
    surrendered = false;
    playerHealth = 100;
    if (player->getLevel() > 1)
        monsterHealth = 100 + (2.5 * player->getLevel());
    else 
        monsterHealth = 100;

    std::cout << "********* LEVEL " << player->getLevel() << " **********\n";
    health();

    int random = random_number(1,2);
    if (random == 1) {
        std::cout << "\nYou're the first one to play. Good luck!\n";
        std::this_thread::sleep_for (std::chrono::seconds(3));
        playerTurn = true;
        monsterTurn = false;
    } else {
        std::cout << "\nThe Monster is the first one to play. Good luck!\n";
        std::this_thread::sleep_for (std::chrono::seconds(3));
        clearScreen();
        playerTurn = false;
        monsterTurn = true;
    }

    while ((playerHealth > 0) && (monsterHealth > 0)) {
        if (playerTurn == true) {
            std::cout << "\nWhat's your next action?\n1 - Attack\n2 - Surrender\nChoice: ";
            std::cin >> choice;

            switch(choice) {
                case 1:
                    random = random_number(player->getWeaponDamageLow(), player->getWeaponDamageHigh());
                    monsterHealth = monsterHealth - random;
                    playerTurn = false;
                    monsterTurn = true;
                    clearScreen();
                    std::cout << "You attacked the Monster, dealing " << random << " damage\n";
                    health();
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    break;
                case 2:
                    playerHealth = 0;
                    surrendered = true;
                    break;
            }
        }
        else if (monsterTurn == true) {
            clearScreen();
            random = (random_number(player->getLevel()*20, (player->getLevel()*20)+10));
            int protect = (random_number(player->getShieldProtectLow(), player->getShieldProtectHigh()));
            std::cout << "The Monster attacked you, dealing " << random-protect << " damage.\nYour shield protects you for " << protect << " damage.\n";
            playerHealth = playerHealth - (random-protect);
            playerTurn = true;
            monsterTurn = false;
            health();
            std::this_thread::sleep_for (std::chrono::seconds(2));
        }
    }
    end(player);
}