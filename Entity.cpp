#include "Entity.h"

Entity::Entity(int x, int y, int speed):id(count){
	this->x = x;
	this->y = y;
	this->speed = speed;
	count++;
}
Entity::~Entity() {}
Entity::Entity(const Entity& E):id(count){
	this->x = x;
	this->y = y;
	this->speed = speed;
	count++;
}
Entity::Entity& operator=(const Entity& E){
	this->x = x;
	this->y = y;
	this->speed = speed;
	return *this;
}

int Entity::getSpeed() const{
	return this->speed;
}
int Entity::getX() const{
	return this->x;
}
int Entity::getY() const{
	return this->y;
}
int Entity::getId() const{
	return this->id;
}
void Entity::setSpeed(int speed){
	this->speed = speed;
}
void Entity::setX(int x){
	this->x = x;
}
void Entity::setY(int y){
	this->y = y;
}
int Entity::count = 0;
