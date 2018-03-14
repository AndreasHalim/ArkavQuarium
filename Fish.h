#ifndef FISH_H
#define FISH_H

//INTERFACE FISH
class Fish{
	public:
		virtual void grow()=0;
		virtual void death()=0;
		virtual void spawnCoin(Aquarium&)=0;
}

#endif
