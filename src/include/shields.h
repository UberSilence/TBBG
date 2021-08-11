#include "shield.h"
#include <vector>

#ifndef SHIELDS_H
#define SHIELDS_H

Shield Wooden("Wooden Shield", 50, 15, 20);
Shield Stone("Stone Shield", 100, 35, 40);
Shield Iron("Iron Shield", 150, 50, 60);
Shield Steel("Steel Shield", 200, 75, 85);
Shield Diamond("Diamond Shield", 250, 90, 100);
Shield Magic("Magic Shield", 300, 120, 125);
Shield Legendary("Legendary Shield", 500, 200, 500);

std::vector<Shield> shields = {Wooden, Stone, Iron, Steel, Diamond, Magic, Legendary};

#endif