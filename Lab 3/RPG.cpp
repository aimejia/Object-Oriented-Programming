#include "RPG.h"
#include <iostream>
#include <random>
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name=name;
    this->hits_taken = hits_taken;
    this->luck=luck;
    this->exp=exp;
    this->level=level;
}
RPG::~RPG(){
}

void RPG::setName(string name){
    this->name = name;
}

void RPG::updateExpLevel() {
    this->exp += 50.0;
    if (this -> exp >= 100.0){
        this->level += 1;
        this->exp = 0.0;
        this->luck += 0.1;
    }
}

void RPG::attack(RPG* opponent){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);
    float random_num = dis(gen);
    bool hit = random_num > (HIT_FACTOR * opponent->getLuck());
    if (hit == true){
        opponent->updateHitsTaken();
    }
}

void RPG::printStats() {
    string status = isAlive();
    cout << "Name: " << name << "\nHits Taken: " << hits_taken << "\nLuck: " << luck << "\nExp: " << exp << "\nLevel: " << level << "\nStatus: " << status << endl;
}


string RPG::getName() const {
    return name;
}
int RPG::getHitsTaken() const{
    return hits_taken;
}
float RPG::getLuck() const{
    return luck;
}
float RPG::getExp() const{
    return exp;
}
int RPG::getLevel() const{
    return level;
}

void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

bool RPG::isAlive() const{
    if (hits_taken < MAX_HITS_TAKEN){
        return true;
    }
    else{
        return false;
    }
}