#ifndef AQUARIUM_H
#define AQUARIUM_H

#include "LList.h"
#include "Entity.h"

class Aquarium {
public:
	Aquarium();
	~Aquarium();
	Aquarium(const Aquarium&);
	Aquarium& operator=(const Aquarium&);

	int getSize();

	LList<Entity*> getLinkedList(int x, int y) const;
	void insertEntity(Entity* e, int x, int y);
	Entity* delEntity(Entity* e, int x, int y);
private:
	LList<Entity*> Map[100][100];
	const int size = 100;
};

#endif
