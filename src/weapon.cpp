#include <iostream>
#include "include/weapon.h"
#include "include/weapons.h"

Weapon::Weapon(std::string _name, int _price, int _damageLow, int _damageHigh) {
    name = _name;
    price = _price;
    damageLow = _damageLow;
    damageHigh = _damageHigh;
}

Weapon::Weapon() = default;

std::string Weapon::getName(int id) {
    return weapons[id].name;
}

int Weapon::getPrice(int id) {
    return weapons[id].price;
}

int Weapon::getDamageLow(int id) {
    return weapons[id].damageLow;
}

int Weapon::getDamageHigh(int id) {
    return weapons[id].damageHigh;
}

int Weapon::getCount() {
    return weapons.size();
}