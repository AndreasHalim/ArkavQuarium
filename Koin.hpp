// Koin.hpp
/* Kelas Koin merupakan turunan dari Kelas Entitas */
/* Sejauh ini belum/tidak memiliki keturunan */

#include <iostream>
using namespace std;

#include "Entitas.hpp"

class Koin: public Entitas {
	private:
		int nilai;		// Nilai suatu mata uang
	
	public:
		// Konstruktor
		Koin(int val);
		
		// Getter dan Setter
		int getNilai() const;
		void setNilai(int val);
};
