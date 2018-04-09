#include "Aquarium.h"

class Entity {
	public:
		Entity(int x, int y, int speed);
		~Entity();
		Entity(const Entity& E);
		Entity& operator=(const Entity& E);
		virtual void move(Aquarium& Aq, int x, int y) = 0;
		int getSpeed() const;
		int getX() const;
		int getY() const;
		int getId() const;
		void setSpeed(int speed);
		void setX(int x);
		void setY(int y);
	private:
		int speed;
		int x;
		int y;
		const int id;
		static int count;
}
