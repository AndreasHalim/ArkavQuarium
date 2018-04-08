#include "Aquarium.h"

	Aquarium::Aquarium(){}
	Aquarium::~Aquarium(){}
	Aquarium::Aquarium(const Aquarium& a){
        for(int i =0; i<size; i++){
            for(int j = 0; j<size; j++){
                Map[i][j]=a.Map[i][j];
            }
        }
	}
	Aquarium& Aquarium::operator=(const Aquarium& a){
        for(int i =0; i<size; i++){
            for(int j = 0; j<size; j++){
                Map[i][j]=a.Map[i][j];
            }
        }
	}

	int Aquarium::getSize(){
        return size;
    }

	LList<Entity*> Aquarium::getLinkedList(int x, int y) const{
        return Map[x][y];
	}
	void Aquarium::insertEntity(Entity* e, int x, int y){
        Map[x][y].add(e);
	}
	Entity* Aquarium::delEntity(Entity* e, int x, int y){
        Map[x][y].remove(e);
        return e;
	}

	//LList<Entity>** Map;
	//const int size= 100;
