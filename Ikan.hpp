// Ikan.hpp
/* Kelas Ikan merupakan turunan dari Kelas Entitas */
/* Turunannya adalah Kelas Guppy dan Kelas Piranha */

#include <iostream>
using namespace std;

#include "Entitas.hpp"

class Ikan: public Entitas {
	protected:
		int harga;		// Harga Ikan
		int tahap;		// Tahap pertumbuhan ikan (1 ~ 3)
		bool full;		// Boolean yang menandakan kenyang jika True
	
	public:
		// Konstruktor
		Ikan();
		
		// Destruktor
		virtual ~Ikan() { cout << "Ikan telah mati" << endl; }
		
		// Getter dan Setter
		int getHarga() const;
		int getTahap() const;
		bool isFull() const;
		void setHarga(int price);
		void setTahap(int phase);
		void setFull(bool penuh);
};
