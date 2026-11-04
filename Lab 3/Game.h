#ifndef Game_H
#define Game_h
#include <string>
#include <vector>
#include <set>
#include "RPG.h"
using namespace std;

class Game{
    public:
        Game();
        ~Game();
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(RPG* winner, RPG* loser, int loserIndex);
        void battleRound();
        void gameLoop();
        void printFinalResults();
    private:
        vector<RPG*> players;
        set<int> live_players;
};

#endif