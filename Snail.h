#ifndef SNAIL_H
#define SNAIL_H

#include "Creature.h"

class Snail : public Creature{
public:
	Snail(int x, int y, int speed, int direction);
	~Snail();
	Snail(const Snail&);
	Snail& operator=(const Snail&);

	void eat(Aquarium&, Item&);
	void move(int x, int y);

	bool isCoinExist();
}

#endif
