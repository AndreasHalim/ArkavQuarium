// Coin.h

#include "Item.h"

class Coin : public Item {
public:
	Coin(int, int);		// Perubahan mengikuti Item; sebelumnya adalah Coin(int, int, y, int direction);
	~Coin();
	Coin(const Coin&);
	Coin& operator=(const Coin&);

	int getValue();
	void setValue(int value);
private:
	int value;
};
