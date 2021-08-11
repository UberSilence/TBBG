#include <iostream>

#ifndef SHIELD_H
#define SHIELD_H

class Shield {
    private:
        std::string name;
        int price;
        int protectLow;
        int protectHigh;
    public:
        Shield(std::string _name, int _price, int _protectLow, int _protectHigh);
        Shield();
        std::string getName(int id);
        int getPrice(int id);
        int getProtectLow(int id);
        int getProtectHigh(int id);
        int getCount();
};

#endif