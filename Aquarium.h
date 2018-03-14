#include "LList.h"
#include "Aquarium.h"
#include "Entity.h"

class Aquarium {
public:
	Aquarium();
	~Aquarium();
	Aquarium(const Aquarium&);
	Aquarium& operator=(const Aquarium&);

	int getSize();

	LList<Entity> getLinkedList(int x, int y) const;
	void insertEntity(Entity e, int x, int y);
	Entity delEntity(int x, int y);
private:
	LList<Entity>** Map;
	const int size= 100;
}
