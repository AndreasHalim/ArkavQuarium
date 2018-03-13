#include "Entity.h"
#include "Aquarium.h"

class Creature: public Entity {
public:
	Creature(int x, int y, int direction);
	~Creature();
	Creature(const Creature&);
	Creature& operator=(const Creature&);

	void eat(Aquarium&, Item&);
private:
	int direction;
}