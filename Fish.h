#include "Aquarium.h"
#include "Creature.h"

class Fish : public Creature {
	public:
		Fish(int x, int y, int speed, int direction); // Perubahan: nambah speed
		~Fish();
		Fish(const Fish&);
		Fish& operator=(const Fish&);

		void death();
		void spawnCoin(Aquarium&);
}