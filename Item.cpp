/* Nama: Item.h
 * Turunannya: Pellet dan Coin 
 * Tanggal: 6 April 2018 */

#include "Entity.h"
#include "Item.h"

#include <iostream>
using namespace std;

/* SPEED PADA ITEM MAUPUN TURUNANNYA ADALAH 1, MASIH MERUPAKAN ASUMSI */

/* Constructor */
Item::Item(int x, int y): Entity(x, y, 1) {}
/* Saat kelas ini diimplementasikan, kelas Entity belum lengkap parameternya untuk direction (arah), sehingga
 * Entity diasumsikan sebagai Entity(int x, int y, int speed, int direction). Arah untuk 2 adalah turun
 * Abaikan jika Entity sudah diperbaiki */

/* Destructor */
Item::~Item() {}

/* Copy Constructor */
Item::Item(const Item& I) {
	this->x = I.getX();
	this->y = I.getY();
}

/* Operator = */
Item& Item::operator=(const Item& I) {
	return *this;
}

/* Fungsi dan Prosedur */
bool Item::isOnLand() {
// Bernilai TRUE, apabila telah mencapai tanah
	return (getY() == 0);
}
