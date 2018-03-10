// Siput.hpp
/* Kelas Siput merupakan turunan dari Kelas Entitas */
/* Sejauh ini belum/tidak memiliki keturunan */

/* Perubahan rancangan yang sebelum Siput merupakan turunan Pet dan Pet turunan Entitas */

#include <iostream>
using namespace std;

#include "Entitas.hpp"

class Siput: public Entitas {
	private:
		bool adaKoin;		// Jika ada koin, maka True dan akan bergerak
	
	public:
};
