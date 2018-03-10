// Entitas.hpp
/* Kelas Entitas merupakan parent dari segala kelas */
/* Turunannya adalah kelas Ikan, Makanan, Siput, dan Koin */

#include <iostream>
using namespace std;

class Entitas {
	protected:
		int x, y;		// Koordinat untuk setiap matriksnya
		char dir;		// Arah pergerakan; N, E, S, W untuk Utara, Timur, Selatan, Barat
	
	public:
		// Konstruktor
		Entitas();
		
		// Destruktor
		virtual ~Entitas() { cout << "Makhluk hidup telah mati" << endl; }
		
		/* Getter dan Setter */
		int getX() const;
		int getY() const;
		void setX(int a);
		void setY(int b);
		
		/* Fungsi dan Prosedur */
		
};
