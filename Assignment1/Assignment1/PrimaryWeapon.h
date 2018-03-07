#pragma once

#include "Weapon.h"
class PrimaryWeapon : public Weapon
{
protected:
	unsigned int clipSize;
	unsigned int clipCount;
	unsigned int ammoMax;
	unsigned int ammoRemaining;
public:
	PrimaryWeapon(unsigned int _clipSize);
	~PrimaryWeapon();

	virtual void Shoot() {};
	void Reload();
};

