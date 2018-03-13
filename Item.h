#include "Entity.h"

class Item : public Entity {
public:
	Item(int x, int y, int direction);
	~Item();
	Item(const Item&);
	Item& operator=(const Item&);

	bool isOnLand();
}