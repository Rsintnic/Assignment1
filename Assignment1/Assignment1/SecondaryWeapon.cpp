#include "SecondaryWeapon.h"

#include <iostream>

SecondaryWeapon::SecondaryWeapon(unsigned int _clipSize)
{
	if (_clipSize > 0)
		clipSize = _clipSize;
	else
		clipSize = 1;

	clipCount = clipSize;
}


SecondaryWeapon::~SecondaryWeapon()
{
}

void SecondaryWeapon::Reload() {
	clipCount = clipSize;
	std::cout << "Kashink! " << clipCount << "/" << static_cast<unsigned char>(236) << std::endl;
}
