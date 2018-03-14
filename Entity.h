#ifndef ENTITY_H
#define ENTITY_H

#include "Aquarium.h"

class Entity {
public:
	Entity(int x, int y, int speed);
	~Entity();
	Entity(const Entity&);
	Entity& operator=(const Entity&);

	virtual void move(int x, int y)=0;

	int getSpeed();
	int getX();
	int getY();
	int getId();

	void setSpeed(int speed);
	void setX(int x);
	void setY(int y);
	void setId(int id);
private:
	int speed;
	int x;
	int y;
	int id;
	static int count;
}

#endif
