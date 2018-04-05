#include "Creature.h"

// Perubahan: Snail extends Creature
class Snail : public Creature {
public:
	// Perubahan: nambah speed
	Snail(int x, int y, int speed, int direction);
	~Snail();
	Snail(const Snail&);
	Snail& operator=(const Snail&);

	bool isCoinExist();

private:
	// Perubahan: nambah konstanta stage
	const int stage = 1;
}