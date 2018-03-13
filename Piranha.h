#include "Fish.h"

class Piranha {
public:
	Piranha(int x, int y, int direction);
	~Piranha();
	Piranha(const Piranha&);
	Piranha& operator=(const Piranha&);
}