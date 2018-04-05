#include "Fish.h"

class Guppy {
	public:
		Guppy(int x, int y, int speed, int direction); // Perubahan: nambah speed
		~Guppy();
		Guppy(const Guppy&);
		Guppy& operator=(const Guppy&);

		// Perubahan: nambah grow
		void grow();

		// Perubahan: nambah getStage & setStage
		int getStage();
		void setStage(int);

	// Perubahan: nambah stage
	private:
		int stage;
}