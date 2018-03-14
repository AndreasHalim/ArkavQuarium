#ifndef PIRANHA_H
#define PIRANHA_H

#include "Fish.h"
#include "Creature.h"

class Piranha : public Creature,public Fish{
public:
	Piranha(int x, int y, int speed, int direction);
	~Piranha();
	Piranha(const Piranha&);
	Piranha& operator=(const Piranha&);

	//From Entity
	void move(int x, int y);

	//From Creature
	void eat(Aquarium&, Item&);

	//From fish interface
	void grow();
	void death();
    void spawnCoin(Aquarium&);
}

#endif
