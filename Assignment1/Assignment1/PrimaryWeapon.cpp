#include "PrimaryWeapon.h"

#include <iostream>

PrimaryWeapon::PrimaryWeapon(unsigned int _clipSize) : Weapon()
{
	if (_clipSize > 0)
		clipSize = _clipSize;
	else
		clipSize = 1;

	clipCount = clipSize;
	ammoMax = clipSize * 5;
	ammoRemaining = ammoMax;
}


PrimaryWeapon::~PrimaryWeapon()
{
}

void PrimaryWeapon::Reload() {
	ammoRemaining -= clipSize - clipCount;

	std::cout << "Kachunk! " << clipCount << "/" << ammoRemaining << std::endl;
}
