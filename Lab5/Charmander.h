//Charmander.h
#ifndef RPG_H
#define RPG_H
#include <string>
#include <vector>
using namespace std;
class Charmander{
    private:
        vector<string> skills;
    public:
        Charmander();
        Charmander(string name, int hp, int def, vector<string> skills);
        //~Charmander();
        void speak();
        void printStats();
};
#endif