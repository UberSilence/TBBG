#include <iostream>
#include "include/shield.h"
#include "include/shields.h"

Shield::Shield(std::string _name, int _price, int _protectLow, int _protectHigh) {
    name = _name;
    price = _price;
    protectLow = _protectLow;
    protectHigh = _protectHigh;
}

Shield::Shield() = default;

std::string Shield::getName(int id) {
    return shields[id].name;
}

int Shield::getPrice(int id) {
    return shields[id].price;
}

int Shield::getProtectLow(int id) {
    return shields[id].protectLow;
}

int Shield::getProtectHigh(int id) {
    return shields[id].protectHigh;
}

int Shield::getCount() {
    return shields.size();
}