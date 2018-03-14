#ifndef ITEM_H
#define ITEM_H

#include "Entity.h"

class Item : public Entity {
public:
	Item(int x, int y, int speed);
	~Item();
	Item(const Item&);
	Item& operator=(const Item&);

	bool isOnLand();
	//dari Entity
	void move(int x, int y);
}

#endif
