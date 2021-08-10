#include "weapon.h"
#include <vector>

#ifndef WEAPONS_H
#define WEAPONS_H

Weapon FryingPan("Frying Pan", 40, 30, 35);
Weapon Knife("Knife", 70, 50, 55);
Weapon Bayonet("Bayonet", 100, 70, 75);
Weapon Machete("Machete", 130, 90, 100);
Weapon Axe("Axe", 160, 120, 125);
Weapon Nunchucks("Nunchucks", 200, 150, 160);
Weapon Sword("Sword", 240, 190, 200);
Weapon Katana("Katana", 350, 325, 350);
Weapon Trident("Trident", 500, 500, 1000);

std::vector<Weapon> weapons {FryingPan, Knife, Bayonet, Machete, Axe, Nunchucks, Sword, Katana, Trident};

#endif