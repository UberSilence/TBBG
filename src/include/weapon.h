#include <iostream>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
    private:
        std::string name;
        int price;
        int damageLow;
        int damageHigh;
    public:
        Weapon(std::string _name, int _price, int _damageLow, int _damageHigh);
        Weapon();
        std::string getName(int id);
        int getPrice(int id);
        int getDamageLow(int id);
        int getDamageHigh(int id);
        int getCount();
};

#endif