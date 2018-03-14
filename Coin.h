#ifndef COIN_H
#define COIN_H

#include "Item.h"

class Coin : public Item {
public:
	Coin(int x, int, y, int speed, int value);
	~Coin();
	Coin(const Coin&);
	Coin& operator=(const Coin&);

	int getValue();
	void setValue(int value);

private:
	int value;
}

#endif
