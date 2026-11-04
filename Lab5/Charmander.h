//Charmander.h
#ifndef CHARMANDER_H
#define CHARMANDER_h
#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;
class Charmander : public Pokemon{
    private:
        vector<string> skills;
    public:
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);
        //~Charmander();
        void speak();
        void printStats();
};
#endif