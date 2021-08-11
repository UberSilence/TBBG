#include <iostream>
#include "include/player.h"

Player::Player(std::string _name) {
    name = _name;
    level = 1;
    levelsLeft = 4;
    money = 50;
    weaponName = "Fists";
    weaponDamageLow = 20;
    weaponDamageHigh = 30;
    shieldName = "No Shield";
    shieldProtectLow = 0;
    shieldProtectHigh = 0;
    rank = "Beginner";
}

// money management
int Player::getMoney() {
    return money;
}

void Player::addMoney(int amount) {
    money += amount;
}

void Player::subMoney(int amount) {
    money -= amount;
}

int Player::getLevel() {
    return level;
}

void Player::addLevel() {
    level++;
}

void Player::setRank(int level) {
    switch(level) {
        case 5:
            rank = "Ambitious Fighter";
            break;
        case 10:
            rank = "Fighter";
            break;
        case 15:
            rank = "Advanced Fighter";
            break;
        case 20:
            rank = "Ambitious Expert";
            break;
        case 25:
            rank = "Expert";  
            break;
        case 30:
            rank = "Master";
            break;
        case 35:
            rank = "Epic";
            break;
        case 40:
            rank = "Legendary";
            break;
        case 45:
            rank = "Unreal";
            break;
        case 50:
            rank = "Godlike";
            break;
    }
}

std::string Player::getName() {
    return name;
}

std::string Player::getRank() {
    return rank;
} 

int Player::getLevelsLeft() {
    return levelsLeft;
}

void Player::levelPassed() {
    levelsLeft--;
}

void Player::resetLevelsLeft() {
    levelsLeft = 5;
}

std::string Player::getWeaponName() {
    return weaponName;
}

int Player::getWeaponDamageHigh() {
    return weaponDamageHigh;
}

int Player::getWeaponDamageLow() {
    return weaponDamageLow;
}

void Player::setWeapon(std::string _weaponName) {
    weaponName = _weaponName;
}

void Player::setWeaponDamageHigh(int damage) {
    weaponDamageHigh = damage;
}

void Player::setWeaponDamageLow(int damage) {
    weaponDamageLow = damage;
}

void Player::setShield(std::string _shieldName) {
    shieldName = _shieldName;
}

void Player::setShieldProtectLow(int protect) {
    shieldProtectLow = protect;
}

void Player::setShieldProtectHigh(int protect) {
    shieldProtectHigh = protect;
}

std::string Player::getShieldName() {
    return shieldName;
}

int Player::getShieldProtectLow() {
    return shieldProtectLow;
}

int Player::getShieldProtectHigh() {
    return shieldProtectHigh;
}