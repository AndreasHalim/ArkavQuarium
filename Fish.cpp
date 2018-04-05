#include "Aquarium.h"
#include "Fish.h"

Fish::Fish(int x, int y, int speed, int direction) : Creature(x, y, speed, direction) {};

Fish::~Fish(){};

Fish::Fish(const Fish& f){
    this->x = f.getX();
    this->y = f.getY();
    this->speed = f.getSpeed();
    this->direction = f.getDirection();
};

Fish& Fish::operator=(const Fish&){
    this->x = f.getX();
    this->y = f.getY();
    this->speed = f.getSpeed();
    this->direction = f.getDirection();

    return *this;
};

void Fish::death(){};

void Fish::spawnCoin(Aquarium& a) {};
