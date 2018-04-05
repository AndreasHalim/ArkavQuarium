#include "Fish.h"

class Piranha {
public:
	Piranha(int x, int y, int speed, int direction); // Perubahan: nambah speed
	~Piranha();
	Piranha(const Piranha&);
	Piranha& operator=(const Piranha&);
}