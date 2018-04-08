// Pellet.h

#include "Item.h"

class Pellet: public Item(){
	public:
		Pellet(int x, int y);		// Perubahan mengikuti Item; sebelumnya adalah Pellet(int x, int y, int direction);
		~Pellet();
		Pellet(const Pellet&);
		Pellet& operator=(const Pellet&);
}
