#include "Item.h"

class Coin : public Item {
public:
	Coin(int, int, y, int direction);
	~Coin();
	Coin(const Coin&);
	Coin& operator=(const Coin&);
private:
	int value;
}