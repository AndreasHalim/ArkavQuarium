#ifndef PELLET_H
#define PELLET_H

#include "Item.h"

class Pellet: public Item(){
	public:
		Pellet(int x, int y, int speed);
		~Pellet();
		Pellet(const Pellet&);
		Pellet& operator=(const Pellet&);
}

#endif
