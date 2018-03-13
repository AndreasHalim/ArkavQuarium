#include "Aquarium.h"
#include "Creature.h"

class Fish : public Creature {
	public:
		Fish(int x, int y, int direction);
		~Fish();
		Fish(const Fish&);
		Fish& operator=(const Fish&);
		
		void grow();
		void death();
		void spawnCoin(Aquarium&);
}