#include "Creature.h"

Creature::Creature(int x, int y, int speed, int direction): Entity(x, y, speed){
    this->direction = direction;    
};

Creature::~Creature(){};

Creature::Creature(const Creature& c){
    this->x = c.getX();
    this->y = c.getY();
    this->speed = c.getSpeed();
    this->direction = c.getDirection();    
};

Creature& Creature::operator=(const Creature& c){
    this->x = c.getX();
    this->y = c.getY();
    this->speed = c.getSpeed();
    this->direction = c.getDirection();

    return *this;
};

void Creature::eat(Aquarium& a, Item& i){
    
};

int Creature::getDirection(){
    return this->direction;
};

void Creature::setDirection(int direction){
    this->direction = direction;
};
