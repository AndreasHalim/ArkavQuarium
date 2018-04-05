#include "Piranha.h"

Piranha::Piranha (int x, int y, int speed, int direction) : Fish(x, y, speed, direction) {};

Piranha::~Piranha(){};

Piranha::Piranha(const Piranha& p){
    this->x = p.getX();
    this->y = p.getY();
    this->direction = p.getDirection();
};

Piranha& Piranha::operator=(const Piranha&){
    this->x = p.getX();
    this->y = p.getY();
    this->direction = p.getDirection();

    return *this;
};
