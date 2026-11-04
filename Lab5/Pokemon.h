//Pokemon.h
#ifndef RPG_H
#define RPG_H
#include <string>
#include <vector>
using namespace std;
class Pokemon{
    private:
        string name;
        int hp;
        int attack;
        int defense;
        vector<string> type;
    public:
        Pokemon();
        Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type);
        ~Pokemon();
        void speak();
        void printStats();
};
#endif