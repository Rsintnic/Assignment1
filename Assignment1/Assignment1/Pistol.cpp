#include "Pistol.h"

#include <iostream>

Pistol::Pistol() : SecondaryWeapon(7)
{
}


Pistol::~Pistol()
{
}

void Pistol::Shoot() {
	if (clipCount > 0) {
		clipCount--;
		std::cout << "Pling!" << std::endl;
	}
	else {
		std::cout << "Clip is empty 0/" << static_cast<unsigned char>(236) << std::endl;
	}
	
}
