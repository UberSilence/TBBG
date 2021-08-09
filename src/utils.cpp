#include <bits/stdc++.h>

void clearScreen() {
    #include <stdlib.h>
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int random_number(int a, int b) {
    std::random_device random_device; 
    std::mt19937 engine{random_device()};
    std::uniform_int_distribution<> dist(a,b);
    return dist(engine);
}