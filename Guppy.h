#ifndef GUPPY_H
#define GUPPY_H

#include "Fish.h"
#include "Creature.h"

class Guppy : public Creature,public Fish {
public:
	Guppy(int x, int y, int speed, int direction);
	~Guppy();
	Guppy(const Guppy&);
	Guppy& operator=(const Guppy&);

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
