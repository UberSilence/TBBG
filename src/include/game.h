#ifndef GAME_H
#define GAME_H

class Game {
    private:
        int playerHealth;
        int monsterHealth;
        int choice;
        int moneyWon;
        bool playerTurn;
        bool monsterTurn;
        bool surrendered;
    public:
        Game();
        void newGame(Player *player);
        void health();
        void end(Player *player);
};

#endif