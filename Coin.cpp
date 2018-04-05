/* Nama: Coin.cpp
 * Ayah: Item.h
 * Tanggal: 6 April 2018 */
 
#include "Item.h"
#include "Coin.h"

#include <iostream>
using namespace std;

/* Constructor */
Coin::Coin(int x, int y): Item(x, y) {}

/* Destructor */
Coin::~Coin() {}

/* Copy Constructor */
Coin::Coin(const Coin& C) {
	this->x = C.getX();
	this->y = C.getY();
}

/* Operator = */
Coin& Coin::operator=(const Coin&) {
	return *this;
}

/* Getter dan Setter */
int Coin::getValue() {
	return value;
}

void Coin::setValue(int value) {
	this.value = value;
}
