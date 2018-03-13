#include "Fish.h"

class Guppy {
public:
	Guppy(int x, int y, int direction);
	~Guppy();
	Guppy(const Guppy&);
	Guppy& operator=(const Guppy&);
}