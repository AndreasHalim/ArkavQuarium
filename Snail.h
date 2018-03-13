#include "Creature.h"

class Snail {
public:
	Snail(int x, int y, int direction);
	~Snail();
	Snail(const Snail&);
	Snail& operator=(const Snail&);

	bool isCoinExist();
}