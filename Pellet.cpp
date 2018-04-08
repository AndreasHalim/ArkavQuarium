/* Nama: Pellet.cpp
 * Ayah: Item.h
 * Tanggal: 6 April 2018 */

#include "Item.h"
#include "Pellet.h"

#include <iostream>
using namespace std;

/* Constructor */
Pellet::Pellet(int x, int y): Item(x, y) {}

/* Destructor */
Pellet::~Pellet() {}

/* Copy Constructor */
Pellet::Pellet(const Pellet& P) {
	this->x = P.getX();
	this->y = P.getY();
}

/* Operator = */
Pellet& Pellet::operator=(const Pellet&) {
	return *this;
}
