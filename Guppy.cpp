#include "Guppy.h"
    
Guppy::Guppy(int x, int y, int speed, int direction): Fish(x, y, speed, direction) {
    this->stage = 0;
};

Guppy::~Guppy() {};

Guppy::Guppy(const Guppy& g){
    this->x = g.getX();
    this->y = g.getY();
    this->direction = g.getDirection();
};

Guppy& Guppy::operator=(const Guppy& g){
    this->x = g.getX();
    this->y = g.getY();
    this->direction = g.getDirection();

    return *this;
};

void Guppy::grow(){
    this->setStage(this->getStage()++);
}

int Guppy::getStage(){
    return this->stage;
}

void Guppy::setStage(int stage){
    this->stage = stage;
}