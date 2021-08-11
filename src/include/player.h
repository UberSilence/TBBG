#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        // player info
        std::string name;
        std::string rank;
        int level;
        int money;
        int levelsLeft;

        // player's weapon info
        std::string weaponName;
        int weaponDamageLow;
        int weaponDamageHigh;

        // player's shield info
        std::string shieldName;
        int shieldProtectLow;
        int shieldProtectHigh;
    public:
        Player(std::string _name);
        // money management
        int getMoney();
        void addMoney(int amount);
        void subMoney(int amount);

        // level management
        void levelPassed();
        int getLevel();
        void addLevel();

        // weapon management
        void setWeapon(std::string _weaponName);
        void setWeaponDamageLow(int damage);
        void setWeaponDamageHigh(int damage);

        std::string getWeaponName();
        int getWeaponDamageLow();
        int getWeaponDamageHigh();

        // shield management
        void setShield(std::string _shieldName);
        void setShieldProtectLow(int protect);
        void setShieldProtectHigh(int protect);

        std::string getShieldName();
        int getShieldProtectLow();
        int getShieldProtectHigh();

        // other getters
        std::string getRank(); 
        std::string getName();
        int getLevelsLeft();

        // other setters
        void resetLevelsLeft();
        void setRank(int level);
};

#endif