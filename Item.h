// Item.h

#include "Entity.h"

class Item : public Entity {
public:
	Item(int x, int y);		// Perubahan yang sebelumnya adalah: Item(int x, int y, int direction); karena Item selalu turun
	~Item();
	Item(const Item&);
	Item& operator=(const Item&);

	bool isOnLand();
};
