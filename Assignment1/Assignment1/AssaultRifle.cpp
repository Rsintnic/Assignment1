#include "AssaultRifle.h"

#include <iostream>

AssaultRifle::AssaultRifle() : PrimaryWeapon(27)
{

}


AssaultRifle::~AssaultRifle()
{
}

void AssaultRifle::Shoot() {
	//Fires one shot at a time (loop to fire continuosly)
	if (clipCount > 0) {
		clipCount--;
		std::cout << "Pew";
	}
	else {
		std::cout << "Clips is empty 0/" << ammoRemaining << std::endl;
	}
}


