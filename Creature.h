#ifndef CREATURE_H
#define CREATURE_H

#include "Entity.h"

class Creature: public Entity {
public:
	Creature(int x, int y, int speed, int direction);
	~Creature();
	Creature(const Creature&);
	Creature& operator=(const Creature&);

	virtual void eat(Aquarium&, Item&) = 0;

	int getDirection();
	void setDirection(int direction);
private:
	int direction;
}

#endif
