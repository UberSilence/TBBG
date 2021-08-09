#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        std::string name;
        std::string rank;
        int level;
        int money;
        int levelsLeft;
        std::string weaponName;
        int weaponDamageLow;
        int weaponDamageHigh;
    public:
        Player(std::string _name);
        int getMoney();
        void addMoney(int amount);
        void subMoney(int amount);
        int getLevel();
        void addLevel();
        void setRank(int level);
        void setWeapon(std::string _weaponName);
        void setWeaponDamageLow(int damage);
        void setWeaponDamageHigh(int damage);
        std::string getRank(); 
        std::string getName();
        std::string getWeaponName();
        int getWeaponDamageLow();
        int getWeaponDamageHigh();
        int getLevelsLeft();
        void levelPassed();
        void resetLevelsLeft();
};

#endif