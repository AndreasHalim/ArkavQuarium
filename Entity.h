class Entity {
public:
	Entity(int x,int y, int speed);
	~Entity();
	Entity(const Entity&);
	Entity& operator=(const Entity&);

	void move(int x, int y);
private:
	int speed;
	int x;
	int y;
	int id;
	static int count;
}