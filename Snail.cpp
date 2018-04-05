#include "Snail.h"

Snail::Snail(int x, int y, int direction): Creature(x, y, this->speed, direction) {};

Snail::~Snail(){};

Snail::Snail(const Snail& s){
    this->x = s.getX();
    this->y = s.getY();
    this->direction = s.getDirection();
};

Snail& Snail::operator=(const Snail& s){
    this->x = s.getX();
    this->y = s.getY();
    this->direction = s.getDirection();

    return *this;
};


bool Snail::isCoinExist(){
    
};
