#pragma once

#include "PrimaryWeapon.h"
#include <string>
class AssaultRifle : public PrimaryWeapon
{
private:
	//std::string name = "Assault Rifle";
	
public:
	AssaultRifle();
	~AssaultRifle();
	void Shoot();
};

